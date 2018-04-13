#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[20];
    int n,num;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);

    cout<<"input the number need to find:\n";
    cin>>num;
    int left=0,right=n-1,mid,pos;
    mid = (left+right)/2;
    while(left<right){
        if( num==a[mid] ){
            pos = mid;
            break;
        }
        else if( num<a[mid])
            right = mid-1;
        else
            left = mid+1;
        mid = (left+right)/2;
    }
    pos = mid;//pos是数组中的索引

    cout<<"the numbet "<<num<<" is located at "<<pos+1<<endl;
}
