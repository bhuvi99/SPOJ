#include<iostream>
#include<algorithm>
#define rep(i,a,n) for(int i=(a);i<n;i++)
using namespace std;
int main(){
	
	int T,n;
	cin>>n;
	while(n){
		string s;
		cin>>s;
		int len=s.size(),rows,k=0;
		rows=len/n;
		char ar[rows][n];
		rep(i,0,rows)
			if(i%2) for(int j=n-1;j>=0&&k<len;j--) ar[i][j]=s[k++];

			else	 for(int j=0;j<n&& k<len;j++) ar[i][j]=s[k++];
			
		rep(i,0,n) {rep(j,0,rows) cout<<ar[j][i]; }
		cout<<endl;
		cin>>n;
			
		
		
	}
}
