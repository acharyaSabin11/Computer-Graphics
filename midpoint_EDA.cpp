#include <iostream>
#include <graphics.h>
#include <math.h>

using namespace std;

void printPoints(int x, int y, int h, int k)
{
    putpixel(x + h, y + k, GREEN);
    putpixel(-x + h, y + k, CYAN);
    putpixel(x + h, -y + k, MAGENTA);
    putpixel(-x + h, -y + k, BLUE);
}

void midpointEllipse(int h, int k, int rx, int ry)
{
    int x, y, p1, p2, dx, dy;
    x = 0;
    y = ry;

    // Initial decision parameter:
    p1 = ry * ry + 1 / 4 * rx * rx - rx * rx * ry;
    // For region 1:
    // printPoints(x, y, h, k);
    // delay(1);
    while (dx < dy)
    {
        printPoints(x, y, h, k);
        delay(1);
        if (p1 < 0)
        {
            x++;
            p1 += (2 * ry * ry * x + ry * ry);
        }
        else
        {
            x++;
            y--;
            p1 += (2 * ry * ry * x - 2 * rx * rx * y + ry * ry);
        }
        dx = 2 * ry * ry * x;
        dy = 2 * rx * rx * y;
    }
    p2 = pow(ry, 2) * pow((x + 1 / 2), 2) + pow(rx, 2) * pow((y - 1), 2) - pow(ry, 2) * pow(rx, 2);
    while (y >= 0)
    {
        printPoints(x, y, h, k);
        delay(1);
        if (p2 > 0)
        {
            y--;
            p2 += (pow(rx, 2) - 2 * pow(rx, 2) * y);
        }
        else
        {
            y--;
            x++;
            p2 += (2 * pow(ry, 2) * x + pow(rx, 2) - 2 * pow(rx, 2) * y);
        }
    }
}

int main()
{
    int h, k, rx, ry;
    cout << "Enter the center of ellipse(h,K): ";
    cin >> h;
    cin >> k;
    cout << "Enter the x-radius: ";
    cin >> rx;
    cout << "Enter the y-radius: ";
    cin >> ry;
    initwindow(800, 600, "Midpoint Eliipse Drawing Algorithm(Name: Sabin Acharya, Roll No: THA077BEI035");
    // setbkcolor(WHITE);
    // cleardevice();
    midpointEllipse(h, k, rx, ry);
    getch();
    closegraph();
    return 0;
}