#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t,n,w,sum,m;
	cin>>t;
	while(t--){
		cin>>n;
		sum=0;m=1000000;
		for(int i=0;i<n;i++) {
			cin>>w;
			sum+=w;
			m=min(m,w);
		}
	cout<<sum-n*m<<endl;
	}
}
