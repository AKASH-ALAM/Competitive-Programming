int subset_mask = 27;

for(int submask = subset_mask; submask > 0; submask = (submask - 1) & subset_mask){
   for(int i = 0; i < 5; i++){
      if(submask & (1 << i)) cout << '1';
      else cout << '0';
   }
   cout << endl;
}