#include <graphics.h>
#include <iostream>
#include <conio.h>

void MidpointCircle(int h, int k, int r)
{
    int p = 1 - r;
    int x = 0, y = r;
    for (int i = 0; x <= y; i++)
    {
        putpixel(x + h, y + k, WHITE);
        putpixel(y + h, x + k, WHITE);
        putpixel(y + h, -x + k, WHITE);
        putpixel(x + h, -y + k, WHITE);
        putpixel(-x + h, -y + k, WHITE);
        putpixel(-y + h, -x + k, WHITE);
        putpixel(-y + h, x + k, WHITE);
        putpixel(-x + h, y + k, WHITE);
        if (p < 0)
        {
            x += 1;
            p += (2 * x + 3);
        }
        else
        {
            x += 1;
            y -= 1;
            p += (2 * x - 2 * y + 5);
        }
    }
}

int main()
{
    initwindow(701, 701, "Midpoint Circle Drawing Algorithm (Name: Sabin Acharya, Roll: THA077BEI035)");
    for (int i = 0; i <= 13; i++)
    {
        MidpointCircle(350, 350, 350 - i * 25);
    }
    getch();
    closegraph();
    return 0;
}