/*
Project: A menu of a Cafe shop that displays snack items and their cost
Author: Jacob Ronge
Compiler: C89
License: MIT
Date: July 2022

*/
#include <stdio.h>
#include <stdlib.h>
void menu();
int main()
{
    printf("\tWelcome to Zetech C Snack Shop!\n");
    menu();
    return 0;
}

void menu() {
    int item;
    printf("tToday's Menu\n");
    printf("1. Hamburger - Ksh. 50\n");
    printf("2. Samosa - Ksh. 50\n");
    printf("3. Coffee - Ksh. 40\n");
    printf("Enter Item No; ");
    scanf("%d",&item);
    if(item > 0 && item <= 3) {
        printf("item added to cart\n");
    }
    else {
        printf("Invalid item\n");
        menu();
    }
    return item;
    }

