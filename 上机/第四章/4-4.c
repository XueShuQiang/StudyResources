/*ϰ��4-4 �޸�������  �޸�����2016.10.11*/
/*����Ŀ�ģ�������ݺ��·ݣ�������·ݵ�����*/
/*���㷨���Ը��ӣ������Ŀ���ȥ*/
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
/*ǿ�ҽ������������switch-case����*/