/*程序15.4（3） */
/*written by wang rui hua (161250143)*/
#include<stdio.h>
double function (double x,int n);
int main(){
           int n=0;
		   double x=0;
		   double result;
		   printf("please input the integer N\n");
		   scanf("%d",&n);
		   printf("please input X\n");
		   scanf("%lf",&x);
		   result=function(x,n);
		   printf("the result is %lf",result);
}

double function (double x,int n){
           double y=1;
       
           int i=0;
           for(i=0;i<=(n+1);i++){
		   y=(y+(x/y))/2.0;
           
		   }
		   return y;
}