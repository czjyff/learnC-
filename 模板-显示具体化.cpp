#include <iostream>
#include <cstring>

using namespace std;


template <typename T>
void swap1( T &a, T &b );

struct job
{
    string name;
    int salary;
    int floor;
};

void show (job &j);

// 下面是显示具体化，以template <>打头，函数名称后面的<>可写可不写，因为函数的参数类型已经表明这是job的一个具体化。
//也就是可以写成：template <> void swap1 (job &a, job &b);
template <> void swap1<job> (job &a, job &b);

int main()
{
    job k = {"hhh", 5000, 6};
    job o = {"kkk", 8000, 9};
    swap1(k,o);
    show(k);
    show(o);
    return 0;
}

template <typename T>
void swap1( T &a, T &b )
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// 针对job结构体，只交换两个数据salary&floor，不交换名字，可以实现特殊对待的效果
template <> void swap1<job> (job &a, job &b)
{
    int t1;
    t1 = a.salary;
    a.salary = b.salary;
    b.salary = t1;

    t1 = a.floor;
    a.floor = b.floor;
    b.floor = t1;

}

void show (job &j)
{
    cout << j.name << ": $" << j.salary <<" on floor " << j.floor <<endl;
}
