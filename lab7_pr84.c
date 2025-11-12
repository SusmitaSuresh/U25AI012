//84) WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION. 
#include<stdio.h>
#include<string.h>
void get_string(char string[]);
void print_string(char string[]);
struct book
{
    char book_name[50];
    char author_name[50];
    char publisher[50];
    char genre[50];
    float price;
} x;
int main()
{
    printf("enter book name: ");
    get_string(x.book_name);
    printf("enter author name: ");
    get_string(x.author_name);
    printf("enter publisher: ");
    get_string(x.publisher);
    printf("enter genre: ");
    get_string(x.genre);
    printf("enter price: ");
    scanf("%f", &x.price);
    printf("book information is: \n");
    print_string(x.book_name);
    print_string(x.author_name);
    print_string(x.publisher);
    print_string(x.genre);
    printf("%fRs",x.price);
}
void get_string(char string[])
{
    for(int i=0;i<50;i++)
    {
        scanf("%c", &string[i]);
        if(string[i]=='\n')
        {
            string[i]='\0';
            break;
        }
    }
}
void print_string(char string[])
{
    for(int i=0;string[i]!='\0';i++)
    {
        printf("%c", string[i]);
    }
    printf("\n");
}