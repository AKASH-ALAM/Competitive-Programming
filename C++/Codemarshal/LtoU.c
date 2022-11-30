#include <stdio.h>
#include <string.h>

int main()
{
    int tc;
    int current_tc = 0;
    scanf("%d", &tc);
    getchar();
    while (current_tc < tc) {
        int i;
        char name[101];
        int length;
        gets(name);
        length = strlen(name);
        for (i = 0; i  < length; i++) {
            if (name[i] >= 97 && name[i] <= 122) {
                name[i] = 'A' + (name[i] - 'a');
            }
        }
        printf("Case %d: %s\n", current_tc + 1, name);
        current_tc++;
    }
    
    return 0;
}