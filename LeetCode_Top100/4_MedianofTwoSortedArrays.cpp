class Solution {
public:
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
        if(B.size()<A.size()) 
            return findMedianSortedArrays(B, A);
        int m = A.size();
        int n = B.size();
        int l=0, r=m;
        while(l<=r)
        {
            int mid = (l+r)/2;
            int x = ((m+n)/2)-mid; 
            int a,b,c,d;
            a = (mid<=0)?INT_MIN:A[mid-1];
            b = (x<=0)?INT_MIN:B[x-1];
            c = (mid>=m)?INT_MAX:A[mid];
            d = (x>=n)?INT_MAX:B[x];
            if(b>c)
                l = mid+1;
            else if(a>d)
                r = mid-1;
            else
            {
                if((m+n)%2)
                    return min(c,d)/1.0;
                else
                    return (max(a,b)+min(c,d))/2.0;
            }
        }
        return 0.0;
    }
};
