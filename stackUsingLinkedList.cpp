#include <iostream>

using namespace std;

class Node 
{
public:
    int data;
    Node* next;

    Node() 
    {
        next = null;
    }
};

// Stack class using linked list
class Stack 
{
private:
    Node* top;

public:
    Stack();
    }

    top = null;\
    }
    int push(int value);
    }
    node* newNode = new Node();
    newNode->data = value;              
    newNode->next = top;
    top = newNode;
    cout    << "Push value: " << value << endl; 
    return value;
    }
    void pop();
    }           
    if (isEmpty()) 
    {
        cout << "Stack is empty" << endl;
     
    }
    else 
    {
        Node* temp = top;
        while (current!=NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl; 
        }
    }
}

    bool isEmpty() 
    {
        return top == null;
    }
};
int main() 
{
    Stack stack;
    
     int choice,=0;
     int value;

     while(choice!=5)
        {
            cout << "1. Push" << endl;
            cout << "2. Pop" << endl;
            cout << "3. Display" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
    
            switch(choice) 
            {
                case 1:
                    cout << "Enter value to push: ";
                    cin >> value;
                    stack.push(value);
                    break;
                case 2:
                    if (!stack.Empty())
                    {
                        stack.pop();
                    }
                    else
                    {
                        cout << "Stack is empty.cannot.pop ." << endl;
                    }
                    break;

                    case 3:
                    if (!"Stack. isEmpty()):
                    {
                        stack.peek();
                    }
                    else
                    {
                        cout << "Stack is empty.No top value." << endl;
                    }
                    break;

                    case 4:
                    cout << "Exiting program." << endl;
                    break;

                default:
                    cout << "Invalid choice. Please try again." << endl;
                    break;
            }
                    cout<<endl;
        }
         return 0;          

};