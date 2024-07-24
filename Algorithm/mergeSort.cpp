void Merge(vector <int> &v, int left, int mid, int right) {
    int l = left,  r = mid + 1;
    vector <int> tmp;

    while (l <= mid and r <= right) {
        if (v[l] <= v[r])  tmp.push_back(v[l++]);
        else tmp.push_back(v[r++]);
    }

    while (l <= mid) tmp.push_back(v[l++]);
    while (r <= right) tmp.push_back(v[r++]);

    for (int i = left; i <= right; i++) {
        v[i] = tmp[i - left];
    }
}

void MergeSort(vector <int> &v, int left, int right) {
    if (left == right) return;

    int mid = (left + right) / 2;

    MergeSort(v, left, mid);
    MergeSort(v, mid + 1, right);

    Merge(v, left, mid, right);
}



// another way

vector <int> mergesort(vector <int> v){
   if(sz(v) == 1) return v;

   int mid = sz(v) / 2;
   vector <int> left, right;

   for(int i = 0; i < mid; i++) left.push_back(v[i]);
   for(int i = mid; i < sz(v); i++) right.push_back(v[i]);

   left  = mergesort(left);
   right = mergesort(right);

   v.clear();
   reverse(all(left)), reverse(all(right));

   while(!left.empty() or !right.empty()){
      if(sz(left) >= 1 and sz(right) >= 1){
         if(left.back() <= right.back()) v.push_back(left.back()), left.pop_back();
         else v.push_back(right.back()), right.pop_back();
      }
      else {
         if(left.empty()) v.push_back(right.back()), right.pop_back();
         else v.push_back(left.back()), left.pop_back();
      }
   }

   return v;
}