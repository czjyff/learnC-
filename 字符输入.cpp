#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	char a[10];
	cin.get(a,10);
//	cout << ch;
//	cin.get(a,10);
    cin.getline(a,10);//存9位，并且会删除enter，而cin.get()不删enter.
	cout << a;


//	char ch;
//	cin.get(ch);
//	while(cin.fail()==false)
//	{
//		cout<<ch;
//		cin.get(ch);
//	}

//	char ch;
//	while(cin.get(ch))
//		cout<<ch;
//	while((ch=cin.get()) != EOF)
//	cout<<ch;

}



