nt bestTimeToBuyAndSellStock(vector<int>&prices) {

    int minPrice = INT_MAX;
    int maxi = 0;
    for(int i=0;i<prices.size();i++){

        minPrice = min(minPrice,prices[i]);

        maxi = max(maxi,prices[i]-minPrice);

    }return maxi;

}
