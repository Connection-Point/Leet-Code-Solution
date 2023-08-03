class solution{
    public:
        int maximumWealth(vector<vector<int>>& accounts) 
        {
            int i,j,
            m = accounts.size(),
            n = accounts[0].size(),
            MaxWealth = 0, 

            for(i=0; i<m; i++;)
            {
                int Wealth = 0;
                for(j=0;j<n;j++)
                {
                    Wealth += accounts[i][j];
                }
                if(Wealth > MaxWealth)
                {
                    MaxWealth = Wealth;
                }
            }

            return MaxWealth;
        }
};