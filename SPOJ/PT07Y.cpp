#include<iostream>
#include<vector>
#include<stack>
using namespace std;
#define ll long long int
vector<ll> graph[10005];
ll n,u,m,v;
bool dfs(int i){
	bool visited[n+1];
	for(int j=0;j<=n;j++) visited[j]=false;
	stack<int> s;
	s.push(i);
	ll count=0,size,temp;
	while(!s.empty()){
		temp=s.top();
		s.pop();
		if(visited[temp]) return false;
		visited[temp]=true;
		size=graph[temp].size();
		for(int j=0;j<size;j++) s.push(graph[temp][j]); count++;
	}
	return count==n;
}
int main(){
	
	cin>>n>>m;
	int i,visited[n]={0};
	for(i=0;i<m;i++){
		cin>>u>>v;
		graph[u].push_back(v);
	}
	if(m!=n-1||n==1) cout<<"NO"<<endl;
	else	cout<<(dfs(1)?"YES":"NO")<<endl;
	
}
