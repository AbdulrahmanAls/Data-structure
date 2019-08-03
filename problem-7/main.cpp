//Abdulrahmna alsalamah
//351112948

#include <iostream>
using namespace std ;

typedef struct QUEUE {

    int info ;
    QUEUE* next ;
};

void Enqueue(QUEUE **F , QUEUE **R, int n ){

    QUEUE *New  ;

    New = new(QUEUE);

    New->info = n ;
    New->next = NULL;

    if( *F == NULL && *R == NULL){
        *F = New ;
        *R = New ;
    } else {
        (*R)->next = New ;
    }


}

void Dequeue(QUEUE **F , QUEUE **R){

    if (F == NULL && R == NULL )
    {
        cout<< "its empty queue \n ";

    } else if(F == R)
    {
        cout<<"last number ="<<(*F)->info;
        *F = NULL ;
        *R = NULL;

    }
    else {
        cout<<"Delete the number ="<<(*F)->info;
        *F = (*F)->next ;
    }


}

void Traverse(QUEUE *F){

    QUEUE *p ;


    for (p = F ; p != NULL ; p=p->next)
    {
        cout<<p->info<<endl;
    }
};

int main() {

    QUEUE *Rear = NULL;
    QUEUE *Front = NULL ;


    int ch ,n;

    while(ch != 4 ){


        cout << "1-Enter the number in queue \n"
                "2- delete the number from the queue \n"
                "3- traverse in thee queue \n"
                "4- exit \n";
        cin >> ch ;

        switch (ch)
        {
            case 1: cout<<"enter the number \n";
                cin >> n;
                Enqueue(&Front,&Rear,n);
                break;
            case 2:"delete the number =";
                Dequeue(&Front,&Rear);
                cout<<endl;
                break;
            case 3 : "Traverse value \n ";
                Traverse(Front);
                break ;
            case 4 :
               break;

            default: cout <<"You enter the wrong way \n";


        }
        }
    delete Rear;
    delete Front;
    return 0;
}