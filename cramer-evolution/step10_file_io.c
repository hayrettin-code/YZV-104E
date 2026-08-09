#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *input = fopen(argv[1], "r");
    FILE *output = fopen(argv[2], "w");

    int a1, b1, c1, a2, b2, c2;
    int i = 1;

    while (fscanf(input, "%d %d %d %d %d %d", &a1, &b1, &c1, &a2, &b2, &c2) == 6) {     
        char sign1 = (b1 < 0) ? '-' : '+';
        char sign2 = (b2 < 0) ? '-' : '+';
        fprintf(output, "Line%d, EQUATION1: %3dx %c %2dy = %3d\n", i, a1, sign1, abs(b1), c1);
        fprintf(output, "Line%d, EQUATION2: %3dx %c %2dy = %3d\n", i, a2, sign2, abs(b2), c2);
        if (((a1 * b2) - (b1 * a2)) == 0) {
            fprintf(output, "Line%d, NO SOLUTION: (%d * %d) - (%d * %d) is zero!\n", i, a1, b2, b1, a2);
        } else {
            float x = (float)(c1 * b2 - b1 * c2) / ((a1 * b2) - (b1 * a2));
            float y = (float)(a1 * c2 - c1 * a2) / ((a1 * b2) - (b1 * a2));
            fprintf(output, "Line%d, SOLUTION: x = %.1f and y = %.1f\n", i, x, y);
        }
        fprintf(output, "\n");
        i++;
    }
    fclose(input);
    fclose(output);

    return 0;
}