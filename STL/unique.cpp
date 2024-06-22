vector<int> v = { 1, 1, 3, 3, 3, 10, 1, 3, 3, 7, 7, 8 };
auto it = unique(v.begin(), v.begin() + 12);
v.resize(distance(v.begin(), it));

//or

v.erase(unique(all(v)), v.end()); // remove duplicate 

bool Pred(char a, char b){
	if (a == b && a == 'G') return 1;
	else return 0;
}

int main(){
	string s = "You arre vvvisiting GGGGFGGGG";
	auto it = unique(s.begin(), s.end(), Pred);

	// Displaying the corrected string
	cout << string(s.begin(), it);
	return 0;
}
