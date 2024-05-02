class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(auto it : nums) {
            mpp[it]++;
        }
        int maxi = -1;
        for(auto it : mpp) {
            auto neg = -(it.first);
            if(mpp.find(neg) != mpp.end()) {
                maxi = max(maxi, it.first);
            }
        }
        return maxi;
    }
};
