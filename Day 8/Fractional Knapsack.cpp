double fractionalKnapsack(int W, Item arr[], int n)
    {
        vector<pair<double,pair<int,int>>>vec(n);
        for(int i = 0 ; i < n ; i++)
        {
            vec[i].first = (double)arr[i].value/arr[i].weight;
            vec[i].second.first = arr[i].value;
            vec[i].second.second = arr[i].weight;
        }
        
        sort(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end());
        
        
        int curr_cap = W ;
        double res = 0.0;
        
        for(int i = 0 ; i < n ; i++)
        {
            if(vec[i].second.second <= curr_cap)
            {
                curr_cap -= vec[i].second.second;
                res += vec[i].second.first;
            }
            else
            {
               
                res += (vec[i].second.first)*(double)curr_cap/vec[i].second.second;
                break;
            }
        }
        return res;
    }
