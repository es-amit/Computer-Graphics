# include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    line(100, 100, 200, 0);
    line(200, 0, 300, 100);
    line(100, 100, 300, 100);
    line(100, 100, 100, 300);
    line(100, 300, 300, 300);
    line(300, 100, 300, 300);
    getch();
    closegraph();
}