class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        int len= points.size();
        if(k==len)
            return points;
        vector<vector<int>> res,tmp;
        vector<int> tmp2;
        for(int i=0;i<len;i++)
        {
            tmp2={points[i][0]*points[i][0] + points[i][1]*points[i][1],i};
            tmp.push_back(tmp2);
        }
        sort(tmp.begin(),tmp.end());
        for(auto i: tmp)
        {
            if(k==0)
                break;
            k--;
            res.push_back(points[i[1]]);
        }
        return res;
    }
};
