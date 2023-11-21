#include <iostream>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    int square[8] = {100, 100, 200, 100, 200, 200, 100, 200};
    setfillstyle(SOLID_FILL, RED);
    fillpoly(4, square);
    float shear_factor = 0.5;
    int sheared_square[8];
    for (int i = 0; i < 8; i += 2) {
        sheared_square[i] = square[i] + shear_factor * square[i + 1];
        sheared_square[i + 1] = square[i + 1];
    }
    setfillstyle(SOLID_FILL, BLUE);
    fillpoly(4, sheared_square);

    delay(5000);
    closegraph();
    return 0;
}
