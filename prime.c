/*
#include<stdio.h>
#include<conio.h>

int main()

{
    int n,i,check=0;
    {
    printf("enter the number you can insert=");
    scanf("%d",&n);
    }
    for (i=1; i <=n; i++)
     {
        if (n%i==0)
        {
            check ++;
    }
    }
   if (check==2)
    {
        printf("the number is prime");
    }
    else
    {
        printf("not prime");
    }
    return 0;
}

*/

#include <stdio.h>
void prime (int); //function create 
void  main()


{
int i; 
printf("enter the number you insert=");
scanf("%d",&i);
prime(i);
}

void prime(int i) //function call
{
    int num,count=0;
    for(num=1;num<=i;num++)
    while (1)
      {
        if (num % i == 0)
        count++;
    }
    if (count==2)
    {
        printf("prime number ");
    }
    else
{
    printf("not prime ");
}
}
/*
#include<stdio.h>
#include<math.h>

 int nthprime(int num)
{
    int flag=0,i,j,count=0;
    for(i=2;i>0;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            count++;
        }
        if(count==num)
        {
            return i;
            break;
        }
    }
    return 0;
}
int main()
{
    int num;
    printf("Enter the nth number");
    scanf("%d",&num);
    printf("the nth prime number is %d",nthprime(num));
    getch();
}
*/