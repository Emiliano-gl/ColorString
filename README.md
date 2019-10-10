# ColorString

A library to change the color of de text with **C++11**

## How to use

**\<color name\>**`ColorText(string text, string decorator)`

### colors

* **Black**
* **Red**
* **Green**
* **Yellow**
* **Cyan**
* **Magenta**
* **Blue**
* **White**

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


