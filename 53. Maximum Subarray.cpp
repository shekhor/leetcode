class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = -100000, rslt = -100000;
        
        for(int i=0; i<nums.size(); i++){
            if(sum + nums[i] > nums[i]){
                sum = sum + nums[i];
            } else{
                sum = nums[i];
            }

            rslt = max(rslt, sum);
        }
        return rslt;
    }
};
