#include <iostream>
#include "colorstring.h"

using namespace std;
using namespace color;

int main(){

  cout << endl << endl;

  cout << "Normal Text" << endl;

  cout << endl << endl;

  cout << blackColorText("Example color black") << endl;
  cout << blackColorText("Example color black bold", "bold") << endl;
  cout << blackColorText("Example color black underline", "underline") << endl;

  cout << endl << endl;

  cout << redColorText("Example color red") << endl;
  cout << redColorText("Example color red bold", "bold") << endl;
  cout << redColorText("Example color red underline", "underline") << endl;

  cout << endl << endl;

  cout << greenColorText("Example color green") << endl;
  cout << greenColorText("Example color green bold", "bold") << endl;
  cout << greenColorText("Example color green underline", "underline") << endl;

  cout << endl << endl;

  cout << yellowColorText("Example color yellow") << endl;
  cout << yellowColorText("Example color yellow bold", "bold") << endl;
  cout << yellowColorText("Example color yellow underline", "underline") << endl;

  cout << endl << endl;

  cout << cyanColorText("Example color cyan") << endl;
  cout << cyanColorText("Example color cyan bold", "bold") << endl;
  cout << cyanColorText("Example color cyan underline", "underline") << endl;

  cout << endl << endl;

  cout << magentaColorText("Example color magenta") << endl;
  cout << magentaColorText("Example color magenta bold", "bold") << endl;
  cout << magentaColorText("Example color magenta underline", "underline") << endl;

  cout << endl << endl;


  cout << blueColorText("Example color blue") << endl;
  cout << blueColorText("Example color blue bold", "bold") << endl;
  cout << blueColorText("Example color blue underline", "underline") << endl;

  cout << endl << endl;

  cout << whiteColorText("Example color white") << endl;
  cout << whiteColorText("Example color white bold", "bold") << endl;
  cout << whiteColorText("Example color white underline", "underline") << endl;

  cout << endl << endl;

  return 0;
}
