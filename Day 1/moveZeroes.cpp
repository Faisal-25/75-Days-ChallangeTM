class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        int l = nums.size() - 1;
      for(int i = 0;i<nums.size();i++){
        if(nums[i]!=0){
          nums[j] = nums[i];
         
          j++;
          
        }
      }
      for(int i  = j;j<nums.size();j++){
        nums[j] = 0;
      }
      
    }
};