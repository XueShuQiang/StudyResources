/*习题4-4 修改者王瑞华  修改日期2016.10.11*/
/*程序目的：输入年份和月份，输出该月份的天数*/
/*此算法稍稍复杂，请耐心看下去*/
#include <stdio.h>
   int main(){
            int x,y;
            printf("please input the year");
            scanf("%d",&x);
            printf("please input the month");
            scanf("%d",&y);
            
        if (!(y==2) )
          {
        if (y==4||y==6||y==9||y==11)
        printf("30");
        else
        printf("31");
}
        else
        {
        if(x%100)
        {if(x%4)
        printf("28");
         else 
        printf("29");

   }        
         else
        {
         if(x%400)
         printf("28");
else
  printf("29");
}
}

}
/*强烈建议这个程序用switch-case来做*/