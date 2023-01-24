#include <iostream>
#include <graphics.h>
#include <math.h>

using namespace std;

void bressenhamsLDA(float x1, float y1, float x2, float y2)
{
    int dx, dy, p, x, y;
    int xInc, yInc;
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    x = x1;
    y = y1;
    if (x2 > x1)
    {
        xInc = 1;
    }
    else
    {
        xInc = -1;
    }

    if (y2 > y1)
    {
        yInc = 1;
    }
    else
    {
        yInc = -1;
    }

    putpixel(x, y, WHITE);
    if (dx > dy)
    {
        p = 2 * dy - dx;
        for (int k = 0; k < dx; k++)
        {
            if (p < 0)
            {
                x += xInc;
                p += 2 * dy;
            }
            else
            {
                x += xInc;
                y += yInc;
                p += (2 * dy - 2 * dx);
            }
            putpixel(x, y, WHITE);
        }
    }
    else
    {
        p = 2 * dx - dy;
        for (int k = 0; k < dy; k++)
        {
            if (p < 0)
            {
                y += yInc;
                p += 2 * dx;
            }
            else
            {
                x += xInc;
                y += yInc;
                p += (2 * dx - 2 * dy);
            }
            putpixel(x, y, WHITE);
        }
    }
}

int main()
{
    initwindow(1000, 900, "Bresenhams LDA (Name: Sabin Acharya, Roll: THA077BEI035");
    bressenhamsLDA(50, 150, 300, 250);  // Slope -ve and less than 1
    bressenhamsLDA(450, 150, 600, 400); // Slope -ve and more than 1
    bressenhamsLDA(750, 150, 900, 300); // Slope -ve and equal to 1
    bressenhamsLDA(0, 450, 1000, 450);  // Divider line Slope  = 0
    bressenhamsLDA(375, 0, 375, 900);   // Divider line Slope  = infinity
    bressenhamsLDA(675, 0, 675, 900);   // Divider line Slope  = infinity
    bressenhamsLDA(300, 600, 50, 750);  // Slope +ve and less than 1
    bressenhamsLDA(600, 600, 450, 850); // Slope +ve and more than 1
    bressenhamsLDA(900, 600, 750, 750); // Slope +ve and equal to 1
    getch();
    closegraph();
    return 0;
}