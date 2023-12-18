class Solution {
public:
    bool static compNum(int &num1, int &num2){
        string str1 = to_string(num1);
        string str2 = to_string(num2);

        if(str1 + str2 > str2 + str1){
            return true;
        } else{
            return false;
        }
    }
    string largestNumber(vector<int>& nums) {
        string result = "";

        sort(nums.begin(), nums.end(), compNum);

        for(int i=0; i<nums.size(); i++){
            string str = to_string(nums[i]);
            result += str;
        }
        if(result[0] == '0')return "0";
        return result;
    }
};
