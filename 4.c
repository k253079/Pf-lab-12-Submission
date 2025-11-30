#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, extra, i;
    float *sales, total = 0;

    scanf("%d", &n);
    sales = (float*)malloc(n * sizeof(float));

    for (i = 0; i < n; i++) {
        scanf("%f", &sales[i]);
        total += sales[i];
    }

    printf("Total sales = %.2f\n", total);

    scanf("%d", &extra);
    sales = (float*)realloc(sales, (n + extra) * sizeof(float));

    total = 0;
    for (i = n; i < n + extra; i++) {
        scanf("%f", &sales[i]);
    }

    for (i = 0; i < n + extra; i++) {
        total += sales[i];
    }

    printf("New total sales = %.2f\n", total);

    free(sales);
    return 0;
}
