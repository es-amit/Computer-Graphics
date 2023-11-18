#include <graphics.h>
#include <iostream>

void BresenhamCircle(int xc, int yc, int radius, int delay_time) {
    int x = 0;
    int y = radius;
    int d = 3 - 2 * radius;

    char buffer[50];
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);

    while (x <= y) {
        putpixel(xc + x, yc - y, WHITE);

        putpixel(xc - x, yc - y, WHITE);

        putpixel(xc + x, yc + y, WHITE);

        putpixel(xc - x, yc + y, WHITE);

        putpixel(xc + y, yc - x, WHITE);

        putpixel(xc - y, yc - x, WHITE);

        putpixel(xc + y, yc + x, WHITE);

        putpixel(xc - y, yc + x, WHITE);

        if (d < 0)
            d = d + 4 * x + 6;
        else {
            d = d + 4 * (x - y) + 10;
            y--;
        }

        x++;

        delay(delay_time);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    BresenhamCircle(350, 200, 150, 10);

    getch();
    closegraph();
    return 0;
}