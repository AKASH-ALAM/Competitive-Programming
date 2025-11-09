void allPermutation(int idx, vector <int> &arr, vector < vector <int> > &ans){
   if(idx == arr.size()){
      ans.push_back(arr);
      return;
   } // TC : O(n! * n), SC : O(1)

   for(int i = idx; i < arr.size(); i++){
      swap(arr[idx], arr[i]);
      allPermutation(idx + 1, arr, ans);
      swap(arr[idx], arr[i]); // for backtrack
   }

}