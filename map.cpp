#include <iostream>
#include <cstring>
#include <map>

using namespace std;

void printmap( map<int ,string> a)
{
    map<int, string>::iterator it = a.begin();
    for(  ; it!=a.end(); it++ )
        cout << it->first<< ' ' << it->second <<endl;
}

int main()
{
    map<int,string> mapStudent;

    // 数据的插入insert()。 注意如果用数组这种形式插入，之后插入的会覆盖原来的数据，而用insert的话不会覆盖，insert保证了一对一。
    mapStudent[1] = "student 1";    // 第一种也是最常用的
    mapStudent.insert(make_pair(1,"student_one"));   // 第二种. 因为之前student1已经插入了，所以insert插入不了

    mapStudent.insert(pair<int, string>(2, "student_two"));  // 第三种
    mapStudent[2] = "student 2";   // 数组会覆盖student 2;

    mapStudent.insert(map<int, string>::value_type(3, "student_3"));  // 第四种
    printmap( mapStudent );

    // 用pair来获得是否插入成功
    pair<map<int, string>::iterator, bool> Insert_Pair;
    Insert_Pair = mapStudent.insert(make_pair(4, "student 4"));   // 因为已经没有这个key值（4），所以会插入成功并输出。
    if( Insert_Pair.second == true )
        cout << "insert success.  " << Insert_Pair.first->first << ' ' << Insert_Pair.first->second <<endl;
    else
        cout << "insert fail.\n";

    // map 大小：a.size()
    // 遍历 ： 前向迭代器，反向迭代器: map<int,string>::iterator reverse_iterator rit= a.rbegin()

    // 数据的查找find() count()
//    1.  用count函数来判定关键字是否出现，其缺点是无法定位数据出现位置,由于map的特性，一对一的映射关系，
//        就决定了count函数的返回值只有两个，要么是0，要么是1
//    2.  用find函数来定位数据出现位置，它返回的一个迭代器，当数据出现时，它返回数据所在位置的迭代器，
//        如果map中没有要查找的数据，它返回的迭代器等于end函数返回的迭代器.
    map<int, string>::iterator iter;
    iter = mapStudent.find(1);
    if(iter != mapStudent.end())
    {
       cout<<"Find, the key is "<< iter->first <<", the value is " << iter->second << endl;
    }
    cout << mapStudent.count(1) <<endl; // 如果map中有key值为1的，则返回1,否则返回0.

//    清空map中的数据可以用clear()函数，判定map中是否有数据可以用empty()函数，它返回true则说明是空map

    // 数据的删除 erase()
    mapStudent.erase( iter ); // iter是key值为1对应的迭代器。 1. 这是通过迭代器删除
    mapStudent.erase( 2 );   // 2. 通过key值删除
    printmap( mapStudent );

    mapStudent.erase(mapStudent.begin(), mapStudent.end());   // 清空map
    if( mapStudent.empty() )
        cout << "map已空\n";

    // 排序与set类似
    return 0;
}
