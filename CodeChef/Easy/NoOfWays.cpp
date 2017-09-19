#include<iostream>
using namespace std;
#define rep(i,a,n) for(int i=(a);i<n;i++)
int pos[8][8]={-1}; 
int main(){
	int k,l,n=8;
	rep(j,0,n) pos[0][j]=pos[j][0]=1;
	cin>>k>>l;
	rep(i,1,n) rep(j,1,n) pos[i][j]=pos[i][j-1]+pos[i-1][j];
	
	cout<<pos[l][k]<<endl;

return 0;
}
