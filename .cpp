class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        int i=0,j=0,n=A.size(),m=B.size();
        vector<vector<int>> res;
        while(i<n && j<m)
        {
            int s=max(A[i][0],B[j][0]);
            int e=min(A[i][1],B[j][1]);
            if(s<=e)
            {
                res.push_back({s,e});
            }
            if(e==B[j][1])
            {
                j++;
            }
            if(e==A[i][1])
            {
                i++;
            }
        }
        return res;
    }
};
