class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        vector<int>ans;
        ans.push_back(count);
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                count++;
            }
            else if(s[i]==')'){
                ans.push_back(count);
                count--;
            }
        }
        int maxi = ans[0];

        for (int i = 1; i < ans.size(); i++) {
        if (ans[i] > maxi) {
        maxi = ans[i];
    }
}
    return maxi;
    }
};