class Solution {
public:
    void addRange(vector<string> &results, int lo, int hi){
        if(lo == hi){
            std::string str = std::to_string(lo);
            results.push_back(str);
        }else{
            std::string str1 = std::to_string(lo);
            std::string str2 = std::to_string(hi);
            results.push_back(str1+"->"+str2);
        }
    }

    vector<string> summaryRanges(vector<int>& nums) {
        int lo, hi;
        vector<string> results;

        for(int i=0; i < nums.size(); i++){
            if(i==0){
                lo = nums[i];
                hi = nums[i];
            } else{
                if(nums[i] == hi){
                    continue;
                } else{
                    if(nums[i] == hi+1){
                        hi = hi + 1;
                    }else{
                        addRange(results, lo, hi);
                        lo = nums[i];
                        hi = nums[i];
                    }
                }
            }
        }

        if(nums.size() > 0)
            addRange(results, lo, hi);
        
        return results;

    }
};
