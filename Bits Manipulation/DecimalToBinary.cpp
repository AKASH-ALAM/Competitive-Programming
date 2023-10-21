string DecimalToBinary(ll num) {
	string str;
	while (num) {
		if (num & 1LL) str += '1';	// 1
		else str += '0';	// 0
		num >>= 1LL; // Right Shift by 1
	}
	reverse(all(str));
	return str;
}
