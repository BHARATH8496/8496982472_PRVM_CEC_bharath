//5. Use Protected Members//
//Create a class Base with a protected variable. Derive a class Derived and use the protected variable in a public function.//
#include <iostream>
class Base {
protected:
    int protectedVar;
public:
    Base(int val) : protectedVar(val) {}
};

class Derived : public Base {
public:
    Derived(int val) : Base(val) {}

    void displayProtectedVar() {
        std::cout << "Protected Variable: " << protectedVar << std::endl;
    }
};

int main() {
    Derived obj(10);
    obj.displayProtectedVar();
    return 0;
}