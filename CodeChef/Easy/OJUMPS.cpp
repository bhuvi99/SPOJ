#include<iostream>
#pragma GCC optimize ("-O3")
using namespace std;
int main(){
	unsigned long long int x;
	cin>>x;
	int a=x%3;
	cout<<(a==0?"yes":((a==1)&&((x/3)%2==0)?"yes":"no"))<<endl;
}
