class Solution {
public:
    bool isvowel(char a) {
        a = tolower(a);
        return (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u');
    }
    string reverseVowels(string s) {

        int f = 0, l = s.size() - 1;
        while (f < l) {
            if (isvowel(s[f]) && isvowel(s[l])) {
                swap(s[f], s[l]);
                f++;
                l--;
            } else if (isvowel(s[f]) && !isvowel(s[l]))
                l--;
            else if (!isvowel(s[f]) && isvowel(s[l]))
                f++;
            else {
                f++;
                l--;
            }
        }
        return s;
    }
};