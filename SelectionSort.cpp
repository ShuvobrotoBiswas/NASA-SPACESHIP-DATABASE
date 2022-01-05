#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int selectionSort(int array[], int n){
    int step, compare, min_index;
    for(int step=0; step<n-1; step++){
            min_index = step;
        for(compare=step+1; compare<n; compare++)
            if (array[compare]<array[min_index])
                   min_index = compare;
                swap (array[step], array[min_index]);

    }
}

int main(){
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int array[n];

srand(time(0));
for(int i=0; i<n; i++)
    array[i] = rand()%50;

cout<<"Unsorted data: ";
for (int i=0; i<n; i++)
    cout<<array[i]<<" ";

selectionSort(array, n);

cout<<"\nSorted data: ";
for(int i=0; i<n; i++)
    cout<<array[i]<<" ";
}
