#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: kagi \"search query\"\n");
        return 1;
    }

    CURL *curl = curl_easy_init();
    if (!curl) {
        fprintf(stderr, "Error initializing curl\n");
        return 1;
    }

    char *escaped_query = curl_easy_escape(curl, argv[1], 0);
    if (!escaped_query) {
        fprintf(stderr, "Error escaping the query\n");
        curl_easy_cleanup(curl);
        return 1;
    }

    char url[512];
    snprintf(url, sizeof(url), "https://kagi.com/search?q=%s", escaped_query);
    
    printf("Opening URL: %s\n", url); // Debugging purposes

    // Replace 'xdg-open' with 'open' for macOS
    char cmd[1024];
    snprintf(cmd, sizeof(cmd), "open \"%s\"", url);

    int result = system(cmd);
    curl_free(escaped_query);
    curl_easy_cleanup(curl);

    if (result) {
        fprintf(stderr, "Error opening the URL\n");
        return 1;
    }

    return 0;
}
