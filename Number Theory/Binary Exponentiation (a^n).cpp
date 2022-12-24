// recursive implementation
ll binpow(ll a, ll n) {
	if (n == 0)
		return 1;
	ll res = binpow(a, n / 2);
	if (n % 2)
		return res * res * a;
	else
		return res * res;
}

/*iterative implementation:
Although the complexity of both approaches is identical,
this approach will be faster in practice
since we don't have the overhead of the recursive calls.*/

ll binpow(ll a, ll n) {
	ll res = 1;
	while (n > 0) {
		if (n & 1)
			res = res * a;
		a = a * a;
		b >>= 1;
	}
	return res;
}
//O(log n)