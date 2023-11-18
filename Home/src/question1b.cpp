# include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    rectangle(100, 100, 500, 300);
    getch();
    closegraph();
}