class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();
        
        if((m == 0 && n == 0) || (m == 1 && n == 1))
        {
            return 0;
        }
        for(int i = 0; i < m - n; ++i)
        {
            int j = 0;
            while(j < n && haystack[i + j] == needle[j])
            {
                ++j;
            }
            if(j == n)
            {
                return i;
            }
            
        }
        return -1;
    }
};
