//PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION. PLEASE MENTION WHAT MARKS WHAT DIVISION NEXT TIME TY.
#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    float per;
    printf("enter subject 1 marks: ");
    scanf("%d", &m1);
    printf("enter subject 2 marks: ");
    scanf("%d", &m2);
    printf("enter subject 3 marks: ");
    scanf("%d", &m3);
    printf("enter subject 4 marks: ");
    scanf("%d", &m4);
    printf("enter subject 5 marks: ");
    scanf("%d", &m5);
    per=(m1+m2+m3+m4+m5)/5.0;
    if (per>=90)
    {
        printf("division A");
    }
    else if (per>=80 && per<90)
    {
        printf("division B");
    }
     else if (per>=70 && per<80)
    {
        printf("division C");
    }
     else if (per>=60 && per<70)
    {
        printf("division D");
    }
     else if (per>=50 && per<60)
    {
        printf("division E");
    }
    else 
    {
        printf("fail");
    }
    return 0;
}