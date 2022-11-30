#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[] = "98 876 65";
    //scanf("%[^\n]", s);
    int count = 0;
    int ok;
    while(sscanf(s,"%d", &ok)!= EOF)
    {
        count++;
    }
    cout<<count<<endl;
}
