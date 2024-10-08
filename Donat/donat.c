#include <stdio.h>

int main() {
    int donat, bonus, total;
    const int kelipatan = 6;

    printf("Beli donat: ");
    scanf("%d", &donat);

    bonus = donat/kelipatan;
    total = donat+bonus;
    printf("Bonus: %d/%d = %d\n", donat, kelipatan, bonus);
    printf("Total: %d + %d = %d", donat, bonus, total);

    return 0;
}
