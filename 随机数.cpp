#include <iostream>
#include <time.h> 
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(0));	  //这一句很重要，不然每次的随机数是一样的 
	
	int *p = new int [5]; 
	for( int i=0; i<5; i++)
		p[i] = rand(); 
	for( int i=0; i<5; i++)
		cout << p[i] << ' ';
	delete p;
	return 0;
}



