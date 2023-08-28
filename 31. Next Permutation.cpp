class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int tmp, i, flag=0, j, ind;

        for(i=nums.size()-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                ind = i;
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            i = 0, j = nums.size()-1;

            while(i <= j){
                tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
                i++;
                j--;
            }
        }else{
            for(i = nums.size()-1; i > ind; i--){
                if(nums[i] > nums[ind]){
                    tmp = nums[i];
                    nums[i] = nums[ind];
                    nums[ind] = tmp;
                    break;
                }
            }
            i = ind + 1;
            j = nums.size() - 1;

            while(i <= j){
                tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;

                i++;
                j--;
            }
        }
    }

    
};
