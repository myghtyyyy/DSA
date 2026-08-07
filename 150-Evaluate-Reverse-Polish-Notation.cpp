class Solution {
public:
    int evalRPN(vector<string>& token) {
        stack<int> num;

        for (int i = 0; i < token.size(); i++) {

            if (token[i] != "+" && token[i] != "-" &&
                token[i] != "*" && token[i] != "/") {

                num.push(stoi(token[i]));
            }
            else {
                int a = num.top();
                num.pop();

                int b = num.top();
                num.pop();

                if (token[i] == "+") {
                    num.push(b + a);
                }
                else if (token[i] == "-") {
                    num.push(b - a);
                }
                else if (token[i] == "*") {
                    num.push(b * a);
                }
                else {
                    num.push(b / a);
                }
            }
        }

        return num.top();
    }
};