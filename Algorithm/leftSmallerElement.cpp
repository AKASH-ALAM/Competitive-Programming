
void solve() {
   int n;  cin >> n;
   int a[n], ans[n];  for (int i = 0; i < n; i++) cin >> a[i];
   stack <int> st;

   for (int i = 0; i < n; i++) { // left to right
      while (!st.empty() and a[i] <= a[st.top() - 1]) st.pop();
      if (st.empty()) ans[i] = 0;
      else ans[i] = st.top();
      st.push(i + 1); // Push 1-based index
   }

   for (int i = 0; i < n; i++) cout << ans[i] << " \n"[i == n - 1];
}