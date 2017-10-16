/*计算系统基础上机16-11*/
#include<stdio.h>
#define NUM 3

int main(){
int i,j;

int a[NUM+1][NUM+1];
int b[NUM+1][NUM+1];
printf("please input a 4*4 Matrix\n");
for(i=0;i<=NUM;i++){
for(j=0;j<=NUM;j++){
scanf("%d",&a[i][j]);
}
}
for(i=0;i<=NUM;i++){
for(j=0;j<=NUM;j++){
b[i][j]=a[j][i];
}
}
for(i=0;i<=NUM;i++){
for(j=0;j<=NUM;j++){
printf("%d ",b[i][j]);
}
printf("\n");
}
}

