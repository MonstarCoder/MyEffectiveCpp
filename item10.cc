#include <iostream>

class A {
public:
    A() : a_(1) {}
    A(int b) : a_(b) {}
    A(const A& B) {
        a_ = B.a_;
        std::cout << "copy constructor" << std::endl;
    }
    A& operator=(const A& B) {
        a_ = B.a_;
        std::cout << "copy assignment" << std::endl;
        return *this;
    }
    //A operator=(const A& B) {
        //a_ = B.a_;
        //std::cout << "copy assignment" << std::endl;
        //return *this;
    //}
    int print() { return a_; }
private:
    int a_ = 1;
};

int main() {
    A a(1), b(2), c(3);
    std::cout << a.print() << " " << b.print() << " " << c.print() << std::endl;
    a = b = c;
    std::cout << a.print() << " " << b.print() << " " << c.print() << std::endl;
    return 0;
}
