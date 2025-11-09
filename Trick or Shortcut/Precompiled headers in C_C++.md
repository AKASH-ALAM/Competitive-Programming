gcc --version (for ubuntu)
sudo g++ -std=gnu++17 -O2 -DLOCAL -Wall /usr/include/x86_64-linux-gnu/c++/11(this version maybe vary)/bits/stdc++.h
cd /usr/include/x86_64-linux-gnu/c++/11/bits/ (stdc++.h.gch) // if you found that then the work is done.


(for fedora)
sudo g++ -std=gnu++17 -O2 -DLOCAL -Wall /usr/include/c++/13/x86_64-redhat-linux/bits/stdc++.h

(for mac)
/opt/homebrew/Cellar/gcc/15.1.0/include/c++/15/bits g++-15 -std=gnu++23 -O2 -DLOCAL -Wall stdc++.h

This blog is about speeding up C/C++ compilers with precompiled headers.

Including lots of headers or big headers like bits/stdc++.h will increase compilation time. This can be annoying even with high speed processors. We can solve this using precompiled headers.

What are precompiled headers?
You can compile a header like stdc++.h to stdc++.h.gch and compiler will use it instead of compiling the header every time you are compiling your code. Less processing => Less time.

How to use precompiled headers?
Find your g++ default include directory

Ubuntu: /usr/include/x86_64-linux-gnu/c++/{version}
Windows: C:\MinGW\lib\gcc\mingw32\{version}\include\c++
Compile headers you need (I recommend using bits/stdc++.h instead of including lots of headers).

g++ {header name} {flags you use when compiling a normal code}

Put .gch files in the right place. You have 2 Options:

Put them in the directory you find the headers & use #include <header name>
Put them in your code directory & use #include "header name"
I recommend first options because the second one will work only when .gch files are in the code directory and it takes a little extra time to search in code.

Compile a code and feel the difference!

