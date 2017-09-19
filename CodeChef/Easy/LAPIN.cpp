#include<iostream>
#include<string>
using namespace std;
int main(){
	string lap;
	int n,result,i,testcases;
	cin>>testcases;
	while(testcases--){
		cin>>lap;
		n=lap.size();result=0;
		int hash[26]={0},i,limit;
		for(i=0;i<n/2;i++)
			hash[lap[i]-'a']++;
		limit=n/2;
		if(n%2==1)
			limit++;
		for(i=limit;i<n;i++)
			hash[lap[i]-'a']--;
		bool result=true;
		for(i=0;i<26;i++)
			if(hash[i]!=0){
				result=false;
				break;
			}
		if(result)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
