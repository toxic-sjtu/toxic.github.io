class Solution {
public:
    int integerBreak(int n) {
        if(n == 2) return 1;
        else if(n == 3) return 2;
        else {
            int j = n / 3;
            if(n % 3 == 0) return pow(3, j);
            else if(n % 3 == 1) return pow(3, j - 1) * 4;
            else return pow(3, j) * 2;
        }
    }
};
