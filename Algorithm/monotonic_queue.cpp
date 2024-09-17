//maximum and minimum value for kth window 

void solve() {
   int n, k;

   cin >> n >> k;
   vector <int> v(n);
   for(auto &it : v) cin >> it;

   deque <int> d;
   vector <int> ans;

   for(int i = 0; i < k; i++){
      while(!d.empty() and v[d.back()] > v[i]) d.pop_back();
      d.push_back(i);
   }
   ans.push_back(v[d.front()]);

   for(int i = k; i < n; i++){
      if(d.front() == i-k) d.pop_front();

      while(!d.empty() and v[d.back()] > v[i]) d.pop_back();

      d.push_back(i);
      ans.push_back(v[d.front()]);
   }

   for(auto it : ans) cout << it << ' ';
   cout << endl;
}