/*4-6习题，修改者王瑞华 修改时间2016.10.11*/
/*程序目的：计算费波纳契数列的第n项*/
#include <stdio.h>
     int main(){
              int i=1;
              int j=1;
              int s;
int x=1;
              int n;/*n是要输入的量*/
        printf("please input an integer");
        scanf("%d",&n);
            while(x<n)
           { s=j;
            j=i+j;
            i=s;
            x=x+1;
}
        printf("%d",j);

}