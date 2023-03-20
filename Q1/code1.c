#include <stdio.h>
#include <stdlib.h>

void val_Eq(int,int);   //function for equal values of n and m
void val_NotEq(int,int);    //function for unequal values of n and m

//max function implementation
int max(int a, int b) {
   return (a > b) ? a : b;
}

//min function implementation
int min(int a, int b) {
   return (a < b) ? a : b;
}

//main function
int main()
{
    //variable declaration
    int n;
    int m;

    printf("\nenter n: ");
    scanf("%d",&n);
    printf("\nenter m: ");
    scanf("%d",&m);    

    if (n==m)
    {
        val_Eq(n,m);
    }
    else if(n<1 || m<1)
    {
        printf("\nenter numbers equal to or above 1");
    }
    else
    {
        val_NotEq(n,m);
    }

}

//equal value function
void val_Eq(int x, int y)
{
    printf("\n%d x %d",x,y);
}

//unequal value function
void val_NotEq(int i,int j)
{
    printf("\n");
    while(i>0)
    {
        printf("%d x %d",min(i,j),min(i,j));
        if(j>i)
        {
            j=j-i;
        }
        else
        {
            i=i-j;
        }

        if(i>=1)
        {
        printf(", ");
        }
    }

}