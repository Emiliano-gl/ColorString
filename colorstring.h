#ifndef COLORSTRING_H
#define COLORSTRING_H

#include <iostream>

using namespace std;

namespace color {

  const string colorCode = "\033[";
  const string reset     = "\033[0m";

  const string blackText   = "30m";
  const string redText     = "31m";
  const string greenText   = "32m";
  const string yellowText  = "33m";
  const string cyanText    = "34m";
  const string magentaText  = "35m";
  const string blueText    = "36m";
  const string whiteText   = "37m";

  const string bold      = "1;";
  const string underline = "4;";


  // BLACK Color
  auto blackColorText(const string &text) -> string {
    return colorCode + blackText + text + reset;
  }

  auto blackColorText(const string &text, const string &decorator) -> string {
    if(decorator == "bold")
      return colorCode + bold + blackText + text + reset;

    if(decorator == "underline")
      return colorCode + underline + blackText + text + reset;

    return colorCode + blackText + text + reset;
  }


  // RED Color
  auto redColorText(const string &text) -> string {
    return colorCode + redText + text + reset;
  }

  auto redColorText(const string &text, const string &decorator) -> string {
    if(decorator == "bold")
      return colorCode + bold + redText + text + reset;

    if(decorator == "underline")
      return colorCode + underline + redText + text + reset;

    return colorCode + redText + text + reset;
  }


  // GREEN Color
  auto greenColorText(const string &text) -> string {
    return colorCode + greenText + text + reset;
  }

  auto greenColorText(const string &text, const string &decorator) -> string {
    if(decorator == "bold")
      return colorCode + bold + greenText + text + reset;

    if(decorator == "underline")
      return colorCode + underline + greenText + text + reset;

    return colorCode + greenText + text + reset;
  }


  // YELLOW Color
  auto yellowColorText(const string &text) -> string {
    return colorCode + yellowText + text + reset;
  }

  auto yellowColorText(const string &text, const string &decorator) -> string {
    if(decorator == "bold")
      return colorCode + bold + yellowText + text + reset;

    if(decorator == "underline")
      return colorCode + underline + yellowText + text + reset;

    return colorCode + yellowText + text + reset;
  }


  // CYAN Color
  auto cyanColorText(const string &text) -> string {
    return colorCode + cyanText + text + reset;
  }

  auto cyanColorText(const string &text, const string &decorator) -> string {
    if(decorator == "bold")
      return colorCode + bold + cyanText + text + reset;

    if(decorator == "underline")
      return colorCode + underline + cyanText + text + reset;

    return colorCode + cyanText + text + reset;
  }


  // MAGENTA Color
  auto magentaColorText(const string &text) -> string {
    return colorCode + magentaText + text + reset;
  }

  auto magentaColorText(const string &text, const string &decorator) -> string {
    if(decorator == "bold")
      return colorCode + bold + magentaText + text + reset;

    if(decorator == "underline")
      return colorCode + underline + magentaText + text + reset;

    return colorCode + magentaText + text + reset;
  }


  // BLUE Color
  auto blueColorText(const string &text) -> string {
    return colorCode + blueText + text + reset;
  }

  auto blueColorText(const string &text, const string &decorator) -> string {
    if(decorator == "bold")
      return colorCode + bold + blueText + text + reset;

    if(decorator == "underline")
      return colorCode + underline + blueText + text + reset;

    return colorCode + blueText + text + reset;
  }


  // WHITE Color
  auto whiteColorText(const string &text) -> string {
    return colorCode + whiteText + text + reset;
  }

  auto whiteColorText(const string &text, const string &decorator) -> string {
    if(decorator == "bold")
      return colorCode + bold + whiteText + text + reset;

    if(decorator == "underline")
      return colorCode + underline + whiteText + text + reset;

    return colorCode + whiteText + text + reset;
  }

}

#endif // COLORSTRING_H
