#include <iostream>
#include <cstring>
#include <fstream> 
#include <cmath>

using namespace std;
int main()
{
	char filename[20];
	cin.getline( filename, 20 );
	
	ifstream infile;
	infile.open(filename);
	
	if( !infile.is_open() )		// 检验文件是否成功打开 
	{
		cout << "could not open file!\n";
		exit(0);
	}
	
	int a[5], i = 0 ;
//	infile >> a[i++];
//	while( infile.good() )	//good()是最方便的方法，如果有错误则返回false 
//	{
//		infile >> a[i++];
//		cout << "读入第" <<i+1 <<"个数\n"; 
//	}
	//上述可以精简为以下代码
	while ( infile >> a[i++] )
	{
		cout << "读入第" << i <<"个数\n";
	 } 
	
	if( infile.eof() )
		cout << "end of file reached.\n";	//检验是否是到达文件结尾 
	else if( infile.fail() )
		cout << "input terminated by data mismatch.\n";//检验输入类型是否匹配 
	else if( infile.bad() )
		cout << "file broken or others\n"; 
	else
		cout << "input terminated by unknown reason.\n";
	
	for( int j=0 ; j<i ; j++)
		cout << a[j] << ' ';
	
	infile.close();
	return 0;
	
}


