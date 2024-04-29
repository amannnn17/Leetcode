class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result="";
        int i=0;
        int n=word1.size();
        int m=word2.size();
        while(i<n && i<m){
            result=result +word1[i]+word2[i];
            i++;
        }
        while(i<n){
            result=result+word1[i];
            i++;
        }
        while(i<m){
            result+=word2[i];
            i++;
        }
        return result;
    }
};