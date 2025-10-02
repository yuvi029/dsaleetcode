class Solution {
public:
    vector<string> split(string path) {
        vector<string> parts;
        string part = "";

        for (char ch : path) {
            if (ch == '/') {
                if (!part.empty()) {
                    parts.push_back(part);
                    part = "";
                }
            } else {
                part += ch;
            }
        }
        if (!part.empty()) {
            parts.push_back(part);
        }
        return parts;
    }

    string simplifyPath(string path) {
        vector<string> parts = split(path);
        stack<string> st;

        for (string p : parts) {
            if (p == "." || p == "") {
                continue; // skip current directory and empty parts
            } else if (p == "..") {
                if (!st.empty()) st.pop(); // go up one level
            } else {
                st.push(p); // normal directory
            }
        }

        // Build result from stack
        string result = "";
        vector<string> temp;
        while (!st.empty()) {
            temp.push_back(st.top());
            st.pop();
        }
        reverse(temp.begin(), temp.end());

        for (string dir : temp) {
            result += "/" + dir;
        }

        return result.empty() ? "/" : result;
    }
};
