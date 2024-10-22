
vector<int> data{1, 2, 3, 4, 5, 6, 7};

// std::prev requires bidirectional iterator
auto it1 = prev(data.end());
// *it1 == 7

// distance can be customized
auto it2 = next(data.begin(), 3);
// *it2 == 4

list<int> lst{1, 2, 3, 4, 5, 6, 7};

// for non-random-access iterators the operation is linear
auto it3 = prev(lst.end(), 4);
// *it3 == 4