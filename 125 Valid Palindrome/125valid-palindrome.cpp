class Solution {
public:

    bool check(string &s, int i, int j) {

        // Base case
        if(i >= j) {
            return true;
        }

        // Skip non-alphanumeric characters from left
        if(!isalnum(s[i])) {
            return check(s, i + 1, j);
        }

        // Skip non-alphanumeric characters from right
        if(!isalnum(s[j])) {
            return check(s, i, j - 1);
        }

        // Compare after converting to lowercase
        if(tolower(s[i]) != tolower(s[j])) {
            return false;
        }

        // Move both pointers
        return check(s, i + 1, j - 1);
    }

    bool isPalindrome(string s) {
        return check(s, 0, s.size() - 1);
    }
};