void InsertionSort(vector<int> &v, int n) {
   int j, item;
   for (int i = 1; i < n; i++) {
      item = v[i];
      j = i - 1;
      while (j >= 0 and v[j] > item) {
         v[j + 1] = v[j];
         j = j - 1;
      }
      v[j + 1] = item;
   }
}