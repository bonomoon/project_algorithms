#include <cstdio>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {

    int x, y;
    scanf("%d %d", &x, &y);

    swap(&x, &y);
    printf("%d %d\n", x, y);

    return 0;
}
