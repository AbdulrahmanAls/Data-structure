
// Name : Abdulrahman Alsalamah
// ID   :351112948


#include <iostream>
#include <time.h>

using namespace std;

int GetNumber()
{
    int number;
    cout<<endl<<"Enter positive number to generate random number = " ;

    do
    {
        cin>> number;
    }while (number <= 0 );

    return number ;

}

void PrintArray(int *array , int number)
{
    for(int i = 0 ; i < number ; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void SortArray(int *array , int number)
{
    int i, j;
    for (i = 0; i < number-1; i++)


        for (j = 0; j < number-i-1; j++)
            if (array[j] > array[j+1])
                swap(array[j], array[j+1]);
}
int main ()
{
    srand(time(NULL));
    int number = GetNumber();
    int count_even = 0 , count_odd = 0 ;
    int tem ;

    int *even_number = (int *) malloc(sizeof(int) * number);
    int *odd_number = (int *) malloc(sizeof(int) * number );

    for (int i ; i < number ; i++)
    {
        tem = 1 + rand() % 1000 ;

        if (tem % 2 == 0 )
        {
            even_number[count_even] = tem ;
            count_even++;
        }
        else
        {
            odd_number[count_odd] = tem ;
            count_odd++;
        }
    }

    PrintArray(even_number , count_even);
    PrintArray(odd_number , count_odd);

    cout<< "\n\nSort the array\n";
    SortArray(even_number, count_even);
    SortArray(odd_number, count_odd);

    PrintArray(even_number , count_even);
    PrintArray(odd_number , count_odd);

    return 0;
}