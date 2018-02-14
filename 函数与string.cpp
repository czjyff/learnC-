#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	void display( const string s[], int n);
	const int size=4;
	string list[size];	//string对象数组 
	for( int i=0; i<size; i++)
		cin >> list[i];
	display( list, size );
	return 0;
}
void display( const string s[], int n)
{
for(int i=0; i < n; i++)
		cout << s[i] << endl;
}
 

