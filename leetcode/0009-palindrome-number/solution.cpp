class Solution {
public:
    bool isPalindrome(int x) {
        int dupe=x;
        int rev=0;

        if (x < 0)
        return false;

        while(x!=0){
            int lastDigit=x%10;

            //before each iteration check if rev will overflow the constraint conditions
            if (rev > INT_MAX/10 || rev < INT_MIN/10)
            return 0;

            rev=rev*10+lastDigit;
            x=x/10;
        }

        if (dupe==rev){
            return 1;
        }
        else return 0;
    }
};
