#include <iostream>
#include <time.h>

using namespace std ;

struct node {
    int ID ;
    string FristName ;
    string LastName ;
    int HW ;
    int mid1;
    int mid2;
    int final ;
    bool Attendance [15];
    struct node *Next;
};


int ReadInt()
{
    int input;
    bool valid = false;

    while(! valid)
    {
        cin >> input;

        if(cin.fail())
        {
            cout << "Wrong input" << endl;

            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout<<"Try again :";

        }
        else
        {
            valid = true;
        }
    }
    return input;
}

void EnterAStudent (node **T )
{
    node *New ;
    New = new(node);

    string frist ;
    string last ;
    int id ;
    int mid1;
    int mid2 ;
    int HW ;
    int final ;



    cout<<"Enter the first name  : " ;
        cin >>frist ;
    cout<<"Enter the last name : " ;
        cin >>last ;

    cout<<"Enter the mid 1 grade : ";
    mid1 = ReadInt() ;

    cout<<"Enter the mid 2 grade : ";
    mid2 = ReadInt() ;

    cout<<"Enter the HW grade : ";
    HW = ReadInt() ;

    cout<<"Enter the final grede : ";
    final = ReadInt();

    id = rand() % 1000 + 1 ;
    cout<<"ID :"<< id ;

    New->ID = id ;
    New->FristName = frist;
    New->LastName = last;
    New->mid1 = mid1 ;
    New->mid2 = mid2 ;
    New->HW = HW ;
    New->final = final ;
    New->Next = NULL ;

    if (*T = NULL)
    {
        *T = New ;
    }else {
        New->Next= *T ;
        *T = New ;
    }

    cout<<endl<<endl;
}


void Travarse (node *Top )
{
    node *T ;

    for (T = Top ; T != NULL ; T=T->Next)
    {
        cout<<T->FristName<<endl<<T->LastName<<endl;
    }
}

void FindStudent (node *Top)
{

    node *T ;
    int ID ;
    string frist ;
    string last ;
    int mid1;
    int mid2 ;
    int HW ;
    int final ;

    cout<<"Enter the student ID : ";
    ID = ReadInt() ;

    cout<<endl;

    for (T = Top ; T != NULL ; T=T->Next)
    {
        if (T->ID == ID )
        {
            cout<<"Name :"<<T->FristName<<" "<<T->LastName<<endl ;
            cout<<"mid1 :"<<T->mid1<<endl ;
            cout<<"mid2 :"<<T->mid2<<endl ;
            cout<<"HW   :"<<T->HW<<endl ;
            cout<<"final:"<<T->final<<endl;

            int ch = 0;
            while(7 != ch ) {
                cout << "\n\nEnter the number if would you like to change data \n"
                        "1-Frist name \n2-Last name\n3-mid-1\n4-mid-2\n5-HW\n6-Final\n7-exet \n";
                ch = ReadInt();

                switch (ch) {
                    case 1:;
                        cout << "Enter the first name  : ";
                        cin >> frist;
                        T->FristName = frist;
                        break;
                    case 2:;
                        cout<<"Enter the last name : " ;
                        cin >>last ;
                        T->LastName = last ;

                        break;
                    case 3:
                        cout<<"Enter the mid 1 grade : ";
                        mid1 = ReadInt() ;
                        T->mid1 = mid1;

                        break;
                    case 4:
                        cout<<"Enter the mid 2 grade : ";
                        mid2 = ReadInt() ;
                        T->mid2 = mid2;

                        break;
                    case 5:
                        cout<<"Enter the HW grade : ";
                        HW = ReadInt() ;
                        T->HW = HW ;
                        break;
                    case 6:
                        cout<<"Enter the final grede : ";
                        final = ReadInt();
                        T->final = final ;
                        break;
                    case 7:

                        break;
                    default:
                        cout << "You enter the wrong number \n "
                                "Enter from 1 - 7 \n\n";

                }
            }

        }
        else cout<<"There is no student match with ID:"<<ID;

    }cout<<endl <<endl;
}


