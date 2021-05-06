class Solution {
public:
    bool check(vector<int>& nums) {
        int minELement = INT_MIN;
        int maxElement = nums[0];
        int i = 1;        
            
    for(; i < nums.size(); ++i)
    {
        if(nums[i] < nums[i - 1])
        {
            break;
        }
    }
        for(;i < nums.size();++i)
        {
            if(nums[i] > maxElement || nums[i] < minELement)
            {
                return false;
            }
            else 
            {
                minELement = nums[i];
            }
        }
        return true;
    }
};
