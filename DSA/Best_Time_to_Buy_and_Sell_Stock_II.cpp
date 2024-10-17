int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int res=0;
        int mini=prices[0];
        for(int i=1;i<n;i++)
        {
              int diff=prices[i]-prices[i-1];
              if(diff>0)
              {
                res+=diff;
              }
        }
        return res;
    }
