

// name: Abdulrahman alsalamah
// ID  : 35112948

#include <iostream>
#include <time.h>
#include <new>


using namespace std;

void genarate(int* array , int n )
{
    int tmp;

    for(int i = 0 ; i < n ; i++)
    {
        tmp = rand()%1000 ;

        for (int j = 0 ; j < i ; j++)
        {
            if(tmp == array[j])
            {
                tmp = rand()%1000 ;
                j--;
            }
        }

        array[i] = tmp;

    }
}

void print(int* array ,int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout<<array[i]<<" " ;
    }

    cout<<endl;
}

void selectionSort(int arr[], int n)
{
    int i, j, minIndex, tmp;

    for (i = 0; i < n - 1; i++)
    {
        minIndex = i;

        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;

        if (minIndex != i)
        {
            tmp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = tmp;
        }
    }
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i-1;


        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}


int main() {

    srand(time(NULL));
    int number;
    int tem;

    cout<<"Enter the number to genarate and sorted = ";
    cin>>number;

    int* array1 = new int[number];
    int* array2 = new int[number];

    genarate(array1 , number);
    genarate(array2 , number);

    print(array1 , number);
    print(array2 , number);

    cout<<"\n\nsort the array 1 selection Sort \n";
    selectionSort(array1 , number);
    print(array1 , number);

    cout<<"\n\nsort the array 2 insertion Sort \n";
    insertionSort(array2, number);
    print(array2 , number);


    return 0;
}