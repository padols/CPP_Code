stack<string> st;
    string s = "";
    for (int i = 0; i < str.length(); i++) {

        if (str[i] != '.') {
            s += str[i];
        }

        // If we see a dot, we push the
        // previously seen word into the stack.
        else if (!s.empty()) {
            st.push(s);
            s = "";
        }
    }

    // Last word remaining, add it to stack
    if (!s.empty()) {
        st.push(s);
    }

    s = "";
    // Now add from top to bottom of the stack
    while (!st.empty()) {
        s += st.top();
        st.pop();
        if (!st.empty()) {
            s += ".";
        }
    }
    return s;
