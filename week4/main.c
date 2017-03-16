#include<stdio.h>
int leap(int year)
{
 if(year%400==0)
  {
	return 0;
  }
 if(year%100==0)
 {
 return 1;
 }
 if(year%4==0)
 {
 return 2;
 }
 else
 {
  return -1;
 }
}

int main()
{
 int year;
 printf("enter the year:\n");
 scanf("%d",&year);
 return 10;
 }
