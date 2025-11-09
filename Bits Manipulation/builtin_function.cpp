
1. __builtin_popcount(x): Counts the number of one’s(set bits) in an integer(long/long long).

    Ex- int x=5;
        cout<<__builtin_popcount(x)<<endl;   //returns 2.
    If x is of long type,we can use __builtin_popcountl(x) If x is of long long type,we can use __builtin_popcountll(x)

2. __builtin_parity(x): Checks the Parity of a number.Returns true(1) if the number has odd parity(odd number of set bits) else it returns false(0) for even parity(even number of set bits).

    Ex- int x=5;
        cout<<__builtin_parity(x)<<endl;   //returns 0.
    If x is of long type,we can use __builtin_parityl(x) If x is of long long type,we can use __builtin_parityll(x)

3. __builtin_clz(x): Counts the leading number of zeros of the integer(long/long long).

    If x is of long type,we can use __builtin_clzl(x) If x is of long long type,we can use __builtin_clzll(x)

    Ex- int x=16;       // 00000000 00000000 00000000 00010000 (32 bits)
          cout<<__builtin_clz(x)<<endl;   //returns 27.

      Ex- long x=16;       // 00000000 00000000 00000000 00010000 (32 bits)
          cout<<__builtin_clzl(x)<<endl;   //returns 27.

      Ex- long long x=16;       // 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00010000 (64 bits)
          cout<<__builtin_clzll(x)<<endl;   //returns 59.
          
4. __builtin_ctz(x): Counts the trailing number of zeros of the integer(long/long long).

    If x is of long type,we can use __builtin_ctzl(x) If x is of long long type,we can use __builtin_ctzll(x)

    Ex- int x=16;       // 00000000 00000000 00000000 00010000 (32 bits)
        cout<<__builtin_ctz(x)<<endl;   //returns 4.

5. __builtin_ffs(x) (Find First Set) which returns (the index of the least significant bits of x) + 1.

6. __lg(x) which returns the index of the highest set bit.

