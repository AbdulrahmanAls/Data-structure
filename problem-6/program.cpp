#include "global.h"



void push(node **stack , int N)
{
    node *new_node ;
    new_node = new node;

    new_node->info = N ;
    new_node->next = NULL;

    if (*stack == NULL)
    {
        *stack = new_node;
    }
    else
    {
        new_node->next = *stack ;
        *stack = new_node ;
    }
}

void push1(node ***stack , int N)
{
    node *new_node ;
    new_node = new node;

    new_node->info = N ;
    new_node->next = NULL;

    if (**stack == NULL)
    {
        **stack = new_node;
    }
    else
    {
        new_node->next = **stack ;
        **stack = new_node ;
    }
}


void pop(node **Top1 , node **Top2 )
{
    node *T;
    node *swp;
    if(*Top1 == NULL)
    {
        cout<<"the stack is empty \n\n";
    }else
    {
        for(T = *Top1 ; T != NULL ; T=T->next)
        {
            swp = *Top1;
            *Top1 = (*Top1)->next;
            push1(&Top2, swp->info);
            free(swp);
        }
    }

}

void display (node *Top)
{
    node *T ;
    if(Top == NULL)
    {
        cout<<"The stack is empty \n\n";
    }else {
        for (T = Top; T != NULL; T = T->next) {
            cout << T->info << endl;
        }
    }
}


void Delete(node **Top)
{
    node *T;

    if(*Top == NULL)
    {
        cout<<"The stack is empty \n\n";
    }else
    {
        T = *Top ;
        *Top = (node *) (*Top)->next;
        free(T);
    }

}



void Program(){
    node *stack1 = NULL ;
    node *stack2 = NULL ;
    int c , c1 ;

    while (true)
    {
        cout<<"Chose one of element \n"
                "1-Insert\n"
                "2-Peak(FIFO)\n"
                "3-Delete(LIFO)\n"
                "4-Display\n"
                "5-Exit\n";
        c = ReadInt();
        switch(c)
        {
            case 1 :
                cout <<"Enter the number : ";
                c1 = ReadInt();
                push(&stack1, c1);
                cout<<endl;
                break ;
            case 2:
                pop(&stack1, &stack2);
                Delete(&stack2);
                pop(&stack2,&stack1);
                break;
            case 3 :
                Delete(&stack1);
                break;
            case 4 :
                pop(&stack1, &stack2);
                display(stack2);
                pop(&stack2,&stack1);
                break;
            case 5 :
                exit(0);
                break ;
            default :
                cout<<"You enter the wrong way \n"
                        "Try agine\n\n";
        }
    }
}