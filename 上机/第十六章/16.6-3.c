/*16.6字符串函数*/
#include<stdio.h>
#define NUM 20
void StrReverse(char*a,char*b);
int main (){
   char a[NUM];
   char b[NUM];
   printf("please input the  string A,whose length is under 20\n");
   scanf("%s",b);

   /*这是字符串的输入。下面将进行函数调用。*/
  StrReverse(b,a);
   printf("%s",a);
}

void StrReverse(char*b,char*a){
int i=0;
int t=0;
while(b[i]!='\0')
i++;
i=i-1;
for(t=0;t<=i;t++)
	a[t]=b[i-t];
a[i+1]='\0';
}