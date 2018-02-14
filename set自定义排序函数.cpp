#include <iostream>
#include <set>

using namespace std;

struct cmp
{
    bool operator () ( const int &a, const int &b )
    {
        if( a!=b )
            return a>b; // �Ӵ�С����a<b���Ǵ�С��������Ĭ�ϣ�
        else
            return false;
    }
};
int main()
{
    set<int,cmp> s;
    s.insert(8);
    s.insert(3);
    s.insert(15);
    s.insert(6);
    s.insert(20);
    s.insert(8);
    set<int>::iterator it = s.begin();
    for( ; it!=s.end(); it++ )
        cout << *it << ' ';
    return 0;
}
