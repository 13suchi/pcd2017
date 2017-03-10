To reverse an interger number and check whether it is palindrome or not 
#include<stdio.h>
int reverse(int x)
{
 int reverse=0;
 int rem=0;
 while(x>0)
 {
  rem=x%10;
  reverse=(reverse*10)+rem;
  x=x/10;
 }
 return reverse;
}
int main()
{
 int x;
  {
  printf("enter the number\n");
  scanf("%d",&x);
  }
  if(x==reverse(x))
  {
  printf("the number is palindrome\n");
  }
  if(x!=reverse(x))
  {
  printf("the number is not palindrome\n");
  }
}
                               LAB 2
1.Write a function to reverse an integer.
      int reverse(int x)
 {
   int reverse=0;
   int rem=0;
   while(x>o)
    {
      rem=x%10;
      reverse=reverse*10+rem;
      x=x%10;
    } 
   return reverse;
 }
2.Write a function to find sine of angle in radians using taylors series.
  float convert_radians(float d)
{
float rad;
rad=(3.142/180)*d;
return rad;
}
float compute(float x)
{
  float term,sum,diff,prev;
  int i;
  term=x;
  sum=x;
  diff=x;
  for(int i=0;diff>0.000001;i+2)
  {  
   prev=term;
   term=(-term*x*x)/(i*(i-1));
   diff=fabs(prev-diff);
   sum=sum+term;
  }
 return sum;
}
3.Write a function to evalute a polynomial using horners method.
 int compute(int a[],int x,intn)
 {
   int sum;
   for(int i=n;i>0;i--)
 { 
  sum=(sum+a[i])*x;
 } 
  sum=sum+a[i];
  return sum;
}
4.Write a funtion to find the leap year.
 {
    if(year%400==0)
     {
       return 0;
     }
    else if(year%100==0)
    {
     return 1;
    }
else if(year%4==0)
   {
    return 2;
   }
else
  {
   return -1;
  }
}
#include<stdio.h>
#include<math.h>
float convert_radians(float d)
{
	float rad;
	rad=(3.1412/180)*d;
	return rad;
}
float compute(float x)
{
	float term,sum,diff,prev;
	int i;
	term=sum=diff=x;
	for(i=3;diff>0.000001;i=i+2)
	{
		prev=term;
		term=(-term*x*x)/(i*(i-1));
		diff=fabs(prev-term);
		sum=sum+term;
	}
	return sum;
}
int main()
{
	float degree,x,sum,res;
	sum=0;
	res=0;
	printf("enter the degree\n");
	scanf("%f",&degree);
	x=convert_radians(degree);
	sum=compute(x);
	printf("sin(%f)=%f",sin(x),sum);
	res=sinf(x);
	printf("comparing res and sinf%f",res);
}
	
