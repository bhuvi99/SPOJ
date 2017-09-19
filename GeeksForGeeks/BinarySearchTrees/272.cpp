#include<iostream>
#include<string>
using namespace std;
int main(){

	string s;
	getline(s);
	string a="\'\'";
	string b="``";
	int j,n= s.size();
	bool first=true;
	char m[2*n];j=0;
	for(int i=0;i<n;i++)
		if(s[i]!='"') m[j++]=s[i];
		else{
			if(first) {m[j++]='`';
				m[j++]='`';
				first=false;
				}
			else {	m[j++]='\'';
				m[j++]='\'';
				first=true;
				}
				
		
		
		}
			
	m[j]='\0';j=0;
	while(m[j]!='\0')
		printf("%c",m[j++]);
}
