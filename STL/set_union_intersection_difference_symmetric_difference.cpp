
void solve() {
   set <int> s1 = {0, 1, 2, 3, 4, 5};
   set <int> s2 = {4, 5, 6, 7, 8, 9};
   set <int> s3, s4, s5, s6;

   set_union(all(s1), all(s2), inserter(s3, s3.end()));
   set_intersection(all(s1), all(s2), inserter(s4, s4.end()));
   set_difference(all(s1), all(s2), inserter(s5, s5.end()));
   set_symmetric_difference(all(s1), all(s2), inserter(s6, s6.end()));

   cout << "set_union" << endl;
   for (auto it : s3) cout << it << " ";
   cout << endl;

   cout << "set_intersection" << endl;
   for (auto it : s4) cout << it << " ";
   cout << endl;

   cout << "set_difference" << endl;
   for (auto it : s5) cout << it << " ";
   cout << endl;

   cout << "set_symmetric_difference" << endl;
   for (auto it : s6) cout << it << " ";
   cout << endl;
}