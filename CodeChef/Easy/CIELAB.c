#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=a-b;
//printf("%d\n",c);
	if(c%10!=9)
		c+=1;
	else
		c-=1;
	printf("%d\n",c);
	
 return 0;
} 
