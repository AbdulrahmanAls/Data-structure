#include <iostream>

using namespace std ;

typedef struct node
{
    int data ;
     node *next ;
};

node *Top = NULL;

void push (int x )
{
    node *New ;

    New = new (node);

    New->data = x ;
    New->next = NULL;

    if (Top == NULL )
    {
        Top = New ;
    }
    else
    {
     New->next = Top;
        Top = New ;
    }


}

void Travarse ()
{
    node *T ;

    for (T = Top ; T != NULL ; T=T->next)
    {
        cout<<T->data<<endl;
    }
}

bool IsEmpty()
{
    if (Top == NULL)
    {
        return true ;
    }
    else return false ;

}

node *peak()
{


    return Top ;
}


void Pop ()
{
    node *T;
    T =Top ;
    Top = Top->next;
    free(T);
}

int main ()
{
    node *T;
    int ch,number ;

    cout<<"\t\tWelcome\n";

    while(true)
    {
        cout<<"1-puch number\n"
                "2-pop number \n"
                "3-peak \n"
                "4-Is Empty\n"
                "5-Traverse\n"
                "6-exit\n";
        cin >> ch ;

        switch(ch)
        {
            case 1:
                cout<<"Enter number \n";
                cin >>number ;
                push(number);
                break ;
            case 2 :
                Pop() ;
                break;

            case 3:
                T=peak() ;
                cout<<"the frist stack is = "<< T->data <<endl ;
                break ;

            case 4 : if (IsEmpty())
                    cout<<"It's empty \n";
                else cout << "It's Not empty \n";
                break;
            case 5 : Travarse() ;
                break ;

            case 6 :
                exit(0);
                break ;
            default: cout << "tray agine \n\n ";
        }


    }

}