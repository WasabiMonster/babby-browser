[![Spark Logo](spark-banner.png)](https://github.com/insleep/spark-web-browser/ "Spark - a minimal web browser for macOS")

[![Version](https://img.shields.io/github/release/insleep/spark-web-browser.svg?style=flat-square)](https://github.com/insleep/spark-web-browser/releases/)&nbsp;[![Build Status](https://img.shields.io/travis/insleep/spark-web-browser/master.svg?style=flat-square)](https://travis-ci.org/insleep/spark-web-browser)&nbsp;[![Language](https://img.shields.io/badge/language-Objective--C-red.svg?style=flat-square)](https://developer.apple.com/library/mac/documentation/Cocoa/Conceptual/ProgrammingWithObjectiveC/Introduction/Introduction.html)

## About

Spark is a simple, lightweight browser for Windows and macOS built with the [WebKit](https://webkit.org) browser engine.

Although being lightweight and easy-to-use, Spark is fast and powerful, and can load webpages in *seconds*.

Spark for macOS is compatible with macOS 10.11 El Capitan and later. Earlier versions of macOS might work, but are not supported.

## Screenshots

<img src="./Screenshots/Screenshot1.png" alt="Screenshot1" width="200" /><img src="./Screenshots/Screenshot2.png" alt="Screenshot2" width="200" /><img src="./Screenshots/Screenshot3.png" alt="Screenshot3" width="200" /><img src="./Screenshots/Screenshot4.png" alt="Screenshot4" width="200" /><img src="./Screenshots/Screenshot5.png" alt="Screenshot5" width="200" />

## Install

Installation is easy. Click [here](https://github.com/insleep/spark-web-browser/releases/) to download the latest version of Spark for macOS.

## Custom Builds

In order to build Spark for macOS, you need to have Xcode 8 and git 1.7 or later. Earlier versions might work, but are not supported.

Git is downloadable [here](https://git-scm.com/downloads) and Xcode 8 is downloadable via the Mac App Store.

#### Instructions:

Clone a copy of the main Spark for macOS git repo by running:

```bash
git clone git://github.com/insleep/spark-web-browser.git
```

Open `Spark.xcodeproj`, located in the `SparkWebBrowser` directory of Spark for macOS.

Make any necessary changes and compile Spark within Xcode.

To export a Spark build, use the Xcode Organizer window, available through `Window > Organizer`. Click `Export...`, then `Export as a macOS App`.

## Nightly Builds

Interested in testing out the latest Spark releases before they're available to the general public? You can enroll in the nightly release channel by installing Spark, clicking the settings gear, then selecting "Preferences," and clicking "Nightly" under the "Release Channel" section.

## [Known Issues](https://github.com/insleep/spark-web-browser/issues/)

## [License](https://github.com/insleep/spark-web-browser/blob/master/LICENSE)
