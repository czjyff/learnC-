#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int cnt = 0;
struct date
{
    int year ;
    int xing ;
};
int main()
{
    date t;
    t.xing = 4;
    int sum = 365;
    for( int i=1949; i < 2017; i++,sum = 365 )
    {
        t.year = i;
        if( (i%4==0&&i%100!=0)||i%400==0 )
            sum = 366;
        t.xing = ( t.xing + sum%7 )%7;
        if( t.xing == 4 )
            cnt++;
    }
    cout << cnt;
    return 0;
}
