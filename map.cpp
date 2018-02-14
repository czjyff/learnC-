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

    // ���ݵĲ���insert()�� ע�����������������ʽ���룬֮�����ĻḲ��ԭ�������ݣ�����insert�Ļ����Ḳ�ǣ�insert��֤��һ��һ��
    mapStudent[1] = "student 1";    // ��һ��Ҳ����õ�
    mapStudent.insert(make_pair(1,"student_one"));   // �ڶ���. ��Ϊ֮ǰstudent1�Ѿ������ˣ�����insert���벻��

    mapStudent.insert(pair<int, string>(2, "student_two"));  // ������
    mapStudent[2] = "student 2";   // ����Ḳ��student 2;

    mapStudent.insert(map<int, string>::value_type(3, "student_3"));  // ������
    printmap( mapStudent );

    // ��pair������Ƿ����ɹ�
    pair<map<int, string>::iterator, bool> Insert_Pair;
    Insert_Pair = mapStudent.insert(make_pair(4, "student 4"));   // ��Ϊ�Ѿ�û�����keyֵ��4�������Ի����ɹ��������
    if( Insert_Pair.second == true )
        cout << "insert success.  " << Insert_Pair.first->first << ' ' << Insert_Pair.first->second <<endl;
    else
        cout << "insert fail.\n";

    // map ��С��a.size()
    // ���� �� ǰ������������������: map<int,string>::iterator reverse_iterator rit= a.rbegin()

    // ���ݵĲ���find() count()
//    1.  ��count�������ж��ؼ����Ƿ���֣���ȱ�����޷���λ���ݳ���λ��,����map�����ԣ�һ��һ��ӳ���ϵ��
//        �;�����count�����ķ���ֵֻ��������Ҫô��0��Ҫô��1
//    2.  ��find��������λ���ݳ���λ�ã������ص�һ���������������ݳ���ʱ����������������λ�õĵ�������
//        ���map��û��Ҫ���ҵ����ݣ������صĵ���������end�������صĵ�����.
    map<int, string>::iterator iter;
    iter = mapStudent.find(1);
    if(iter != mapStudent.end())
    {
       cout<<"Find, the key is "<< iter->first <<", the value is " << iter->second << endl;
    }
    cout << mapStudent.count(1) <<endl; // ���map����keyֵΪ1�ģ��򷵻�1,���򷵻�0.

//    ���map�е����ݿ�����clear()�������ж�map���Ƿ������ݿ�����empty()������������true��˵���ǿ�map

    // ���ݵ�ɾ�� erase()
    mapStudent.erase( iter ); // iter��keyֵΪ1��Ӧ�ĵ������� 1. ����ͨ��������ɾ��
    mapStudent.erase( 2 );   // 2. ͨ��keyֵɾ��
    printmap( mapStudent );

    mapStudent.erase(mapStudent.begin(), mapStudent.end());   // ���map
    if( mapStudent.empty() )
        cout << "map�ѿ�\n";

    // ������set����
    return 0;
}
