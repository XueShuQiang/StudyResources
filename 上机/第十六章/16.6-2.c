/*16.6字符串函数*/
#include<stdio.h>
#define NUM 20
void StrCpy(char*a,char*b);
int main (){
   char a[NUM*2];
   char b[NUM];
   printf("please input the  string A,whose length is under 20\n");
   scanf("%s",a);
   printf("please input the  string B,whose length is under 20\n");
   scanf("%s",b);
   /*这是字符串的输入。下面将进行函数调用。*/
   StrCpy(a,b);
   printf("%s",a);
}

void StrCpy(char*a,char*b){

int t=0;

while(b[t]!='\0'){
a[t]=b[t];
t++;

}
a[t]='\0';
}