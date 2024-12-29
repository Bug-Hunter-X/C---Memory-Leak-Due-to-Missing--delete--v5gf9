```cpp
#include <iostream>

class MyClass {
public:
    MyClass() { std::cout << "Constructor called" << std::endl; }
    ~MyClass() { std::cout << "Destructor called" << std::endl; }
};

int main() {
    MyClass* obj = new MyClass();
    // ... some code here ... 
    delete obj; // Missing delete can lead to memory leak
    return 0;
}
```