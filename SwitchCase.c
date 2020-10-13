/*
***********************************************************

Topic   : Program to demonstrate SWITCH CASE in c.
Author  : Chpaone09®
Date    : Oct 13, 2020

************************************************************
*/

#include <stdio.h>
#include <conio.h>

void main(){
    int ch;
    
    do{
        printf("\n\n\t 1. Whale");
        printf("\n\n\t 2. Lion");
        printf("\n\n\t 3. Dog");
        printf("\n\n\t 4. Exit");
        printf("\n\n\t Pl. enter your choice >> ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1: printf("\n\n\t You picked Whale");break;
        case 2: printf("\n\n\t You picked Lion");break;
        case 3: printf("\n\n\t You picked Dog");break;
        case 4: break;
        default:printf("\n\n\t You picked wrong choice !");break;
        }
        printf("\n\n\t to continue press 0 ?");
        scanf("%d",&ch);
    }while(ch !=4 || ch == 0);
}