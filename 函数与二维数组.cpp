#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	int data [3][4] = { {1,2,3,4}, {4,5,5,6}, {6,7,8,9}};
	void show( int (*a)[4], int size); 		//括号必不可少，这将创建一个指向由4个int组成的数组的指针（数组指针） .  而int *a[4]将会创建由4个指向int的指针组成的数组（指针数组） 
	show( data , 3); 
	return 0;
}
void show( int (*a)[4], int size )
{
	for(int i=0; i<size; i++)
		for(int j=0; j<4; j++)
		cout << a[i][j] <<' ';
}


