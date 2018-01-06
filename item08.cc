#include <iostream>

class A {
public:
    ~A() noexcept(false) { // 让析构函数抛出异常
        try {
            throw;
        }
        catch(...) {
            std::cout << "catch in ~A()" << std::endl;
        }
    }
private:
    int a_;
};

int main() {
    try {
        A a;
    }
    catch(...) {
        std::cout << "catch in main" << std::endl;
    }
    return 0;
}

