#include <stdio.h>
#include<math.h>
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
sum of 2 complex no's.
#include<stdio.h>
typedef struct
{
    float real;
    float imag;
}complex;
 complex add(complex r1,complex r2)
{
    complex res;
    res.real=r1.real+r2.real;
    res.imag=r1.imag+r2.imag;
    return res;
}
 int main()
{
    complex r1={4,6};
    complex r2={3,8};
    complex r3=add(r1,r2);
    printf("result:%f+i.%f\n",r3.real,r3.imag);
    return (0);
}
          
    
