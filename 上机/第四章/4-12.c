/*�޸��� ����  �޸�����2016.10.13*/
#include <stdio.h>

int main () {
     double pi=0;/*pi����˼�ǦУ��Ҳ�֪�����ϣ����ĸ��ô��Ӣ���*/
     int n;
     printf("please input an integer");
     scanf ("%d",&n);
     
     int x=1;
     int t=-1;
     int i=-1;

     while(x<=n)
   {
     i=i*t;
    pi=pi+i*4.0/(2*x-1);
     
     x=x+1;
 }
     printf("%f",pi);

}