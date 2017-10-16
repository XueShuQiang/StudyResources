/*16.5上机作业*/
#include<stdio.h>
#define NUM 20

int main (){
char word[NUM];
int i=0;
int n=0;

printf("please input the string,whose length is under 20\n");
scanf("%s",word);
printf("please input N,which is between 1 and 9\n");
scanf("%d",&n);
while(word[i]!='\0'){
if(word[i]>126-n)
word[i]=word[i]-(94-n);
else
word[i]=word[i]+n;
i++;

}
printf("THE result is %s",word);


}