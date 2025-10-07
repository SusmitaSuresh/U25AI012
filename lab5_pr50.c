#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<6;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf("%c", 64+i);
        }
        printf("\n");
    }
}