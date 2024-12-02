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

#include <iostream>
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
}