class Solution {
public:
    void generate(vector<string>& ans, string& st, int n, int count) {
        if (count == n) {
            ans.push_back(st);
            return;
        }
        st.push_back('1');
        generate(ans, st, n, count + 1);
        st.pop_back();
        if (st.empty() || st.back() == '1') {
            st.push_back('0');
            generate(ans, st, n, count + 1);
            st.pop_back();
        }
    }

    vector<string> validStrings(int n) {
        vector<string> ans;
        string st;

        generate(ans, st, n, 0);

        return ans;
    }
};