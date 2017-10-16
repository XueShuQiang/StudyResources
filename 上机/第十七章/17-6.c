/*上机 17.6*/
#include<stdio.h>
int FUNC(int x);
int a[32];

int c=0;

int main(){

int i,x,t;
for(i=0;i<=31;i++){
a[i]=0;
}

scanf("%d",&x);
if(x>=0){
t=FUNC(x);

for(i=31;i>=0;i--){
printf("%d",a[i]);
}
}
else{
x=x+1;
x=-x;
t=FUNC(x);
for(i=31;i>=0;i--){
if(a[i]==1)
printf("0");
else
printf("1");
}
}
}

int FUNC(int x){

a[c]=x%2;
c=c+1;
if(x/2!=0){
return FUNC(x/2);}
else
{

return 0;
}
}
