/*4-6ϰ�⣬�޸������� �޸�ʱ��2016.10.11*/
/*����Ŀ�ģ�����Ѳ��������еĵ�n��*/
#include <stdio.h>
     int main(){
              int i=1;
              int j=1;
              int s;
int x=1;
              int n;/*n��Ҫ�������*/
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