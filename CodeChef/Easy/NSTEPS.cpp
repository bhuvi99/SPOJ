#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		if((x%2==0&& y%2==0)&&((x-y)==2||x-y==0)){
			cout<<x+y<<endl;
		
		}
		else if((x%2&&y%2)&&((x-y)==2||x-y==0)){
			cout<<x+y-1<<endl;
		}
		else cout<<"NO NUMBER"<<endl;
	}
}
