class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int deleteStr = 0;
        
        for(int i = 0; i < strs[0].size(); ++i)
        {
            for(int j = 0; j < strs.size(); ++j)
            {
                if(j + 1 < strs.size() && strs[j][i] > strs[j + 1][i] )
                {
                    ++deleteStr;
                    break;
                }
            }
        }
        return deleteStr;
    }
};
