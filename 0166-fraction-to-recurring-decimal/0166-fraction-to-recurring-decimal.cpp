class Solution {
public:
    string fractionToDecimal(int num, int den) {
        string res ="";
        if(num==0) return "0";
        if((num<0)^(den<0)) res+="-";
        long long numerator = llabs((long long)num);
        long long denominator = llabs((long long)den);
        long long rem = numerator%denominator;
        res+=to_string(numerator/denominator);
        unordered_map<long long,int> seen;
        if(rem==0) return res;
        res+=".";
        string fraction;
        while(rem!=0){
            if(seen.count(rem)){
                fraction.insert(seen[rem],"(");
                fraction+=")";
                res+=fraction;
                return res;
            }
            seen[rem]=fraction.size();
            rem*=10;
            fraction+=to_string(rem/denominator);
            rem%=denominator;
        }
        res+=fraction;
        return res;
        
    }
};
