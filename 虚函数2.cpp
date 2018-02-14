#include <iostream>
using namespace std;

class Shape {
   protected:
      int width, height;
   public:
      Shape( int a=0, int b=0)
      {
         width = a;
         height = b;
      }
      virtual int area()  // 加上 virtual 关键字，对于shape指针,编译器看的是指针的内容，而不是它的类型。
      {                   // 如果不加virtual,则编译的时候就已经把area函数与基类shape绑定.
         cout << "Parent class area :" <<endl;
         return 0;
      }
};
class Rectangle: public Shape{
   public:
      Rectangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      {
         cout << "Rectangle class area :" <<endl;
         return (width * height);
      }
};
class Triangle: public Shape{
   public:
      Triangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      {
         cout << "Triangle class area :" <<endl;
         return (width * height / 2);
      }
};
// 程序的主函数
int main( )
{
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);

   // 存储矩形的地址
   shape = &rec;

   // 调用矩形的求面积函数 area
   shape->area();

   // 存储三角形的地址
   shape = &tri;

   // 调用三角形的求面积函数 area
   shape->area();

   return 0;
}
