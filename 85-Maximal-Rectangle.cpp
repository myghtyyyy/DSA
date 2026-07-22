class Solution {
public:
    int func(vector<int>& heights) {
        int index=0;
        int ans=0;
        stack<int>st;
        int n=heights.size();
        for(int i =0;i<n;i++){
            while(!st.empty() && heights[i]<heights[st.top()]){
                index=st.top();
                st.pop();
                if(!st.empty())
                ans=max(ans,heights[index]*(i-st.top()-1));
                else{
                     ans=max(ans,heights[index]*i);
                }

            }
            st.push(i);
        }
        while(!st.empty()){
                index=st.top();
                st.pop();
                if(!st.empty())
                ans=max(ans,heights[index]*(n-st.top()-1));
                else{
                     ans=max(ans,heights[index]*n);
                }

            }
            return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int ans=0;
        vector<int>heights(col,0);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]=='0'){
                    heights[j]=0;
                }
                else
                    heights[j]++;
            }
                ans=max(ans,func(heights));
            
        }
        return ans;
    }
};