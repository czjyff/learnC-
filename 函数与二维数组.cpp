#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	int data [3][4] = { {1,2,3,4}, {4,5,5,6}, {6,7,8,9}};
	void show( int (*a)[4], int size); 		//���űز����٣��⽫����һ��ָ����4��int��ɵ������ָ�루����ָ�룩 .  ��int *a[4]���ᴴ����4��ָ��int��ָ����ɵ����飨ָ�����飩 
	show( data , 3); 
	return 0;
}
void show( int (*a)[4], int size )
{
	for(int i=0; i<size; i++)
		for(int j=0; j<4; j++)
		cout << a[i][j] <<' ';
}


