class Solution {
public:
    void moveZeroes(vector<int>& nums)
     {
         int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums[j]=nums[i];
                j++;
            }
        }

        for(int a=j;a<nums.size();a++)
        {
            nums[a]=0;
        }
       

        
    }
};