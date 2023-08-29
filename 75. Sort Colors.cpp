class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0, white = 0, blue = 0;

        for(int i=0; i < nums.size(); i++){
            if(nums[i] == 0){
                red++;
            }else if(nums[i] == 1){
                white++;
            }else{
                blue++;
            }
        }

        for(int i=0; i< nums.size(); i++){
            while(red){
                nums[i] = 0;
                red--;
                i++;
            }
            while(white){
                nums[i] = 1;
                white--;
                i++;
            }
            while(blue){
                nums[i] = 2;
                blue--;
                i++;
            }
        }
    }
};
