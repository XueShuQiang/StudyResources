#include<stdio.h>
     double Function(double x,int y,double z);
	 int main() {
	 double x;
	 int y;
	 double z;
	 printf("please input x");
	 scanf("%lf",&x);
	 printf("please input y");
	 scanf("%d",&y);
	 z=Function(x,y,z);
	 printf("%lf",z);
	 }
	 
	  double Function(double x,int y,double z){
	  int i;
	  z=1;
	  for(i=1;i<=y;i++){
	      z=z*x;
}
	  return z;
		  
	  }
	  