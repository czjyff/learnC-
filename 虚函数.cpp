#include <stdio.h>
//虚函数
//定义：在某基类中声明为 virtual 并在一个或多个派生类中被重新定 义的成员函数[1]
//语法：virtual 函数返回类型 函数名（参数表） { 函数体 }
//用途：实现多态性，通过指向派生类的基类指针，访问派生类中同名覆盖成员函数

class A {
public:
    void fn() { printf("fn in A\n"); }
    //virtual void v_fn() = 0 ;      // 纯虚函数。
    virtual void v_fn(){ printf("virtual fn in A\n"); }  // 虚函数且有定义
};

class B : public A {
public:
    void fn() { printf("fn in B\n"); }
    virtual void v_fn() { printf("virtual fn in B\n"); }  // 这里的派生类B里对虚函数有定义，则在调用时B会覆盖A的虚函数。
};

int main() {
    A *a = new B();
    a->fn();
    a->v_fn();   // 输出B里定义的虚函数。
    delete a;

    return 0;
}
