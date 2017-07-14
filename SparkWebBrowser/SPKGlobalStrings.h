//
//  SPKGlobalStrings.h
//  Spark
//
//  Created by Jonathan Wukitsch on 7/14/17.
//  Copyright © 2017 Insleep. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#ifndef SPKGlobalStrings_h
#define SPKGlobalStrings_h

// Search engine query strings
NSString *googleSearchString = @"https://www.google.com/search?q=%@";
NSString *bingSearchString = @"https://www.bing.com/search?q=%@";
NSString *yahooSearchString = @"https://search.yahoo.com/search?p=%@";
NSString *duckDuckGoSearchString = @"https://www.duckduckgo.com/%@";
NSString *aolSearchString = @"https://search.aol.com/aol/search?q=%@";
NSString *customSearchString = nil;

// Search engine default homepages
NSString *googleDefaultURL = @"https://www.google.com/";
NSString *bingDefaultURL = @"https://www.bing.com/";
NSString *yahooDefaultURL = @"https://www.yahoo.com/";
NSString *duckDuckGoDefaultURL = @"https://www.duckduckgo.com/";
NSString *aolDefaultURL = @"https://www.aol.com/";

// Strings for "Help" menu bar item
NSString *appReportIssueURL = @"https://www.github.com/insleep/spark-web-browser/issues/new?title=Describe%20your%20feature%20request%20or%20bug%20report,%20succinctly&body=**Spark%20version:**%20%0A%20**Spark%20build:**%20%0A%20**Release%20channel:**%20%0A%20**macOS%20version:**%20%0A%0A%20**Description:**%20%0A%0A%20**Steps%20to%20reproduce:**%20%0A%0A%20**Expected%20results:**%20%0A%0A%20**Actual%20results:**%20";
NSString *appExistingIssuesURL = @"https://www.github.com/insleep/spark-web-browser/issues/";
NSString *appReleasesURL = @"https://www.github.com/insleep/spark-web-browser/releases/tag/%@/";
NSString *appRoadmapURL = @"https://trello.com/b/TPd5oizl/spark-roadmap/";

// Strings related to page indicator
NSString *secureSparkPageText = @"You are viewing a secure Spark page."; // Text shown when a secure Spark page is loaded
NSString *secureSparkPageDetailText = @"Your information is private when it is sent to secure Spark pages."; // Detail text shown when a secure Spark page is loaded
NSString *secureHTTPSPageText = @"Your connection to this site is secure."; // Text shown when a secure site is loaded
NSString *insecureHTTPSPageText = @"Your connection to this site is not secure."; // Text shown when an insecure site is loaded
NSString *secureHTTPSPageDetailText = @"Your information (for example, passwords or credit card numbers) is private when it is sent to this site."; // Detail text shown when a secure site is loaded
NSString *insecureHTTPSPageDetailText = @"You should not enter any sensitive information on this site (for example, passwords or credit cards)."; // Detail text shown when an insecure site is loaded

// Miscellaneous strings
NSString *betaOperatingSystemDisclaimerText = @"You are running a build of macOS 10.13 High Sierra that is not officially supported by Spark (%@). Please be aware that Spark may function improperly."; // Disclaimer shown when user is running a non-supported beta build of macOS 10.13
NSString *currentChromeVersion = @"59.0.3071.104"; // Used when setting user agent

// Mutable strings
NSString *appVersionString = nil; // Spark version number
NSString *appBuildString = nil; // Spark build number
NSString *operatingSystemVersionString = nil; // macOS version number
NSString *operatingSystemBuildString = nil; // macOS build number
NSString *macOSProductName = nil; // macOS product name
NSString *customMacOSProductName = nil; // Edited macOS product name
NSString *releaseChannel = nil; // Spark release channel
NSString *editedVersionString = nil; // Edited macOS version string
NSString *userAgent = nil; // Spark user agent, used when loading webpages
NSString *clippedTitle = nil; // Title used within the titleStatus string
NSString *suggestedFilename = nil; // Filename suggested when downloading files
NSString *clippedFilename = nil; // Suggested filename with ellipsis suffix
NSString *destinationFilename = nil; // Directory where downloaded files are stored
NSString *homeDirectory = nil; // User home directory
NSString *downloadLocation = nil; // Download location
NSString *downloadLocationEdited = nil; // Download location, edited to remove special characters
NSString *bytesReceivedFormatted = nil; // Bytes received (file download) (formatted)
NSString *expectedLengthFormatted = nil; // Expected length of file being downloaded (formatted)
NSString *lastSession = nil; // Value from NSUserDefaults of lastSession

// Webpage loading-related strings
NSString *searchString = nil; // String used when initiating a search query
NSString *homepageString = nil; // Current homepage chosen
NSString *urlString = nil; // Initial string to load a webpage from
NSString *editedURLString = nil; // Edited string to load a webpage from
NSString *capitalizedReleaseChannel = nil; // Spark release channel, including capital letters
NSString *uncapitalizedReleaseChannel = nil; // Spark release channel, not including capital letters
NSString *searchEngineChosen = nil; // Current search engine chosen
NSString *colorChosen = nil; // Current theme color stored in NSUserDefaults
NSString *urlToString = nil; // NSURL converted to a NSString, used when handling spark:// URL events
NSString *websiteURL = nil; // Current website URL
NSString *faviconURLString = nil; // URL for the service that retrieves favicons

#endif /* SPKGlobalStrings_h */
