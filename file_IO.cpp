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
	
	if( !infile.is_open() )		// �����ļ��Ƿ�ɹ��� 
	{
		cout << "could not open file!\n";
		exit(0);
	}
	
	int a[5], i = 0 ;
//	infile >> a[i++];
//	while( infile.good() )	//good()�����ķ���������д����򷵻�false 
//	{
//		infile >> a[i++];
//		cout << "�����" <<i+1 <<"����\n"; 
//	}
	//�������Ծ���Ϊ���´���
	while ( infile >> a[i++] )
	{
		cout << "�����" << i <<"����\n";
	 } 
	
	if( infile.eof() )
		cout << "end of file reached.\n";	//�����Ƿ��ǵ����ļ���β 
	else if( infile.fail() )
		cout << "input terminated by data mismatch.\n";//�������������Ƿ�ƥ�� 
	else if( infile.bad() )
		cout << "file broken or others\n"; 
	else
		cout << "input terminated by unknown reason.\n";
	
	for( int j=0 ; j<i ; j++)
		cout << a[j] << ' ';
	
	infile.close();
	return 0;
	
}


