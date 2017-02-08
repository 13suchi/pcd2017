#include <stdio.h>

int add(int a ,int b,int c)
    {
    
    return a+b+c;

    }

int main()
{

    int a=5;
    int b=10;
    int c=15;
    int d=add(a,b,c);
    printf("result is:%d",d);
    return 0;
}


#include <stdio.h>

int add(int a,int b)
{
    return a+b;
}
int main()
{
 int a=5;
 int b=10;
 int c=add(a,b);
 printf("result is:%d",c);
 return 0;
}    
