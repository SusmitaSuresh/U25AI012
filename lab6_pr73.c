#include<stdio.h>
int main()
{
    int n, vote, a[6];
    printf("enter number of voters: ");
    scanf("%d", &n);
    for(int i=0;i<6;i++)
    {
        a[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        printf("enter the %d(th) vote: ", i+1);
        scanf("%d", &vote);
        switch(vote)
        {
            case 1:
            a[0]++;
            break;
            case 2:
            a[1]++;
            break;
            case 3:
            a[2]++;
            break;
            case 4:
            a[3]++;
            break;
            case 5:
            a[4]++;
            break;
            default:
            a[5]++;
            break;
        }
    }
    for(int i=1;i<6;i++)
    {
        printf("\nnumber of votes for candidate %d is: %d", i, a[i-1]);
    }
    printf("\nnumber of spoilt ballots is: %d", a[5]);
}