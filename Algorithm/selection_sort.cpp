void SelectionSort(vector <int> &v) {
   for (int i = 0; i < v.size() - 1; i++) {
      int sm = i;
      for (int j = i + 1; j < v.size(); j++) {
         if (v[j] < v[sm]) sm = j;
      }
      if (sm != i) swap(v[i], v[sm]);
   }
}