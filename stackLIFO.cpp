#include<iostream>
using namespace std;

int stack[1000];
int top = -1;

void print()
{
    for(int i=0; i<=top; i++)
    {
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}

int push(int data)
{
    top++;
    if(top == 1000)
    {
        cout<<"Memory Full\n";
        return 0;
    }
    stack[top] = data;
}

int pop()
{
    if(top == -1)
    {
        cout<<"No more items to pop\n";
        return INT16_MAX;
    }
    return stack[top--];
}
int main()
{
    int choice = -1;
    while (choice != 4)
    {
        cout<<"Enter your choice\n1.push\n2.pop\n3.print\n4.exit\n";
        cin>>choice;

        if (choice == 1)
        {
            cout<<"Enter your data\n";
            int data;
            cin>>data;
            push(data);
        }
        else if(choice == 2)
        {
            int val = pop();
            if(val != INT16_MAX)
            {
                cout<<val<<endl;
            }
        }
        else if (choice == 3)
        {
            print();
        }
        else if (choice != 4)
        {
            cout<<"Invalid choice\n";
        }   
    }
}