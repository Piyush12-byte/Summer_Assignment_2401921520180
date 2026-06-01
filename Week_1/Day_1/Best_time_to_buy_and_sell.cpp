class Solution {
public:
    int maxProfit(vector<int>& prices) {
      
      int n=prices.size();
      if(n==0) return 0;
      int minprice=prices[0];
      int maxprofit=0;
      int i=0;


      while(i<n){
        int profit=prices[i]-minprice;

        if(profit>maxprofit)
          maxprofit=profit;

        if(prices[i]<minprice)
          minprice=prices[i];
        i++;    
      }
      return maxprofit; 
    }           
};
