// 26  Remove duplicates
/*class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0; 
        }

        int k = 0; 

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[k]) {
                k++;
                nums[k] = nums[i]; 
            }
        }

        return k +1; 
    }
};*/

// 27 Remove Element
/*class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};*/


class Solution {
public:
    bool isValid(string s) {
     
     if(s.empty())
     {
        return true;
     }
     stack<char> opning;
     stack<char> closing;
     for(int i=0;i<s.size();i++)
     {
        if(s[i]=='['||s[i]=='{'||s[i]=='(')
        {
            opning.push(s[i]);
        }
        else if(s[i]==']'||s[i]=='}'||s[i]==')')
        {
            closing.push(s[i]);
        }
     }
    if(opning.size()==closing.size())
    {
        return true;
    }
    return false;
    }
};