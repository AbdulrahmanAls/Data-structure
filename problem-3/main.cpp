// Name : Abdulrahman alsalamah
// ID : 351112948



#include <iostream>


using namespace std;


void AddMatrix(int **a , int **b, int r, int c)
{
    for (int i = 0 ; i < r ; i++)
    {
        for (int j = 0 ; j < c ; j++)
        {
            a[i][j] += b[i][j];
        }
    }
}

void sub(int **a , int **b, int r, int c)
{
    for (int i = 0 ; i < r ; i++)
    {
        for (int j = 0 ; j < c ; j++)
        {
            a[i][j] -= b[i][j];
        }
    }
}

void multp(int **a, int b , int s ,int m )
{

    for (int i = 0 ; i < b ; i++)
    {
        for(int j = 0 ; j < s; j++ )
        {
            a[i][j] *= m ;
        }
    }
}
void print(int **a,int b, int d)
{
    for (int i = 0 ; i < b ; i++)
    {
        for (int j = 0 ; j < d ; j++)
        {
            cout <<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void enter(int **a,int b, int d)
{
    for (int i = 0 ; i < b ; i++)
    {
        for (int j = 0 ; j < d ; j++)
        {
            cin>> a[i][j];
        }

    }
}


int main()
{
    int r1,r2,c1,c2;
    int ch , mult ;

    cout <<"enter the frist matrix row X clos \n";
    cin >> r1 >> c1;


    int **array1;



    array1 = new int *[c1];
    for (int i = 0 ; i < r1 ; i++)
    {
        array1[i] = new int[c1];
    }


    cout << "enter the value of the matrix = \n";
    enter(array1,r1,c1);

    cout << "your matrix is \n";
    print(array1,r1,c1);


    cout <<"\n\n";
    cout<<"choose an operation to perform\n\n"
            "1: Multiplies a scalar by a matrix\n"
            "2: Add two matrices\n"
            "3: Subtract two matrices\n";

    cin >>ch ;

   switch(ch) {
       case 1 :
           cout << "enter the scalar to multiplies \n";
           cin >> mult;
           multp(array1, r1, c1, mult);
           print(array1, r1, c1);
           break;

       case 2 :

           int **array2;


           cout << "to add two matrix the frist and second matrix row X clos equal  \n";

           cin >> r2 >> c2;

           if (r1 == r2 && c1 == c2) {
               array2 = new int *[c1];
               for (int i = 0; i < r1; i++) {
                   array2[i] = new int[c1];
               }
               cout << "enter the secend matrix \n";
               enter(array2, r2, c2);
               cout << endl;
               AddMatrix(array1, array2, r1, c1);
               cout << "the add matrix is \n";
               print(array1, r1, c1);


           } else cout << "you enter the wrong way \n";
           break;

       case 3:

           int **array3;


           cout << "to sub two matrix the frist and second matrix row X clos equal  \n";

           cin >> r2 >> c2;
           cout << "finsh .........\n";

           if (r1 == r2 && c1 == c2) {
               array3 = new int *[c1];
               for (int i = 0; i < r1; i++) {
                   array3[i] = new int[c1];
               }
               cout << "enter the secend matrix \n";
               enter(array3, r2, c2);
               cout << endl;
               sub(array1, array3, r1, c1);
               cout << "the add matrix is \n";
               print(array1, r1, c1);


           }

       default:
           cout<<"You enter the wrong way ..\n";
   }

    for(int i = 0; i < r1; ++i)
        delete [] array1[i];
    delete [] array1;




    return 0;
}