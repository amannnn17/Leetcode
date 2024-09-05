class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> lost_map;
        for(int i=0 ; i<matches.size() ; i++){
            int looser = matches[i][1];
            lost_map[looser]++;
        }
        vector<int> noLost;
        vector<int> one_lost;
        for(int i=0;i<matches.size();i++){
            if(lost_map.find(matches[i][0])==lost_map.end()){
                noLost.push_back(matches[i][0]);
                lost_map[matches[i][0]]=2;
            }
            if(lost_map[matches[i][1]]==1){
                one_lost.push_back(matches[i][1]);
            }
        }
        sort(noLost.begin(),noLost.end());
        sort(one_lost.begin(),one_lost.end());
        return{noLost,one_lost};
    }
};