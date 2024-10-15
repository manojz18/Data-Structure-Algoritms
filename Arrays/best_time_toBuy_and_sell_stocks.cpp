#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int leastPrice_so_far = INT32_MAX;
    int overall_profit = 0;
    int profit_if_sold_today = 0;
    for(int i = 0; i < prices.size(); i++){
        if(prices[i] < leastPrice_so_far){
            leastPrice_so_far = prices[i];
        }
        profit_if_sold_today = prices[i] - leastPrice_so_far;
        if(overall_profit < profit_if_sold_today){
            overall_profit = profit_if_sold_today;
        }
    }
    return overall_profit;
}


int main(){

    vector <int> arr = {4, 8, 7, 1, 6, 9};
    cout << maxProfit(arr);
    
    return 0;
}