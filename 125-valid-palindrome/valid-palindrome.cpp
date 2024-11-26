class Solution {
public:
    bool isPalindrome(string s) {
        string modified;
        for (char ch : s) {
            if (isalnum(ch)) {
                modified += tolower(ch);
            }
        }

       
        int left = 0;
        int right = modified.length() - 1;

        while (left < right) {
            if (modified[left] != modified[right]) {
                return false; 
            }
            left++;
            right--;
        }

        return true;
    }
};
        
    
