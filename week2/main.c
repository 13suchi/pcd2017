                         QUESTION PAPER 2
What is operational definition of attitude used for this class.
       A predisposition or a tendency of responding positively  towards a certain idea. Attitude influences an individual's choice of action, and responses to challenges, incentives, and rewards.
Git and Development Environment.
1. Suppose you did a git push and got the following error

Failed to push some refs to <repo>. To prevent you from losing history, non-fast-forward updates were rejected. Merge remote changes before pushing again.

  (i) What do you feel when you see this error.  
         At first i'll feel sad ,and then i feel that i must try to get rid of this error and must push it on my own so that i learn to solve some problem on my own.
  (ii) What will you do to resolve the error.
          I'll first search in google for an solution of that error.If it doesn't work out i'll discuss with my classmates and offcourse lastly i'll have to with the teacher.
2. Suppose you get an error while working at home.
What do you feel?
Do you feel happy to have found a valid reason that you dont have to complete the given problem.

Or
Do you feel sad and you give up.

Or
How do you handle the situation.
         Initially i feel sad and frustrated  and sometime i feel like giving up and relax for sometime so that i think what can be done.
3. Do you have a working development environment at home? What is the development environment you use?
        I refer to some books,search the informtion in google,read about concepts in diffrent tutorials.
4. Many compilation errors are difficult to understand. The error messages do no directly show the
Problem.

How do you feel when you see such an error?
         I'll try to figure out the error,If not possible i'll discuss with someone who knows better.
What do you do to fix the error?
        I'll check the coding once thoroughly and correct it.
             
Variables and Expressions:
1. What are basic data types in c?
       int,char,float,double,long.
2.  List operators that can be used with integer data type.
       Arithematic operator,increment-decremrnt operator.
3. What is operator precedence?
       operator Precedence, in C, is the rule that specifies the order in which certain operations need to be performed in an expression. 
           
Arrays and Strings
1. What is an array?
       An array is a collection of data items, all of the same type.
2. How will you declare an array?
      data_type array_name[array_size];
3. What is an array constant?       
       int a[10]={1,2,3,4,5,6,7,8,9,0} 
4. How can you initialize an array?
       int mark[5] = {19, 10, 8, 17, 9};
5. Write a function to sum n integers.
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
Structures   
1. What is a structure?
       Structures are used to model a composite data and holds many variables of different type.
2. What is call by reference?
        If the formal parameter is changed,the actual parameter doesnot changes.
3. What is call by value?
        If the formal parameter is changed,the actual parameter changes.
4. What is return by value?
        Return by value is the simplest and safest return type to use. When a value is returned by value, a copy of that value is returned to the caller.
5. Write a function to add two complex numbers.
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
