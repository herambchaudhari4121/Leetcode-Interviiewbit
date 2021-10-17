class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
    int i=0,minSoFar=prices[0],maxprofit=INT_MIN;
        
        while(i<prices.size()){
                
          minSoFar=min(minSoFar,prices[i]);  
          
            int profit=prices[i]-minSoFar;
            
            maxprofit=max(profit,maxprofit);
            
            
            i++;
        }
         return maxprofit;
}
   
    
};
