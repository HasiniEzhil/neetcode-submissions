class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>pairs;
        for(auto s:strs)
        {
            string temp=s;
            sort(temp.begin(),temp.end());
            pairs[temp].push_back(s);
        }
        for(auto vec:pairs)
        {
            ans.push_back(vec.second);
        }
        return ans;
    }
};
