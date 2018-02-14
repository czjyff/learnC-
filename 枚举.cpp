#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{	
	enum{
		red, orange , yellow ,green, blue, indigo
	}; 
	int d;
	cin>>d;
	switch(d)
	{
		case red:cout<<"red";break;
		case orange:cout<<"orange";break;
		case yellow : cout<<"yellow";break;
		case green : cout<<"green";break;
		case blue : cout<<"blue";break;
		case indigo: cout<<"indigo";break;
	}
	return 0;
}

