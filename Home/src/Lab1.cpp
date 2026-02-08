#include <stdio.h>
#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setcolor(WHITE);
    line(100, 100, 400, 100);
    getch();
    closegraph();
    return 0;
}
