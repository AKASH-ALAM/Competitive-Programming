#include<stdio.h>
typedef struct book{
    int no;
    char name;
}book;
int main(){
    book myBook;
    myBook.no = 1;
    myBook.name = 'C';
    printf("The number of book is %d\n",myBook.no);
    printf("The name of book is %c\n",myBook.name);

}
