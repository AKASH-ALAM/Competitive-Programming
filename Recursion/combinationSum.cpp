
// n <= 50 , tc = O(1)

vector < vector <int> > allCom(int idx, int target, vector <int> &arr, vector <int> &ds, vector < vector <int> > &ans) {
   if (sz(arr) == idx) {
      if (target == 0) ans.push_back(ds);
      return ans;
   }

   if (arr[idx] <= target) {
      ds.push_back(arr[idx]);
      allCom(idx, target - arr[idx], arr, ds, ans);
      ds.pop_back();
   }

   allCom(idx + 1, target, arr, ds, ans);
   return ans;
}
