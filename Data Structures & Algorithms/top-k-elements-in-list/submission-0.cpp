class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        
        for(int num:nums){
            mp[num]++;
        }

        //store
        vector<pair<int,int>>freq;
        for(auto it: mp){
            freq.push_back({it.second,it.first});

        }
        //sort
        sort(freq.begin(),freq.end(),greater<pair<int,int>>());

        vector<int> ans;

        for(int i=0;i<k;i++){

            ans.push_back(freq[i].second);

        }

        return ans;
    }
    
};