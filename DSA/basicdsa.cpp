/*#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        
        int largest = INT_MIN;
        int secondlargest = INT_MIN;
        
        for(int num : arr)
        {
            if(num>largest)
            {
           secondlargest = largest;
           largest = num;
            }
            else if(num > secondlargest && num != largest)
            {
                secondlargest = num;
            }
        }
        
        if(secondlargest == INT_MIN)
        {
            return -1;
        }
        return secondlargest;
        // Code Here
    }
};
int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    Solution obj;
    int secondLargest = obj.getSecondLargest(arr);

    if (secondLargest == -1) {
        cout << "No second largest element found." << endl;
    } else {
        cout << "Second largest element: " << secondLargest << endl;
    }

}*/

/*#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size();
        int j = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
};

int main() {
    vector<int> arr = {1, 2, 0, 0, 0, 3, 6};
    Solution obj;
    obj.pushZerosToEnd(arr);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}*/

/*#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseArray(vector<int>& arr) {
        int n = arr.size();

        for (int i = 0; i < n / 2; i++) {
            swap(arr[i], arr[n - i - 1]);
        }
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    Solution obj;
    obj.reverseArray(arr);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}*/

/*#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n; // Handle cases where d is greater than n

        // Reverse the first d elements
        reverse(arr.begin(), arr.begin() + d);

        // Reverse the remaining n-d elements
        reverse(arr.begin() + d, arr.end());

        // Reverse the entire array
        reverse(arr.begin(), arr.end());
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int d = 2;

    Solution obj;
    obj.rotateArr(arr, d);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}*/

/*#include<iostream>
#include<vector>
using namespace std;

class stack
{
    private:
        vector<int> Stack;
    public:
    void push(int element)
    {
        Stack.push_back(element);
    }
    bool pop()
    {
        if(Stack.empty())
        {
            cout << "Stack underflow";
            return false;
        }
        Stack.pop_back();
    }
    int top()
    {
        if(Stack.empty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else
            return Stack.back();
    }
    void display()
    {
        if(Stack.empty())
        {
            cout << "No values for shown" << endl;
            return;
        }
        for(int i = Stack.size()-1; i >=0; i--)
        {
            cout << Stack[i] << " ";
        }
        cout << endl;
    }

};

int main()
{
    cout<<"Enter number you want to push in stack : ";
    int n;
    cin >> n;
    stack s;
    s.display();
    for (int i = 0; i < n;i++)
    {
        cout << "Enter number " << i + 1 <<": ";
        int x;
        cin>>x;
        s.push(x);
    }
    cout << "Top element id : " << s.top() << endl;
    s.pop();
    cout << "Top element id : " << s.top() << endl;
    s.display();

    return 0;
}*/

/*#include<iostream>
#define MAX 50
using namespace std;

class stack
{
    int Stack[MAX];
    int top;

    public:
    stack()
    {
        top = -1;
    }

    bool push(int element)
    {
        if(top==MAX-1)
        {
            return false;
        }
        Stack[++top] = element;
    }

    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << Stack[i] <<" ";
        }
    }


};

int main()
{
    stack s;
    s.push(5);
    s.push(1);
    s.push(7);
    s.push(3);
    s.push(9);
    s.push(2);

    s.display();

    return 0;
}*/

/*#include<iostream>
using namespace std;

class Queue
{
    int front, rear, size;
    int *Q;

    public:
    Queue(int size)
    {
       this-> size = size;
       Q = new int[size];
       front = rear = -1;
    }

    bool isfull()
    {
        return rear == size - 1;
    }

    bool isempty()
    {
        return front == -1 || front > rear;
    }

    void enqueue(int element)
    {
        if(isfull())
        {
            throw "Queue is full";
            return;
        }
        if(front==-1)
            front = 0;
        Q[++rear] = element;
    }

    int dequeue()
    {
        if(isempty())
        {
            throw "Queue is empty";
            return -1;
        }
        return Q[front++];
    }

    void display()
    {
        if(isempty())
        {
            throw "Nothing to display";
            return;
        }
        for (int i = front; i <= rear;i++)
        {
            cout << Q[i] << " ";
        }
    }

    ~Queue()
    {
        delete[] Q;
    }
};

int main()
{
    int n;
    cout << "Enter size of Queue :";
    cin >> n;
    Queue q(n);
    try
    {
    
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(10);
    q.dequeue();
    q.dequeue();
    

    q.display();
    }
    catch(const char* msg)
    {
        cout << msg << endl;
    }

    return 0;
}*/

//Linked List
#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* createNode(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

void insertatend(Node*& head,int data)
{
    Node* newNode = createNode(data); 
    if (head == nullptr)
    { // If the list is empty 
    head = newNode; 
    return; 
    } 
    Node* temp = head; 
    while (temp->next != nullptr) 
    { 
        temp = temp->next;
    } 
    temp->next = newNode;
}
void displaylist(Node* head)
{
    Node *temp = head;
    while(temp!=nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "Nullptr" << endl;
}

int main()
{
    Node* head = nullptr;
    insertatend(head, 10);
    insertatend(head, 20);
    insertatend(head, 30);
    insertatend(head, 40);
    insertatend(head, 50);
    displaylist(head);

    return 0;
}