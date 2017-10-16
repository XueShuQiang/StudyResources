#include <stdio.h>
    #define NUM 10
	
	int main (){
	int i,t,k,s=0;
	int a[NUM];
	int b[NUM];
	
	printf("please input 10 integers");
	for(i=0;i<NUM;i++){
	  scanf("%d",&a[i]);
	  b[i]=a[i];
	}

	for(i=1;i<=NUM-1;i++){
	k=0;
	for (t=0;t<i;t++){
	if (a[i]==b[t])
	k=k+1;
	}
	if(k==0)
	{s=s+1;
	a[s]=a[i];}
	}

	for(i=0;i<=s;i++){
	printf("%d ",a[i]);}
	}