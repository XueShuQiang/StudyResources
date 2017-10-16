#include<stdio.h>
#define FALSE 0
#define TRUE 1
  int main (){
     char nextChar;
	 int gotI=FALSE;
	 int gotIN=FALSE;
	 int count=0;
	 
	 printf("Enter your string:");
	 do{
	   scanf("%c",&nextChar);
	   
	   switch(nextChar){
	   case 'i':
	       gotI=TRUE;
		   gotIN=FALSE;
		   break;
	    case 'n':
		   if(gotIN)
		    gotIN=FALSE;
		   if (gotI);
		    gotIN=TRUE;
			gotI=FALSE;
			break;
		case 't':
		   if (gotIN)
		     count++;
			 gotI=FALSE;
			 gotIN=FALSE;
			 break;
	    default:
		    gotI=FALSE;
			gotIN=FALSE;			
	   }   
	 
	 }while(nextChar!='\n');
	 printf("count=%d\n",count);
  }