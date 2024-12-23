// Question no. 09, LeetCode Solution In C++  :-
// My Approach:
class Solution {
public:
    bool isPalindrome(int x) {
        long int n = x;
        long int d;
        long int rev;

        if (n<0)
           return false;
        while (n!=0){
            d=n%10;
            rev=rev*10+d;
            n/=10;
        }

        if ( rev==x)
           return true;
        else 
           return false;
    }
};
