/*87) WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER
THAN 500.(PASSING ARRAY OF STRUCTURE INTO FUNCTION).*/
#include<stdio.h>
#include<string.h>
struct student 
{
    char name[50];
    int rollno;
    float marks;
};
int main()
{
    struct student st[10];
    for(int i=0;i<10;i++)
    {
        printf("enter student name: ");
        scanf("%s", &st[i].name);
        printf("enter roll no.: ");
        scanf("%d", &st[i].rollno);
        printf("enter your marks out of 1000: ");
        scanf("%f", &st[i].marks);
    }
    for(int i=0;i<10;i++)
    {
        if(st[i].marks>500)
        {
            printf("name is: ");
            puts(st[i].name);
            printf("\trollno. is: %d", st[i].rollno);
            printf("\tmarks are: %f", st[i].marks);
            printf("\n");
        }
    }
}