#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/mustafaozdemir/Qt_project/build-periodiCpp-Qt_6_6_1_macos-Release
  make -f /Users/mustafaozdemir/Qt_project/build-periodiCpp-Qt_6_6_1_macos-Release/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/mustafaozdemir/Qt_project/build-periodiCpp-Qt_6_6_1_macos-Release
  make -f /Users/mustafaozdemir/Qt_project/build-periodiCpp-Qt_6_6_1_macos-Release/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/mustafaozdemir/Qt_project/build-periodiCpp-Qt_6_6_1_macos-Release
  make -f /Users/mustafaozdemir/Qt_project/build-periodiCpp-Qt_6_6_1_macos-Release/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/mustafaozdemir/Qt_project/build-periodiCpp-Qt_6_6_1_macos-Release
  make -f /Users/mustafaozdemir/Qt_project/build-periodiCpp-Qt_6_6_1_macos-Release/CMakeScripts/ReRunCMake.make
fi

