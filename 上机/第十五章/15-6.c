/*计算系统基础上机课15.6*/
/*written by Wang Rui Hua 161250143*/
#include <stdio.h>
char function(int t);
int main (){
int i,j,t,u;
char result1;
char result2;

printf("input the first integer t\n");
scanf("%d",&t);
printf("input the first integer t\n");
scanf("%d",&u);
if(t==0&&t==1&&u==0&&u==1)
	printf("wrong");
else{
	if(t==7||t==9){
		result1=function(t);
		for(j=0;j<=3;j++){
		
		
		if(u==7||u==9){
			result2=function(u);
			for(i=0;i<=3;i++)
			{printf("%c",result1);	
			
			printf("%c",result2);
			result2++;}
			
		}
		else{
			result2=function(u);
			for(i=0;i<=2;i++)
			{printf("%c",result1);	
			
			printf("%c",result2);
			result2++;}
		}
		result1++;}
		
	}
	else{
		result1=function(t);
		for(j=0;j<=2;j++){
		
		
		if(u==7||u==9){
			result2=function(u);
			for(i=0;i<=3;i++)
			{printf("%c",result1);	
			
			printf("%c",result2);
			result2++;}
			
		}
		else{
			result2=function(u);
			for(i=0;i<=2;i++)
			{printf("%c",result1);	
			
			printf("%c",result2);
			result2++;}
		}
		result1++;}
		
	}
	
}
}
char function(int t){
char x;
switch(t){

case 2: x='a';
        break;
case 3: x= 'd';
        break;
case 4: x= 'g'; 
        break;
case 5: x= 'j';
        break;
case 6: x= 'm';
        break;
case 7: x= 'p';
        break;
case 8: x= 't';
        break;
case 9: x= 'w';
        break;
		
}
return x;
}
