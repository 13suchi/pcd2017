#include<stdio.h>
int reverse(int x)
{
 int reverse=0;
 int rem=0;
 while(x>0)
 {
  rem=x%10;
  reverse=reverse*10+rem;
  x=x%10;
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
