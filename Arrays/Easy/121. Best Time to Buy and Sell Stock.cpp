#include<iostream>
#include<vector>
#include <climits>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_ele = INT_MAX;
        int max_profit = 0;

        for (int i = 0; i < prices.size(); ++i) {
            if (prices[i] < min_ele) {
                min_ele = prices[i];
            } else {
                int profit = prices[i] - min_ele;
                if (profit > max_profit) {
                    max_profit = profit;
                }
            }
        }
        return max_profit;
    }
};
