#include<iostream>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	while(a||b||c){
		if(b-a==c-b){
			cout<<"AP "<<c+(c-b)<<endl;
		
		}
		else cout<<"GP "<<c*(c/b)<<endl;
	cin>>a>>b>>c;
	
	}
}
