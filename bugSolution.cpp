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
    delete obj; // Deallocate memory
    obj = nullptr; // Set pointer to null after deallocation
    return 0;
}
```