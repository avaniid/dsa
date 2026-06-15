class Solution {
public:
    bool isPalindrome(int x) {
        int duplicate=x;
        int rev=0;

        if (x < 0)
        return false;

        while(x!=0){
            int lastDigit=x%10;
           if (rev > INT_MAX/10 || rev < INT_MIN/10)
           return 0;
            rev=rev*10+lastDigit;
            x=x/10;
        }
        if (duplicate==rev){
            return 1;
        }
        else return 0;
    }
    
};
