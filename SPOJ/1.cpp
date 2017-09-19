#include <iostream>
using namespace std;
long long int a[5000001]={0};
long long int max(long long a, long long int b)
{
    if(a>b)
        return a;
    else
        return b;
}
long long int coins(long long int n)
{
    if(n<11)
        return a[n];
    else if(n<5000001&&a[n]!=0)
        return a[n];
    else
    {
        long long int c=max(n,coins(n/2)+coins(n/3)+coins(n/4));
        if(n<5000001)
            a[n]=c;
        return c;
    }
    
}
int main() {
    long long int n;
    int t=0,i;
    for(i=0;i<12;i++)
        a[i]=i;
    while(cin>>n&&t<10)
    {
        t++;
        cout<<coins(n)<<endl;
    }
	return 0;
} 
