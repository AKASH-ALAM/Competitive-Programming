//It seems that sometimes unordered_map becames so slow.but it can improve with this two lines of code:

unordered_map<int, int>mp;
mp.reserve(1024); //(1 << n)
mp.max_load_factor(0.25);

//With this two lines unordered_map become about 10 times faster. You can replace 1024 with another suitable power of two.(it depends on number of insert s you will do).