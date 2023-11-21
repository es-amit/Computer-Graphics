#include <iostream>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    int square[8] = {100, 100, 200, 100, 200, 200, 100, 200};
    setfillstyle(SOLID_FILL, RED);
    fillpoly(4, square);
    int reflected_square[8];
    for (int i = 0; i < 8; i += 2) {
        reflected_square[i] = getmaxx() - square[i];
        reflected_square[i + 1] = square[i + 1];
    }
    setfillstyle(SOLID_FILL, BLUE);
    fillpoly(4, reflected_square);
    delay(5000); 
    closegraph();
    return 0;
}
