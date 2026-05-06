#include <stdio.h>
int main()
{
 float a,b,c; 
 char sym ;
 printf ("what do want to do  +'-*/' \n");
scanf ("%c",&sym); 
printf ( "enter the two numbers \n");
scanf ("%f%f",&a,&b); 
switch (sym)
 {
 case '+':
 c=a+b;
 
 printf ("the result is %f",c);
 break;
 case '-':
 c=a-b;
 printf ("the result is %f",c);
 break;
 case '*':
c=a*b;
printf ("the result is %f",c);
break;
case '/':
c=a/b;
printf ("the result is %f",c);
break;
default:
printf ("invalid operator");
}
}