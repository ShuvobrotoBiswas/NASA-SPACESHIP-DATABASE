#include <iostream>
#define MAX_SIZE 5
using namespace std;
int arr_stack[MAX_SIZE];
int top=0, item, i;

void Insert(){
    if(top == MAX_SIZE)
    cout<<"\nStack is full! OVERFLOW";
    else
    {
        cout<<"\nEnter the value to be PUSHED: ";
        cin>>item;
        cout<<"\nPosition: "<<top<<", PUSHED value: "<<item;
        arr_stack[top++] =item;
    }
}

void Delete(){
    if (top==0)
    cout<<"Stack is empty !! UNERFLOW";
    else {
        --top;
        cout<<"\nPosition: "<<top<<", popped value: "<<arr_stack[top];
    }
}
void Display (){
    for ( i =(top-1); i>=0; i--)
    cout<<"\nPosition: "<<i<<", Value: "<<arr_stack[i];
}

int main(){
    int choice;
    cout<<"1) Insert element to the stack"<<endl;
    cout<<"2) Delete Element from stack"<<endl;
    cout<<"3) Display all elements of stack"<<endl;
    cout<<"4) Exit"<<endl;

    do
    {
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1: Insert();
        break;
        case 2: Delete();
        break;
        case 3: Display();
        break;
        case 4: cout<<"Exit"<<endl;
        break;
        default: cout<<"Invalid choice"<<endl;
        }
    } while (choice != 4);
    
}