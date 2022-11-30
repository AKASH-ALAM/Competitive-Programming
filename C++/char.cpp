#include <iostream> 
#include <string>
using namespace std;
int main()
{
    string s;
    char c;

    while(c != '\n'){
        scanf("%c", &c);
        s += c;
    }
    cout << s << endl;
    return 0;
}