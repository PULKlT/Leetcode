class Solution {
public:
    int old;
    // vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    //     if(image[sr][sc]==color)    return image;
    //     old=image[sr][sc];
    //     if(image[sr][sc]==old)    image[sr][sc]=color;
            // if(sr<0 || sr>=image.size() || sc<0 || sc>= image[0].size())
            //     return image;
    //     floodFill(image, sr+1,sc,color);
    //     floodFill(image, sr-1,sc,color);
    //     floodFill(image, sr,sc+1,color);
    //     floodFill(image, sr,sc-1,color);
    //     return image;
    // }
    
    
    void fill(vector<vector<int>>& image, int sr, int sc, int color, int cur) {
        if(sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size()) 
            return;
        // If image[sr][sc] is not equal to previous color...
        if(cur != image[sr][sc]) return;
        image[sr][sc] = color;
        fill(image, sr-1, sc, color, cur);
        fill(image, sr+1, sc, color, cur);
        fill(image, sr, sc-1, color, cur);
        fill(image, sr, sc+1, color, cur);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color) return image;        
        fill(image, sr, sc, color, image[sr][sc]);
        return image;
    }
};