class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int c=0, s;
        for(int i=0; i<nums.size(); i++){
            s=0; 
            for(int j=i; j<nums.size(); j++){
                s+=nums[j]; 
                if(s==k) c++;
            }
        }
        return c;
    }
};
