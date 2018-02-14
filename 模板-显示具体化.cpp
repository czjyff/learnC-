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

// ��������ʾ���廯����template <>��ͷ���������ƺ����<>��д�ɲ�д����Ϊ�����Ĳ��������Ѿ���������job��һ�����廯��
//Ҳ���ǿ���д�ɣ�template <> void swap1 (job &a, job &b);
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

// ���job�ṹ�壬ֻ������������salary&floor�����������֣�����ʵ������Դ���Ч��
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
