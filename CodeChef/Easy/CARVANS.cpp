#include<iostream>
using namespace std;
int main(){
	int testcases,n,i;
	cin>>testcases;
	long long int car1,car2,previous,count;	
	while(testcases--){
		count=1;
		cin>>n;		
		cin>>car1;
		previous=car1;
		for(i=1;i<n;i++){
			cin>>car2;			
			if(car2<=car1&&car2<=previous){
				count++;
				car1=car2;
			}
			previous=car2;
		}
		cout<<count<<endl;
	}
	return 0;
}
