class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int len=trust.size();
        if(N==1 && len==0)
            return 1;
        
        set<int> set1,set2;
        vector<int> total(N+1,0);
       for(int i=0;i<len;i++)
        {
            total[trust[i][1]] -=trust[i][0];
            set1.insert(trust[i][0]);
            set2.insert(trust[i][1]);
        }
        
        int val=((N)*(N+1))/2;
        for(auto itr : set2)
        {
            if(set1.find(itr)==set1.end() && total[itr]== val-itr)
            {
                    return itr;
            }
        }
        return -1;
    }
};
