# kagi

A simple command-line shortcut to make web searches.

## Rationale

kagi provides a command-line interface for making quick web searches directly from your terminal. With support for custom CLI browsers and base URLs, kagi provides a flexible and extensible search experience.

## Features

- Quick and easy-to-use command line interface
- Uses Curl for URL handling
- Supports using alternative CLI browsers (lynx, w3m, links, etc.)
- Option to use alternative search base URLs (Brave search, etc.)
- Debugging output to display the generated URLs

## Dependencies

- Curl development package (libcurl-dev or libcurl-devel)
- A general purpose browser (default or specified)
- (Optional) A CLI browser (lynx, w3m, or links)

## Compilation

Install Curl development package if not already installed. Then, run the following command:

```
gcc -o kagi kagi.c -lcurl
```

## Usage

Refer to the following help text for the syntax and options:

```
kagi: A simple CLI tool for making web searches

Usage:
  kagi "search query" [--cli browser] [--brave] [--help]

Options:
  --cli browser   Opens search results in a specified CLI browser such as 'lynx', 'w3m', or 'links'. Replace 'browser' with the desired CLI browser name.
  --brave Uses an alternative search base URL (Brave search) instead of the default base Kagi URL.
  --help          Shows this help text.

Examples:
  kagi "hello world"
  kagi "hello world" --cli lynx
  kagi "hello world" --brave
  kagi "hello world" --cli w3m --brave

Note: By default, the program uses 'xdg-open' in Linux systems or 'open' in macOS systems to open search results in the default web browser.
```
