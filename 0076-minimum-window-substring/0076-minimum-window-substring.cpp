class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();

        int hash[256] = {0};

        for(int i = 0; i < m; i++) {
            hash[t[i]]++;
        }

        int l = 0;
        int r = 0;
        int minl = INT_MAX;
        int startI = -1;
        int cnt = 0;

        while(r < n) {
            if(hash[s[r]] > 0) {
                cnt++;
            }

            hash[s[r]]--;

            while(cnt == m) {
                if(r - l + 1 < minl) {
                    minl = r - l + 1;
                    startI = l;
                }

                hash[s[l]]++;

                if(hash[s[l]] > 0) {
                    cnt--;
                }

                l++;
            }

            r++;
        }

        if(startI == -1) {
            return "";
        }

        return s.substr(startI, minl);
    }
};