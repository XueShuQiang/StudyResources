/*习题4-3，修改人王瑞华，修改日期2016.10.11*/
/*目的：键入两个整数，输出较大的。*/
#include <stdio.h>
    int main(){
           int x,y;
           scanf("%d",&x);
           scanf("%d",&y);
         if(x>=y)
           printf("%d",x);
         else
           printf("%d",y);

}