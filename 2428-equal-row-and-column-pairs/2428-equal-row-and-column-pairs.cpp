class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int> mp;
        int n= grid.size();
        int count =0;
        
        for(int row=0 ; row<n ; row++){
            mp[grid[row]]++;
        }

        for(int c=0;c<n;c++){
            vector<int> temp;
            for(int r=0;r<n;r++){
                temp.push_back(grid[r][c]);
            }
            count = count + mp[temp];
        }
        return count;
    }
};