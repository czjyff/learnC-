#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <climits>
#include <cctype>
using namespace std;

int main()
{
	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;

	while(cin.get(ch))
	{
		if( isalpha(ch) )
			chars++;
			
		else if( isspace(ch) )
			whitespace++;
			
		else if( isdigit(ch) )
			digits++;
			
		else if( ispunct(ch) )
			punct++;
			
		else
			others++;
	}
	cout<<"chars: "<<chars<<endl;
	cout<<"whitespace: "<<whitespace<<endl;
	cout<<"digits: "<<digits<<endl;
	cout<<"punct: "<<punct<<endl;
	cout<<"other: "<<others<<endl;
	return 0;
}



