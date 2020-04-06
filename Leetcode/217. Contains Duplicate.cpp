class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> us;
        for(int x: nums){
            if(us.count(x)==1) return true;
            else us.insert(x);
        }
        return false;
    }
};
