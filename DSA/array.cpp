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

#include <iostream>
#include <vector>

using namespace std;

class Stack {
private:
    vector<int> stack;

public:
    void push(int value) {
        stack.push_back(value);
    }

    void pop() {
        if (stack.empty()) {
            cout << "Stack Underflow\n";
            return;
        }
        stack.pop_back();
    }

    int top() {
        if (stack.empty()) {
            cout << "Stack is empty\n";
            return -1; // Assuming -1 is not a valid stack value
        }
        return stack.back();
    }

    bool isEmpty() {
        return stack.empty();
    }

    int size() {
        return stack.size();
    }
};

int main() {
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Top element is: " << s.top() << "\n"; // Output: 3

    s.pop();
    cout << "Top element is: " << s.top() << "\n"; // Output: 2

    s.pop();
    s.pop();

    if (s.isEmpty()) {
        cout << "Stack is empty\n"; // Output: Stack is empty
    }

    return 0;
}

