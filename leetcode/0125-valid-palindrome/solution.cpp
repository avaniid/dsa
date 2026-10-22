class Solution {
public:

    bool isAlphaNumeric(char ch) {
        return (ch >= 'a' && ch <= 'z') ||
               (ch >= 'A' && ch <= 'Z') ||
               (ch >= '0' && ch <= '9');
    }

    char toLowerChar(char ch) {
        if(ch >= 'A' && ch <= 'Z') {
            return char(ch + 32);
        }
 
        return ch;
    }

    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
 
        while(left < right) {
 
            while(left < right && !isAlphaNumeric(s[left])) {
                left++;
            }
 
            while(left < right && !isAlphaNumeric(s[right])) {
                right--;
            }
 
            if(toLowerChar(s[left]) != toLowerChar(s[right])) {
                return false;
            }
 
            left++;
            right--;
        }
 
        return true;
    }
};
