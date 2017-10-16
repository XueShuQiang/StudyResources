/*修改者 王瑞华 修改时间2016.10.22*/
/*这是习题6-19，将程序中所有小写字母换成大写字母显示出来*/
#include <stdio.h>
    int main(){
         char x;
         do{
            scanf("%c",&x);
        if((x>=97)&&(x<=122))
            {x=x-32;
             printf("%c",x);}
        else
            printf("%c",x);     
}
         while(x!='\n');
}