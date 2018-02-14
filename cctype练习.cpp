#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	char ch;
	cin >> ch;
	while ( ch != '@' )
	{
		if( isdigit(ch) )
		{
			cin >> ch;
			continue;
		}

		else if( isalpha(ch) )
		{
			if( isupper(ch) )
				ch = tolower(ch);
			else
				ch = toupper(ch);
		}
		cout << ch ;
		cin >> ch;
	 }
	return 0;
}



