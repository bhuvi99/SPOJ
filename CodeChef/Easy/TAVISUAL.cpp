#include<iostream>
using namespace std;
int main(){
	int t,n,c,q,x,l,r;
	cin>>t;
	while(t--){
		cin>>n>>c>>q;
		while(q--){
			cin>>l>>r;
			if(c>=l&&c<=r) c=l+r-c;
		}
	cout<<c<<endl;
	}
}
