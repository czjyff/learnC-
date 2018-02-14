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
    bool operator<(const struct song & right)const   //重载<运算符
    {
        if(this->m_id == right.m_id)     //根据id去重
            return false;
        else
        {
            if(this->m_hot != right.m_hot)
            {
                return this->m_hot > right.m_hot;      //降序
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
    bool operator()(struct song left,struct song  right)  //重载（）运算符
    {

        if(left.m_id == right.m_id)     //根据id去重
            return false;
        else
        {
            if(left.m_hot != right.m_hot)
            {
                return left.m_hot > right.m_hot;      //降序
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
    set<song,comp> mySet;      //写法和2.1中的的区别
    song s1(10,100);
    song s2(20,200);
    song s3(20,300);
    song s4(30,200);
    mySet.insert(s1);    //插入s1
    mySet.insert(s2);    //插入s2
    mySet.insert(s3);    //s3和s2的id相同，不插入
    mySet.insert(s4);    //插入s4
    set<song,comp>::iterator it = mySet.begin();
    for( ; it!=mySet.end() ; it++ )
    {
        cout<<"id:"<< (*it).m_id << ", hot:" << (*it).m_hot <<endl;
    }
    cout<<"end"<<endl;
};
