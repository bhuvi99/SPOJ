#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float s;
	while(cin>>s){
		if(s==0.00) break;
		int count=0;
		float n=0.00,sum=0.00;;
		while(sum<=s){
			n++;
			sum+=1.00/(1.00+n);
			count++;
		}
		cout<<count<<" card(s)"<<endl;
	}
}
