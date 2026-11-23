class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> st;
        for (string x : tokens) {
            if (x == "+" || x == "-" || x == "*" || x == "/") {
                int op2 = st.top();
                st.pop();
                int op1 = st.top();
                st.pop();
                int result;

                if (x == "+")
                    result = op1 + op2;
                else if (x == "-")
                    result = op1 - op2;
                else if (x == "*")
                    result = op1 * op2;
                else
                    result = op1 / op2;

                st.push(result);

            } else {
                st.push(stoi(x));
            }
        }
        return st.top();
    }
};