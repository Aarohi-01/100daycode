#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

void printBook(struct Book b) {
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: $%.2f\n", b.price);
}

int main() {
    struct Book b1 = {"The Alchemist", "Paulo Coelho", 15.99};
    
    printBook(b1);

    return 0;
}