class Solution {
public:
    
    int Partition(vector<int>& arr, int low, int high)
    {
	    int pivot = arr[low];
    	int i = low;
    	int j = high;
	    while(i < j)
	    {	
		    do
		    {
			    ++i;
		    }
		while(arr[i] <= pivot);
		do
		{
			--j;
		}
		while(arr[j] > pivot);
		if(i < j)
		{
			std::swap(arr[i], arr[j]);
		}
	}
	std::swap(arr[low], arr[j]);
	return j; 
}

void quickSort(vector<int>& arr, int low, int high)
{
	if(low < high)
	{
		int j = Partition(arr, low, high);
		quickSort(arr, low, j);
		quickSort(arr, j + 1, high);
	}
}

    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0; i < nums.size(); ++i)
        {
            nums[i] *= nums[i];
        }
        int low = 0;
        int high = nums.size();
        quickSort(nums, low, high);
        
        return nums;
    }
};
