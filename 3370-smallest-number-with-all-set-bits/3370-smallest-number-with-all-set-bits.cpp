class Solution {
public:
    int smallestNumber(int n) {
        int bit = log2(n)+1;
        return (1<<bit)-1;
    }
};