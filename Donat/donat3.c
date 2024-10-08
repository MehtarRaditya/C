#include <stdio.h>

int bonusFunc(int donat, int kelipatan);
int totalFunc(int donat, int bonus);

int main(void) {
    int donat;
    const int kelipatan = 6;
    printf("Beli donat: ");
    scanf("%d", &donat);

    int bonus = bonusFunc(donat, kelipatan);
    int total = totalFunc(donat, bonus);

    printf("Bonus: %d/%d = %d\n", donat, kelipatan, bonus);
    printf("Total: %d + %d = %d", donat, bonus, total);

    return 0;
}

int bonusFunc(int donat, int kelipatan){
    int bonus = donat/kelipatan;

    return bonus;
}

int totalFunc(int donat, int bonus){
    int total = donat+bonus;

    return total;
}