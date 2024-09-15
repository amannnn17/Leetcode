class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k>1){
            sort(s.begin(),s.end());
            return s;
        }
        string ans = s;
        for(int i=0;i<s.length();i++){
            s = s.substr(1,s.length()-1)+ s.substr(0,1);
            ans=min(ans,s);
        }
        return ans;

    }
};