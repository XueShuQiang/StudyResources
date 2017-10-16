 /*修改者王瑞华   修改时间2016.10.1*/
#include <stdio.h>

int main(){
          int second;
          int minute;
          int hour;
       printf("What is the time in second to be transferred?");
       scanf("%d",&second);
       hour=second/3600;
       minute=(second%3600)/60;
       second=(second%3600)%60;
       printf("Time is %d hour %d minute %d second ",hour,minute,second);
}

