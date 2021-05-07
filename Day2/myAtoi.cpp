class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        int result = 0;
        int i = 0;
        int size = s.size();
        while(i < size && s[i] == ' ')
        {
             ++i;
        }
      
        if(s[i] == '-' || s[i] == '+')
        {
            sign = 1 - 2*(s[i++] =='-');
        }
        while(s[i] >= '0' && s[i] <='9')
        {
            if(result > INT_MAX/10 || result == INT_MAX/10 && s[i]- '0' > INT_MAX %10)
            {
                if(1 == sign){return INT_MAX;}
                return INT_MIN;
            }
            result = (result * 10) + (s[i++] - '0');
         }
         return result * sign;
   }
    
};

