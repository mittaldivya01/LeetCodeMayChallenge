/*You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.
The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".
Input: J = "aA", S = "aAAbbbb"
Output: 3*/

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<int> s1;
        int l = J.length();
        for(int i=0;i<l;i++)
        {
            s1.insert(J[i]);
        }
        
        int res=0;
        l=S.length();
        for(int i=0;i<l;i++)
        {
            if(s1.find(S[i]) != s1.end())
                ++res;
        }
        return res;
    }
};
