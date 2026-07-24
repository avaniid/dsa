class Solution {
public:
    bool isPalindrome(string s) {

        string cleaned = "";

        for (char ch : s) {
            if (isalnum(ch)) {
                cleaned += tolower(ch);
            }
        }

        string reversed = cleaned;
        reverse(reversed.begin(), reversed.end());

        return cleaned == reversed;
    }
};
