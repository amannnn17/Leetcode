class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> arr(26,0);

        int count = 0;
        for(auto it: sentence){
            int index= it - 'a';
            if(arr[index]==0){
                arr[index]++;
                count++;
            }
        }
        if(count == 26) return true;
        else return false;
    }
};