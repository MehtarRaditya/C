#include <stdio.h>

int hitung(int donat){
    const int kelipatan = 6;
    int bonus, total;

    bonus = donat/kelipatan;
    total = donat+bonus;

    printf("Bonus: %d/%d = %d\n", donat, kelipatan, bonus);
    printf("Total: %d + %d = %d", donat, bonus, total);
}

int main() {
    int donat;
    printf("Beli donat: ");
    scanf("%d", &donat);
    hitung(donat);

    return 0;
}
