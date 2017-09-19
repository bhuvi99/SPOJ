#include<iostream>
using namespace std;
int main(){
	unsigned long long int n;
	cin>>n;
	//cout<<n<<endl;
	/*if (n<2) cout<<"TAK"<<endl;
	else if(n%3==0||n%5==0||n%7==0) cout<<"NIE"<<endl;
	else if(n%2==0) cout<<"TAK"<<endl;
	else cout<<"NIE"<<endl;
	*/

	cout<<(((n&(n-1))==0)?"TAK":"NIE")<<endl;
}
