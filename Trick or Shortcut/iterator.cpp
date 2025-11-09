set <pair<int, int>> st;

int first = st.begin()->first;
int last = st.rbegin()->first;

st.erase(st.begin());