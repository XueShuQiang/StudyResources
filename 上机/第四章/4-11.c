/*修改人 王瑞华   修改日期2016.10.13*/
#include <stdio.h>

int main(){
      int x;
      int y;
      int n;
      printf("please  input an integer");
      scanf("%d",&n);
    /*以下是外层循环*/
                for(x=1;x<=n;x++){
    /*以下是内层循环*/ 
       for(y=1;y<=x;y++){
      printf("%d\t",y);
  }
         printf("\n");}
}

/*这是第4-11题，目的是制作n行n列数表*/
