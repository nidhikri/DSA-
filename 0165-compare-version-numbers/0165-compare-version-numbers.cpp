class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int>v1;
        vector<int>v2;
        string num;
        stringstream ss(version1);
        stringstream ss2(version2);
        while(getline(ss,num,'.')){
            v1.push_back(stoi(num));

        }
        while(getline(ss2,num,'.')){
            v2.push_back(stoi(num));
        }
        int n=v1.size();
        int m=v2.size();
        int l = max(n,m);
        for(int i=0;i<l;i++){
            int x = (i<n)?v1[i]:0;
            int y= (i<m)? v2[i]:0;
            if(x<y)return -1;
            if (x>y) return 1;

        }
        return 0;

        
    }
};