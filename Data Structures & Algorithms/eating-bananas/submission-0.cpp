class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

    int low = 1;
    int high = *max_element(piles.begin(), piles.end());
   
    int ans=high;
    

    while(low<=high){
        int mid = (low + high) / 2;
        int time =0;
        for(auto pile:piles)
        
         time +=ceil((double)pile/mid);

        if(time<=h){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
            
        

    }
    return ans;
    

        
    }
};
