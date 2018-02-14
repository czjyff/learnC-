#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class T
{
    public:
        int x, y, z;
        T(int a, int b, int c):x(a),y(b),z(c){};
};

bool operator < (const T &t1, const T &t2)
{
    return t1.z > t2.z;
    // 按照z 的顺序来决定t1 和t2 的顺序.
    //优先队列试图将两个元素x 和y 代入比较运算符(对less 算子，调用x<y(降序），对greater（升序）算子，调用x>y)，
    //若结果为真，则x 排在y 前面，y 将先于x 出队，反之，则将y 排在x 前面，x 将先出队。
}

int main()
{
    priority_queue<T> q;
    q.push( T(4,4,3) );
    q.push( T(2,2,5) );
    q.push( T(1,5,4) );
    q.push( T(3,3,6) );
    while ( !q.empty() )
    {
        T t = q.top();
        q.pop();
        cout << t.x << " " << t.y << " " << t.z << endl;
    }

    priority_queue<int,vector<int>, less<int> > na;
    //queue<int> na;
    na.push ( 3 );
    na.push ( 5 );
    na.push ( 1 );
    na.push ( 4 );
    while ( !na.empty() )
    {
        cout << na.top() << ' ';  // priority_queue访问队首元素用.top()函数，而queue访问队首元素用.front()函数，队尾用.back()
        na.pop();
    }


    return 0;
}
