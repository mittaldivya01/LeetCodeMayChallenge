class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int len=coordinates.size();
        if(len==2)
            return true;
        for(int i =0;i<len-2;i++)
        {
            if((coordinates[i+1][0]-coordinates[i][0])*(coordinates[i+2][1]-coordinates[i][1])-(coordinates[i+1][1]-coordinates[i][1])*(coordinates[i+2][0]-coordinates[i][0]) !=0)
                return false;
        }
        return true;
    }
};
