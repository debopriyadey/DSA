class Solution {
public:
    vector<int> twoSum(vector<int>& A, int x) {
        vector<int> ans;
        map<int,int> X;
        for(int i=0;i<A.size();i++)
        {
            if(X.find(x-A[i])!=X.end())
                return {X[x-A[i]],i};
            X[A[i]]=i;
        }
        return {};
    }
};
