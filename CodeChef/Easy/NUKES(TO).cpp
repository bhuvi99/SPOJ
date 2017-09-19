#include<cstdio>
//using namespace std;
int main(){
	
	long long a;
	int k,n,i;
	//cin>>a;>>k>>n;
	scanf("%lld %d %d",&a,&k,&n);
	k++;
	int chambers[n]={0};
	for(;a>0;a--){
		i=0;
		//placed=false;
		chambers[i]+=1;
		while(i<n&&chambers[i]<=k){
			
			if(chambers[i]>=k){
				chambers[i]=0;
				chambers[++i]++;			
			}
			else
				break;

		}	
	}
	for(i=0;i<n;i++)
		printf("%d ",chambers[i]);
	printf("\n");
}
