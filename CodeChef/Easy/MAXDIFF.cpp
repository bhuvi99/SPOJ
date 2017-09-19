#include<iostream>
#include<algorithm>
using namespace std;
int main(){
		int i,testcases,n,k;
		cin>>testcases;
		while(testcases--){
			long long sum=0,sum1=0;
			cin>>n>>k;
			long long a[n];
			for(i=0;i<n;i++){
				cin>>a[i];
				sum+=a[i];
			}
			sort(a,a+n);
			k=k<n-k?k:n-k;
			for(i=0;i<k;i++){
				sum-=a[i];
				sum1+=a[i];			
			}
			cout<<abs(sum-sum1)<<endl;
		}

}
