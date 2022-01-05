#include <iostream>

using namespace std;

int Queue[10], Size = 5, Front=-1, rear = -1, value, i;
void Insert()
{

    if (rear == Size-1)
        cout<<"Queue is full OVERFLOW"<<endl;
    else
    {

        if (Front==-1)
            Front = 0;
        cout<<"Enter the item to be inserted"<<endl;
        cin>>value ;
        rear = rear+1;
        Queue[rear] = value;
    }
}
void Delete()
{

    if (Front==-1  || Front>rear)
        cout<<"Queue is Empty! UNDERFLOW"<<endl;
    else
    {

        cout<<"Item "<<Queue[Front]<<" is deleted" <<endl;
        Front++;
    }
}
    void Display()
    {
        if (Front==-1 || Front>rear)
            cout<<"Queue is Empty"<<endl;
        else
        {

            for(i=Front; i<=rear; i++)
                cout<<Queue[i]<<"";
        }
    }
    int main()
    {

        int choice;
        do{
            cout<<"nEnter your choice: ";
            cin>>choice;
            switch(choice)
            {

                case 1: Insert();
                break;
                case 2: Delete();
                break;
                case 3: Display();
                break;
                case 4: cout<<"Exit"<<endl;
                break;
                default: cout<<"Invalid Choice"<<endl;
                break;
            }
        }while(choice!=4);
    }
