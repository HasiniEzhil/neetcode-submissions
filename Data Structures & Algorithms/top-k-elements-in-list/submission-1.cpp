class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        vector<int>ans;
        for(int num:nums)
        {
            freq[num]++;
        }
        int l=0;
        vector<pair<int,int>>vec(freq.begin(),freq.end());
        sort(vec.begin(),vec.end(),[](auto a,auto b){ return a.second>b.second;});
        for(auto x:vec)
        {
            ans.push_back(x.first);
            l++;
            if(l==k)
                break;
        }
        return ans;
    }
};
