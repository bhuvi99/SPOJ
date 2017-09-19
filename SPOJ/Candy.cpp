#include<iostream>
//#include <fstream>
using namespace std;
int main(){
	//freopen("input.txt",'r',stdin);
	//freopen("output.txt","w+",stdout);
	int n;
	cin>>n;
	while(n>0){
		int a[n];
		int add=0,sub=0,k,sum=0;
		bool possible=true;
		for(int i=0;i<n;i++) { cin>>a[i];sum+=a[i];}
		if(sum%n!=0) possible=false;
		k=sum/n;
		for(int i=0;i<n&&possible;i++)
			if(a[i]>k) sub+=a[i]-k;
			else if(a[i]<k) add+=k-a[i];
		if(add!=sub) possible=false;
		cout<<(possible?add:-1)<<endl;
		cin>>n;
	}
}
