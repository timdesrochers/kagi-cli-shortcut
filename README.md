# kagi

A simple command-line shortcut to make web searches.

## Rationale

Why type more than you have to? This opens a Kagi search results page in your default browser, or in a cli browser of your choice. If you're not using Kagi, you can pass `--brave` and get your results from Brave Search instead. 

## Features

- Dead simple
- Uses Curl for URL handling
- Supports using alternative CLI browsers (lynx, w3m, links, etc.)
- Option to use alternative search base URLs (only Brave Search, currently)

## Release for macOS

version 0.23.1 [file](/file)

Install the binary by copying it to wherever your $PATH may lead you.

## Usage
```
kagi: A simple CLI shortcut for making web searches

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

---

## Compiling from source

Install Curl development package if not already installed. Then, run:

```
gcc -o kagi kagi.c -lcurl
```
