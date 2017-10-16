/*修改人王瑞华 修改日期2016.10.22*/
/*这是习题6.18 程序的目的是输入一串字符，显示除空格以外的字符*/
#include <stdio.h>
      int main(){
             char x;
             
             
             do{
                scanf("%c",&x);
            if(x==32)
               ;
            else
               printf("%c",x);

}
            while (x!='\n');
}