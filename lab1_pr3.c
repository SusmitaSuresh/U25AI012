//PROGRAM TO CALCULATE GROSS SALARY. PLEASE GIVE THE FULL QUESTION NEXT TIME (GOOGLE GIVING DIFFERENT RESULTS).
#include<stdio.h>
int main()
{
    int base_sal, hra_per, da_per, oa_per, gross_sal;
    printf("enter the base salary: ");
    scanf("%d", &base_sal);
    printf("enter the house rent allowance: ");
    scanf("%d", &hra_per);
    printf("enter the dearness allowance: ");
    scanf("%d", &da_per);
    printf("enter the other allowance: ");
    scanf("%d", &oa_per);
    gross_sal=base_sal+(base_sal*hra_per)/100+(base_sal*da_per)/100+(base_sal*oa_per)/100;
    printf("the gross salary is: %d", gross_sal);
    return 0;
}