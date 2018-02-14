#include <iostream>
#include <set>
using namespace std;
struct song
{
    int m_id;
    int m_hot;
    song(int id,int hot)
    {

        this->m_id = id;
        this->m_hot = hot;
    }
    /*
    bool operator<(const struct song & right)const   //����<�����
    {
        if(this->m_id == right.m_id)     //����idȥ��
            return false;
        else
        {
            if(this->m_hot != right.m_hot)
            {
                return this->m_hot > right.m_hot;      //����
            }
            else
            {
                return this->m_id > right.m_id;
            }
        }
    }
    */
};
struct comp
{
    bool operator()(struct song left,struct song  right)  //���أ��������
    {

        if(left.m_id == right.m_id)     //����idȥ��
            return false;
        else
        {
            if(left.m_hot != right.m_hot)
            {
                return left.m_hot > right.m_hot;      //����
            }
            else
            {
                return left.m_id > right.m_id;
            }

        }
    }

};
int main()
{
    set<song,comp> mySet;      //д����2.1�еĵ�����
    song s1(10,100);
    song s2(20,200);
    song s3(20,300);
    song s4(30,200);
    mySet.insert(s1);    //����s1
    mySet.insert(s2);    //����s2
    mySet.insert(s3);    //s3��s2��id��ͬ��������
    mySet.insert(s4);    //����s4
    set<song,comp>::iterator it = mySet.begin();
    for( ; it!=mySet.end() ; it++ )
    {
        cout<<"id:"<< (*it).m_id << ", hot:" << (*it).m_hot <<endl;
    }
    cout<<"end"<<endl;
};
