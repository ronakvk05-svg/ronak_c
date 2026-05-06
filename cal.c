 #include <stdio.h>
 int main() {
 
    int n,i,t; 
    printf(" enter any number for table" );
    scanf( "%d",&n );
    i=10;
    while (i>=1)
    {
        t=n*i;
        printf("%d*%d=%d\n",n,i,t);
        i--;      }   

    }