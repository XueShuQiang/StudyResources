/*16.13*/
#include <stdio.h>
#define NUM 4

int main (){
int i;
int j,k,s,n;
int t=0;

char a[NUM+1][20];

printf("please input 5 strings,whose length are under 20");
for(i=0;i<=NUM;i++){
scanf("%s",a[i]);
}
printf("------the result is as follows------\n");
i=1;
j=0;



while(a[i][0]!='\0'&&(i!=NUM+1)){
	t=0;
	while(a[i][t]!='\0'){
		t++;
	}
	    
		n=0;
		for(s=0;s<i;s++){
			k=0;
			for(j=0;j<=t;j++){
				if(a[i][j]!=a[s][j]){
				k++;}
			}
		
		if(k==0){
			for(s=i;s<=NUM;s++){
				for(j=0;j<=20;j++){
					a[s][j]=a[s+1][j];
                                     a[NUM+1][0]='\0';
				}
				
		}
		n=1;
		}
	
		}
		if(n!=1){
			a[NUM+1][0]='\0';
		i++;
		}
		
	
}


for(i=0;i<=NUM;i++){
printf("%s\n",a[i]);
}
}