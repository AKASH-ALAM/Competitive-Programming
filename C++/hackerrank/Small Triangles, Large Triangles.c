#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
double volume(int a, int b, int c){
    double p = (double)(a + b + c) / 2;
    double s = (double)sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}
void sort_by_area(triangle* tr, int n) {
	for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            double a = volume(tr[j].a, tr[j].b, tr[j].c);
            double b = volume(tr[j+1].a, tr[j+1].b, tr[j+1].c);
            if(a > b) {
                int tmpA, tmpB, tmpC;
                tmpA = tr[j].a;
                tr[j].a = tr[j+1].a;
                tr[j+1].a = tmpA;

                tmpB = tr[j].b;
                tr[j].b = tr[j+1].b;
                tr[j+1].b = tmpB;

                tmpC = tr[j].c;
                tr[j].c = tr[j+1].c;
                tr[j+1].c = tmpC;
            }
        }
    }
}

int main(){
	int n;
	scanf("%d", &n);
	triangle *tr = (triangle*) malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}