void BubbleSort(int *v, int n) {
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n - 1 - i; j++) {
         if (v[j] > v[j + 1]) {
            int tmp = v[j];
            v[j] = v[j + 1];
            v[j + 1] = tmp;
         }
      }
   }
}