class Solution {
public:
    int myAtoi(string s) {
        long long x = 0;
        bool negative = false;
        int i = 0;
        while(s[i]== ' '){
            i++;
        }
        if(i < s.length()) {
            if ((s[i] == char(45))) {
                negative = true;
                i++;
            }else if(s[i] == char(43)){
                i++;
            }
        }
        while(i < s.length() && s[i] >= char(48) && s[i] <= char(57)){
            if((x > INT_MAX / 10) || ((x == INT_MAX / 10) && (s[i] > char(55)))){
                return negative ? INT_MIN : INT_MAX;
            }
            x = x*10 + s[i] - 48;
            i++;
        }
        return negative ? x * -1 : x * 1;
    }
};
