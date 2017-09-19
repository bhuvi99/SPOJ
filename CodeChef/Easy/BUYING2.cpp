#include<iostream>
#include<climits>
using namespace std;
int main(){
	int result,testcases,n,x,i,temp,result1,result2,min;
	cin>>testcases;
	while(testcases--){
		result=0;
		cin>>n>>x;
		min=INT_MAX;
		for(i=0;i<n;i++){
			cin>>temp;
			result+=temp;
			min=temp<min?temp:min;
		}
		result1=result/x;
		result2=(result-min)/x;
		if(result1!=result2)
			cout<<result1<<endl;
		else
			cout<<-1<<endl;
	}
	return 0;	
} 
