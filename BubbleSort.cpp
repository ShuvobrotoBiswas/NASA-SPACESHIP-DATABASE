#include <iostream>

using namespace std;

int bubbleSort(int array[], int n){
    int step, compare;
    for(int step=0; step<n-1; step++){
        for(compare=0; compare<n-step-1; compare++){
            if (array[compare]>array[compare+1])
                swap (array[compare], array[compare+1]);
        }
    }
}

int main(){
    int n;
    cout<<"Enter the array size: " ;
    cin>>n;
    int array[n];
for(int i=0; i<n; i++)
    cin>>array[i];

cout<<"Unsorted data: ";
for (int i=0 i<n; i++)
    cout<<array[i]<<" ";

bubbleSort(array, n);

cout<<"\nSorted data: ";
for(int i=0; i<n; i++)
    cout<<array[i]<<" ";
}
