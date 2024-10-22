	
	tuple <int, double, char> t;

	t = make_tuple(1, 2.3, 'a'); // initialize 

	cout << get<0>(t) << ' ' << get<1>(t) << ' ' << get<2>(t) << endl; // access

	auto [a, b, c] = t; // C++17 or above, (use structured binding)
	cout << a << ' ' << b << ' ' << c << endl;


	tuple <pair<int, int>, char, double> t2;
	t2 = make_tuple(make_pair(2, 3), 'a', 2.1);
	auto [x, y, z] = t2;

	cout << x.first << ' ' << x.second << ' ' << y << ' ' << z << endl;

	cout << endl << endl;

	vector <tuple <int, int, int>> v;
	v.push_back(make_tuple(1, 2, 3));
	v.push_back(make_tuple(3, 2, 1));

	for(int i = 0; i < sz(v); i++){
		auto [a, b, c] = v[i];
		cout << a << ' ' << b << ' ' << c << endl;
	}

	// or another way to store

   v.push_back({1, 2, 3});
   v.push_back({3, 2, 1});
   
   for(auto [a, b, c] : v) cout << a << ' ' << b << ' ' << c << endl;

//DP
map <tuple<int, double, int, int>, double> dp;

double call(int pos, double mul, int head, int tail){
   if(pos == n) {
      if(head > tail) return mul;
      return 0.0;
   }
   if(dp.count({pos, mul, head, tail})) return dp[{pos, mul, head, tail}];
   return dp[{pos, mul, head, tail}] = call(pos + 1, mul * arr[pos], head + 1, tail) + call(pos + 1, mul * (1 - arr[pos]), head, tail + 1);
}

map <tuple<int, int, int>, int> mp;
void store(){
   mp[{0, 0, 0}] = 0;
   mp[{0, 0, 1}] = 1;
   mp[{0, 1, 0}] = 0;
   mp[{0, 1, 1}] = -1;
   mp[{1, 0, 0}] = -1;
   mp[{1, 0, 1}] = 0;
   mp[{1, 1, 0}] = 1;
   mp[{1, 1, 1}] = 0;
}