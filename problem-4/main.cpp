
#include <iostream>
using namespace std;

#define STUDENT 30
#define TEACHER 15
#define INSTRUCTOR 10


bool IsFull (int n ,int e )
{
    if ( n == e )
        return  true ;
    else
        return  false ;
}

bool IsEmpty (int n ) {
    if (n == -1)
        return true;
    else
        return false;
}


void Push (int a[] , int E , int *n )
{
    *n += 1 ;
    a[*n] = E ;
}


void Pop ( int *n)
{
    *n -= 1;

};


int Peak (int a[] , int n)
{
    return a[n];
}


int RemainingSlots (int d ,int n )
{
    n++;
    return   d - n ;
}



int main(int argc, const char * argv[]) {

    int student [STUDENT];
    int teacher [TEACHER];
    int instructor[INSTRUCTOR];

    int s = -1;
    int t = -1;
    int n = -1 ;
    int ch ;
    int vaule ;

    cout <<"\n\n\t\t\twelcome\n\n";

    while (4 != ch)
    {

        cout<<"1-To add the student an the Stack  \n"
                "2-To add the teacher an the Stack\n"
                "3-To add the instructor an the Stack\n"
                "4-to exet\n";
        cin >> ch ;

        switch (ch)
        {
            case 1 :
                while (5 != ch) {
                    cout << "1- to push \n"
                            "2- to pop \n"
                            "3- to peak \n"
                            "4-RemainingSlots\n"
                            "5-exet\n\n";
                    cin >> ch;

                    switch (ch) {

                        case 1:
                            if (IsFull(s, STUDENT)) {
                                cout << "its full \n";

                            } else
                                cout << "enter the value \n";
                            cin >> vaule;
                            Push(student, vaule, &s);
                            break;

                        case 2:
                            if (IsEmpty(s)) {
                                cout << "its empty \n\n";
                            } else
                                Pop(&s);
                            break;

                        case 3:
                            if (IsEmpty(s))
                                cout<<"is empty \n\n";
                            else
                            cout << "the last stach is " << Peak(student, s) << endl;
                            break;

                        case 4 :
                            cout << "the remainingSlots is " << RemainingSlots(STUDENT, s) << endl <<endl ;

                            break;
                        default:
                            if (ch == 5);
                            else
                            cout << "try again \n";


                    }

                }
            case 2:
                while (5 != ch) {
                    cout << "1- to push \n"
                            "2- to pop \n"
                            "3- to peak \n"
                            "4-RemainingSlots\n"
                            "5-exet\n\n";
                    cin >> ch;

                    switch (ch) {

                        case 1:
                            if (IsFull(t, TEACHER)) {
                                cout << "its full \n";

                            } else
                                cout << "enter the value \n";
                            cin >> vaule;
                            Push(teacher, vaule, &t);
                            break;

                        case 2:
                            if (IsEmpty(t)) {
                                cout << "its empty \n\n";
                            } else
                                Pop(&t);
                            break;

                        case 3:
                            if (IsEmpty(t))
                                cout<<"is empty \n\n";
                            else
                                cout << "the last stach is " << Peak(teacher,t) << endl;
                            break;

                        case 4 :
                            cout << "the remainingSlots is " << RemainingSlots(TEACHER, t) << endl <<endl ;

                            break;
                        default:
                            if (ch == 5);
                            else
                            cout << "try again \n";


                    }

                }

            case 3: while (5 != ch) {
                    cout << "1- to push \n"
                            "2- to pop \n"
                            "3- to peak \n"
                            "4-RemainingSlots\n"
                            "5-exet\n\n";
                    cin >> ch;

                    switch (ch) {

                        case 1:
                            if (IsFull(n, INSTRUCTOR)) {
                                cout << "its full \n";

                            } else
                                cout << "enter the value \n";
                            cin >> vaule;
                            Push(instructor, vaule, &n);
                            break;

                        case 2:
                            if (IsEmpty(n)) {
                                cout << "its empty \n\n";
                            } else
                                Pop(&n);
                            break;

                        case 3:
                            if (IsEmpty(n))
                                cout<<"is empty \n\n";
                            else
                                cout << "the last stach is " << Peak(instructor, n) << endl;
                            break;

                        case 4 :
                            cout << "the remainingSlots is " << RemainingSlots(INSTRUCTOR, n) << endl <<endl ;

                            break;
                        default:
                            if (ch == 5);
                            else
                            cout << "try again \n";


                    }

                }
        }

    }

    cout << "\n\n\t\t\t see you again\n\n";

    return 0;
}
