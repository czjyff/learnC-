#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>

	using namespace std;
	const int MAX = 3;
	int main()
	{
	int a[MAX];
	for(int i=0 ; i<MAX; i++)
	{
		while( !(cin>>a[i]) )
		{
			cin.clear();
			while( cin.get() != '\n' )
				continue;
			cout<<"ÇëÊäÈëÊý×Ö: ";
		}
	}
	double sum=0;
	for( int i=0; i<MAX; i++ )
		sum += a[i];
	cout<<"average: "<<sum/MAX<<endl;
	system("pause");
	return 0;
}


