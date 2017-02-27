sum to  2 no's.

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

sum of 3 no's

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

        
sum of n no's.
#include <stdio.h>

 int add(int a[],int n)
 {
     int sum=0;
for (int i=0;i<n;i++)
{
    sum+=a[i];
}
return sum;
}
int main()
{
    int n=10;
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    int res=add(a,n);
    printf("result is:%d\n",res);
    return 0;
}

sum of two complex numbers

#include<stdio.h>
struct complex
{
 int real,imag;
}complex;
int main()
{
 struct complex a,b,c;
 printf("enter real and imag of struct variable a");
 scanf("%d",&a.real);
 scanf("%d",&a.imag);
 printf("enter real and imag of struct variable b");
 scanf("%d",&b.real);
 scanf("%d",&b.imag);
 c.real=(a.real+b.real);
 c.imag=(a.imag+b.imag);
 printf("%d%d",c.real,c.imag);
}

sum of n complex numbers

#include<stdio.h>
struct complex
 {
 int real,imag,sum;
 }num[10];
 int main()
 {
  int n=10,i,sum_real=0,sum_imag=0;
  for(i=0;i<n;i++)
  {
  printf("enter real and imag part of a complex no");
  scanf("%d",&num[i].real);
  scanf("%d",&num[i].imag);
  sum_real=sum_real+num[i].real;
  sum_imag=sum_imag+num[i].imag;
  printf("sum of real parts%d",sum_real);
  printf("sum of imag parts%d",sum_imag);
  return 0;
  }
 }


quadratic numbers

#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,r1,r2,rx1,rx2,ix1,ix2;
	printf("enter the three coffients:");
	scanf("%f%f%f",&a,&b,&c);
	d=(b*b)-(4*a*c);
 if(d>=0)
 {
r1=(-b+sqrt(d))/(2*a);
r2=(-b+sqrt(d))/(2*a);
 printf("root1=%f\n,root2=%f",r1,r2);
 }
 else if(d<0)
 {
 d=d*(-1);
 rx1=rx2=-b/(2*a);
 ix1=(-b+sqrt(-d))/(2*a);
 ix2=(-b-sqrt(-d))/(2*a);
 printf("root1=%f+i%f\n,root2=%f+i%f",rx1,ix1,rx2,ix2);
 }
}
