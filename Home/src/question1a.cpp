# include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    circle(300, 200, 125);
    getch();
    closegraph();
}