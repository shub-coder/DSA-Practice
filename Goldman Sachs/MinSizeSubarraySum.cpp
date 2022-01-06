class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //vector<int>sub(nums.size()+1, 0);
        int min_len = nums.size();
        int j=0, sum=0, s=0;
        for(int i=0; i<nums.size(); i++)
        {
            s +=nums[i];
        }
        if(s<target)
            return 0;
        for(int i=0; i<nums.size(); i++)
        {
            sum += nums[i];
            while(sum>=target)
            {
                sum -= nums[j];
                
                min_len = min(min_len, i-j+1);
                j++;
            }
            
        }
        return min_len;
    }
};