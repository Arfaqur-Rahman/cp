class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> um;
        
        for(int i=0; i<nums.size(); i++){ 
            if(um.count(nums[i]) && i-um[nums[i]]<=k) return true;
             um[nums[i]]=i;
        }
        return false;
    }
};
