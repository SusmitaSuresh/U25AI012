#include<stdio.h>
int main()
{
    float sales, comm;
    printf("enter the sales amount: ");
    scanf("%f", &sales);
    if (sales<=500)
    {
        comm=(sales*5)/100;
        printf("commission is: %f", comm);
    }
    else if (sales>500 && sales<=2000)
    {
        comm=35+(sales*10)/100;
        printf("commission is: %f", comm);
    }
    else if (sales>2000 && sales<=5000)
    {
        comm=185+(sales*12)/100;
        printf("commission is: %f", comm);
    }
    else if (sales>5000)
    {
        comm=(sales*12.5)/100;
        printf("commission is: %f", comm);
    }
    else 
    {
        printf("invalid amount given");
    }
    return 0;
}
