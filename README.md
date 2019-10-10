# ColorString

A library to change the color of de text with **C++11**

## How to use

**\<color name\>**`ColorText(string text, string decorator)`

### colors

* **<span style="color: #000000">Black</span>**
* **<span style="color: #ff0000">Red</span>**
* **<span style="color: #00ff00">Green</span>**
* **<span style="color: #ffff00">Yellow</span>**
* **<span style="color: #00cdcd">Cyan</span>**
* **<span style="color: #cd00cd">Magenta</span>**
* **<span style="color: #0000ee">Blue</span>**
* **<span style="color: #e5e5e5">White</span>**

### Example

```Cpp
    #include <iostream>
    #include "colorstring.h"

    using namespace std;
    using namespace color;

    int main(){
        
        cout << redColorText("Error", "bold") << endl;
        cout << greenColorText("Success") << endl;
        cout << yellowColorText("Warning", "underline") << endl;
        
        return 0;
    }

```

> **Note**: decorator only have two values **bold** and **underline**


