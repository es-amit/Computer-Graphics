#include <graphics.h>
#include <stdio.h>
#include <string>
#include <iostream>

void MidpointCircle(int xc, int yc, int radius, int delay_time)
{
    int x = radius;
    int y = 0;
    int p = 1 - radius;
    char buffer[50];
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
    while (x > y)
    {
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc - y, yc - x, WHITE);
        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - y, yc + x, WHITE);
        y++;
        if (p <= 0)
            p = p + 2 * y + 1;
        else
        {
            x--;
            p = p + 2 * y - 2 * x + 1;
        }

        if (x < y)
            break;
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc - y, yc - x, WHITE);
        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - y, yc + x, WHITE);
        delay(delay_time);
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    MidpointCircle(350, 200, 150, 10);
    getch();
    closegraph();
    return 0;
}