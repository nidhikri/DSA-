class Solution {
public:
    int solve(vector<int>& values,int i,int j,vector<vector<int>>& dp){
        int result=INT_MAX;
        if (dp[i][j] != -1) return dp[i][j];
        if(j-i+1<3)return 0;
        for(int k=i+1;k<j;k++){
            int wt=(values[i]*values[k]*values[j])+ solve(values,i,k,dp)+solve(values,k,j,dp);
            result = min(result, wt);
        }
        return dp[i][j] = result;
    }
    int minScoreTriangulation(vector<int>& values) {
        int n = values.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return solve(values,0,n-1,dp);

    }
};