#include<iostream>
using namespace std;
int main()
{
    long long int a,n,k,d=0,b=0,i;
	cin>>a>>n>>k;
    long long int c[k]={0};
    for(i=0;i<k&&a!=0;++i){
           b=a/(n+1);
           d=a%(n+1);
            c[i]=d;
           a=b;
    }
    for(i=0;i<k;++i)
	cout<<c[i]<<" ";
        
   cout<<endl;
    return 0;
}
