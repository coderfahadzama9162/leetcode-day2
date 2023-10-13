#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

int find(int index,vector<int>&cost,vector<int>&dp){

    

if(index>=cost.size()) return 0;

if(index==cost.size()-1) return cost[cost.size()-1];


if(dp[index]!=-1) return dp[index];


return dp[index]= min(cost[index]+find(index+1,cost,dp),cost[index]+find(index+2,cost,dp));



}

    int minCostClimbingStairs(vector<int>& cost) {

        vector<int>dp(cost.size(),-1);
        return min(find(0,cost,dp),find(1,cost,dp));
    }
};

int main(){

    int n;
    cin >> n;
    vector<int> cost;
    for (int i = 0; i < n;i++){

        int data;
        cin >> cost[i];
        }

        Solution *s = new Solution();
        cout << s->minCostClimbingStairs(cost) << endl;
}