class Solution {
public:
    void mergeSort(vector<int>& left, vector<int>& right, vector<int>& nums)
    {
        int nL = left.size();
        int nR = right.size();
        int i = 0;
        int j = 0;
        int k = 0;
        while(j < nL && k < nR)
        {
            if(left[j] < right[k])
            {
                nums[i] = left[j];
                ++j;
            }
            else
            {
                nums[i] = right[k];
                ++k;
            }
            ++i;
        }
        while(j < nL)
        {
            nums[i] = left[j];
            ++j;
            ++i;
        }
        while(k < nR)
        {
            nums[i] = right[k];
            ++k;
            ++i;
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        if(nums.size() <= 1)
        {
            return nums;
        }
        
        int mid = nums.size() / 2;
        vector<int> left;
        vector<int> right;
        
        for(int i = 0; i < mid; ++i)
        {
            left.push_back(nums[i]);
        }
        for(int i = 0; i < nums.size() - mid; ++i)
        {
            right.push_back(nums[mid + i]);
        }
        sortArray(left);
        sortArray(right);
        mergeSort(left, right, nums);
        
        return nums;
    }
};
