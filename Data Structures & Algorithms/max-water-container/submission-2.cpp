class Solution {
public:
    int maxArea(vector<int>& heights) {
        int mw=0;
        int l=0;
        int r=heights.size()-1;

        while(l<r){
                int w=r-l;

                int h=min(heights[l],heights[r]);

                int area=w*h;

                mw=max(area,mw);

          
                heights[l]< heights[r]? l++:r--;

        }

        



            
        
        return mw;
        
    }
};
