//#include <iostream>
//using namespace std;
///* ����һ�������� */
//struct ListNode{
//    int m_key;
//    ListNode* next;
//};
//void createList(ListNode* pHead){
//    ListNode* p = pHead;
//    for (int i = 1; i < 10; ++i) {
//        ListNode* pNewNode = new ListNode;
//        pNewNode->m_key = i; // ���½ڵ��ֵ��ֵΪi
//        pNewNode->next = NULL;
//        p->next = pNewNode; // ��һ���ڵ�ָ������½����Ľڵ�
//        p = pNewNode; // p�ڵ�ָ������µĽڵ�
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
///////////////////////////////��������
void creat(InNode* &f, int n)    // �������&,���Ǻ�����ֵ��
{
	if( n<=0 )
	{  cout<<"nֵ��Ч! ������ֹ."; exit(0); }
	cout<<"������n����:";

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
  ///////////����Ѵ���������
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
	cout<<"����������:\n";
	int n;
	cin>>n;
	creat(head, n);
	travel(head);
}

