class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
     sort(begin(arr), end(arr), [](auto &a, auto &b) {
            int aa = __builtin_popcount(a);
            int bb = __builtin_popcount(b);
            return aa < bb || ((aa == bb) && (a < b));
        });
        return arr;
    }

};
