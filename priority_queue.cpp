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
    // ����z ��˳��������t1 ��t2 ��˳��.
    //���ȶ�����ͼ������Ԫ��x ��y ����Ƚ������(��less ���ӣ�����x<y(���򣩣���greater���������ӣ�����x>y)��
    //�����Ϊ�棬��x ����y ǰ�棬y ������x ���ӣ���֮����y ����x ǰ�棬x ���ȳ��ӡ�
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
        cout << na.top() << ' ';  // priority_queue���ʶ���Ԫ����.top()��������queue���ʶ���Ԫ����.front()��������β��.back()
        na.pop();
    }


    return 0;
}
