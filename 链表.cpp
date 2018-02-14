//#include <iostream>
//using namespace std;
///* 创建一个单链表 */
//struct ListNode{
//    int m_key;
//    ListNode* next;
//};
//void createList(ListNode* pHead){
//    ListNode* p = pHead;
//    for (int i = 1; i < 10; ++i) {
//        ListNode* pNewNode = new ListNode;
//        pNewNode->m_key = i; // 将新节点的值赋值为i
//        pNewNode->next = NULL;
//        p->next = pNewNode; // 上一个节点指向这个新建立的节点
//        p = pNewNode; // p节点指向这个新的节点
//    }
//}
//int main(){
//    ListNode* head = NULL;
//    head = new ListNode;
//    head->m_key = 0;
//    head->next = NULL;
//    createList(head);
//
//    return 0;
//}

# include<iostream>
# include<cstdlib>
using namespace std;
struct InNode
{
	int data;
	InNode* next;
};
///////////////////////////////创建链表
void creat(InNode* &f, int n)    // 如果不加&,则是函数传值，
{
	if( n<=0 )
	{  cout<<"n值无效! 程序终止."; exit(0); }
	cout<<"请输入n个数:";

	int x;
	cin>>x;

	f = new InNode;
	f->data = x;

	if( n == 1 )
	{  f->next=NULL; return; }

	InNode* p = f;

	for(int i=0; i < n-1; i++)
	{
		p->next = new InNode;
		p = p->next;
		cin >> x;
		p->data = x;
	}

	p->next = NULL;
}
  ///////////输出已创建的链表
void travel(InNode* f)
{
	while(f)
	{
	cout << f->data <<" ";
	f = f->next;
	}
	cout<<endl;
}
////////////////////////
int main()
{
	InNode* head = NULL;
	cout<<"请输入结点数:\n";
	int n;
	cin>>n;
	creat(head, n);
	travel(head);
}

