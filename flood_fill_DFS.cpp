class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
       
        int color = image[sr][sc];
        if (color != newColor) dfs(image, sr, sc, color, newColor);
        return image;
    }
     void dfs(vector<vector<int>>& image, int row, int col, int color, int newColor) {
        if (image[row][col] == color) 
        {
            image[row][col] = newColor;
            //consecutively check for four neighbours of row,col for valid color
            if (row >= 1) dfs(image, row-1, col, color, newColor);
            if (col >= 1) dfs(image, row, col-1, color, newColor);
            if (row+1 < image.size()) dfs(image, row+1, col, color, newColor);
            if (col+1 < image[0].size()) dfs(image, row, col+1, color, newColor);
        }
    }
};
