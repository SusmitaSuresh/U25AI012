#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<6;i++)
    {
        for(j=65;j<65+i;j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
}