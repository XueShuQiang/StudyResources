/*�޸��� ���� �޸�ʱ��2016.10.22*/
/*����ϰ��6-19��������������Сд��ĸ���ɴ�д��ĸ��ʾ����*/
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