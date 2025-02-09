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


/*class Solution {
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
};*/


/*class Solution {
public:
    int lengthOfLastWord(string s) {
        // Reverse the string
        reverse(s.begin(), s.end());

        int length = 0;
        bool wordFound = false;

        // Iterate through the reversed string from the beginning
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                wordFound = true;
                length++;
            } else if (wordFound) {
                break;
            }
        }

        return length;
    }
};*/
//13. Roman to Integer
class Solution {
public:
    int romanToInt(string s) {
        for(char c:s)
        {
            if(c=='I'||c=='V'||c=='X'||c=='L'||c=='C'||c=='D'||c=='M')
            {
                continue;
            }
            else
            {
                return -1;
            }
        }
            int result=0;
            for(int i=0;i<s.length();i++)
            {
                switch(s[i]){
                    case 'I':
                    result+=1;
                    break;
                    case 'V':
                    result+=5;
                    break;
                    case 'X':
                    result+=10;
                    break;
                    case 'L':
                    result+=50;
                    break;
                    case 'C':
                    result+=100;
                    break;
                    case 'D':
                    result+=500;
                    break;
                    case 'M':
                    result+=1000;
                    break;
                }
                if(i<s.length()-1 && s[i]=='I' &&(s[i+1]=='V'||s[i+1]=='X'))
                {
                    result-=2;
                }
                if(i<s.length()-1 && s[i]=='X' &&(s[i+1]=='C'||s[i+1]=='L'))
                {
                    result-=20;
                }
                if(i<s.length()-1 && s[i]=='C' &&(s[i+1]=='D'||s[i+1]=='M'))
                {
                    result-=200;
                }

            }
            return result;
    }
};