void RemoveStudent (node **Top)
{
    int id ;

    if (*Top == NULL)
    {
        cout<<"The list is empty !! \n\n";

    }
    node *T ;
    node *temp = *Top;

    cout<<"Enter the ID :";
    id=ReadInt() ;

    if ((*Top)->ID == id)
    {
        *Top = temp->Next;
        delete temp;

        return;
    }

    for (T = *Top ; T != NULL ; T=T->Next)
    {


    };

}

void Sort(node *Top)
{
    int swp, i;
    struct node *temp;
    struct node *temp1 = NULL;

    if (temp == NULL)
        return;

    do
    {
        swp = 0;
        temp = Top;

        while (temp->Next != temp1)
        {
            if (temp->ID > temp->Next->ID)
            {
                swap(temp, temp->Next);
                swp = 1;
            }
            temp = temp->Next;
        }
        temp1 = temp;
    }
    while (swp);
}

void swap( node *a, node *b)
{
    node *c ;
    c = NULL ;

    c = a;
    a = b ;
    b = c ;


}


void DeleteNode(node **Top)

{

    int id;

    if(*Top==NULL)
    {
        cout<<"The list is empty !!"<<endl<<endl ;

         return;
    }


    cout<<"Enter the ID :";
    id=ReadInt() ;

    if(id == (*Top)->ID)
    {
        *Top = (*Top)->Next;

        return;
    }

    node *Prev , *Curr , *Scan ;

    Prev = Curr = Scan = NULL;

    for( Scan = *Top ; Scan != NULL ; Scan = Scan->Next )

    {

        if( Scan->ID == id)
        {
            Curr = Scan;
            break;
        }

        Prev = Scan;

    }
    if( Curr->ID != id)

        cout<<"The student not found in the list ID"<<id<<endl ;
    else
    {
        Prev->Next = Curr->Next;
    }

}


void TakeAttendance (node *Top)
{
    node *T ;
    T = NULL ;
    int data = 0;
    int pr ;

    cout<<"Enter a date of a class(lecture) :";
    while (data >= 0 && data <= 15 ) {
        data = ReadInt();
    }

    cout<<endl ;

    cout<<"Enter number 0 for absent  or any number for Present : ";
    cout<<endl<<endl ;

    for (T = Top ; T != NULL ; T=T->Next)
    {

        cout<<T->FristName<<" "<<T->LastName;
        pr =ReadInt()  ;
        if (pr == 0 )
        {
         T->Attendance[data] = false ;
        }
        else{
            T->Attendance[data] = true ;
        }
        cout<<endl;

    }



}

void ViewAttendance (node *Top)
{
    node *T ;
    T = NULL ;

    cout<<"lecture No: ";
    for (int i = 1 ; i <=15 ; i++ )
    {
        cout<<"\t"<<"|"<<i<<"|";
    }
    cout<<endl;

    for (T = Top ; T != NULL ; T=T->Next)
    {
        cout<<T->FristName<<" "<<T->LastName;
        for (int i = 1 ; i <=15 ; i++ )
        {
            cout<<"\t|"<<T->Attendance[i]<<"|";
        }
        cout<<endl;

    }
    cout<<endl<<endl;


}

int main() {

    srand (time(NULL));
    node *student = NULL ;

    string CourseID ;
    int ch1 ;
    cout << "Enter the course ID : ";
    cin >> CourseID ;
    cout<<endl <<endl;

    while(true)
    {
        cout<<"1-Enter a Student\n"
                "2-Find a Student\n"
                "3-Remove a Student\n"
                "4-Sort Students According to ID\n"
                "5-Take attendance\n"
                "6-View Attendance for all students\n"
                "7-Exit\n";
        ch1 = ReadInt();
        switch (ch1)
        {
            case 1:EnterAStudent(&student);
                break ;
            case 2:FindStudent(student);
                break;
            case 3:DeleteNode(&student);
                break;
            case 4:Sort(student);
                break;
            case 5:TakeAttendance(student);
                break;
            case 6:ViewAttendance(student);
                break;
            case 7:exit(0);
            default:
                cout<<"You enter the wrong number \n "
                        "Enter from 1 - 7 \n\n";

        }
    }


    return 0;
}