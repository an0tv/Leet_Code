
#include <set>
#include <string>
#include <iostream>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //sets only allow you to store a single element of each type
        set<char> v;
        int max_Size = 0;
        //go through each charatcers
        for(int i=0;i<s.length();++i)
        {
            int j=i;
            //add characters until you hit a duplicate char
            while(v.size()==j-i && j<s.length())
            {
                v.insert(s[j]);
                j++;
            }
            //get the size of the set and compare it to the maxs
            int a=v.size();
            max_Size=max(max_Size,a);
            //reset the set
            v.clear();

        }
        return max_Size;
    }
};
int main(){
    string str = "abcabcbb";
    Solution* solution = new Solution();
    cout << solution->lengthOfLongestSubstring(str) << endl;;
};
