//C program for two stack operation in one single stack//

#include<stdio.h> 
#include<conio.h> 
int stack[20],data; 
int top1=-1,top2=20; 
int choice,n,top; 
int max=20; 

main() 
{ 
    clrscr(); 
    do 
    { 
        printf("\nEnter your choice\n"); 
        printf("1.Push an element on Stack 1\n2.Pop an element from Stack 1\n"); 
        printf("3.Push an element on Stack 2\n4.Pop an element from Stack 2\n5.EXIT\n\n"); 
        scanf("%d",&choice); 
        switch(choice) 
        { 
            case 1: 
                push1(); 
                break; 
            case 2: 
                pop1(); 
                break; 
            case 3: 
                push2(); 
                break; 
            case 4: 
                pop2(); 
                break; 
            case 5: 
                break; 
            default: 
                printf("Invalid Choice\n"); 
                break; 
        } 
    } 
    while(choice!=5); 
    getch(); 
} 
int push1() 
{ 
    if(top1!=top2-1) 
    { 
        top1++; 
        printf("\nEnter the element\n"); 
        scanf("%d",&n); 
        stack[top1]=n; 
    } 
    else 
    { 
        printf("\nStack 1 Overflow\n"); 
    } 
    return 0; 
} 
int pop1() 
{ 
    if(top1!=-1) 
    { 
        n=stack[top1]; 
        top1--; 
        printf("\nElement removed: %d",n); 
    } 
    else 
    { 
        printf("\nStack 1 Underflow\n"); 
    } 
    return 0; 
} 
int push2() 
{ 
    if(top2!=top1+1) 
    { 
        top2--; 
        printf("\nEnter the element\n"); 
        scanf("%d",&n); 
        stack[top2]=n; 
    } 
    else 
    { 
        printf("\nStack 2 Overflow\n"); 
    } 
    return 0; 
} 
int pop2() 
{ 
    if(top2!=max) 
    { 
        n=stack[top2]; 
        top2++; 
        printf("\nElement removed: %d",n); 
    } 
    else 
    { 
        printf("\nStack 2 Underflow\n"); 
    } 
    return 0; 
}