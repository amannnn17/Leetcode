class Solution {
public:
    bool canPlaceFlowers(vector<int>& fb, int n) {
        int s = fb.size();
        if (fb.size() == 1 && fb[0] == 0)
            return true;
        if (fb[s - 1] == 0 && fb[s - 2] == 0) {
            n = n - 1;
            fb[s - 1] = 1;
            if (n <= 0)
                return true;
        }
            for (int i = 0; i < s; i++) {
                if (i == 0) {
                    if (fb[i]==0 && fb[i + 1] == 0) {
                        fb[i] = 1;
                        n = n - 1;
                    }
                } else if (i == s - 1) {
                    if (fb[s - 2] == 0 && fb[s - 1] == 0) {
                        fb[s - 1] = 1;
                        n = n - 1;
                    }
                } else {
                    if (fb[i] == 0 && fb[i - 1] == 0 && fb[i + 1] == 0) {
                        fb[i] = 1;
                        n = n - 1;
                    }
                }
            }
            if (n <= 0)
                return true;

            return false;
        }
    };