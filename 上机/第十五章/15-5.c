#include<stdio.h>
/*习题15.5 找素数算法*/
int Function(int i,int t,int k);
int main(){
int i;
int t;
int k=0;
int ret;
int number;
printf("please input a number ");
scanf("%d",&number);
for(i=2;i<=number;i++){
ret=Function(i,t,k);
if(ret)
printf("%d\n",i);
}
}
/* 以下是函数的内容*/
int Function(int i,int t,int k){

for(t=1;t<i;t++){
if ((i%t)==0)
k++;
}
if(k>1)
return 0;
else
return 1;
}
