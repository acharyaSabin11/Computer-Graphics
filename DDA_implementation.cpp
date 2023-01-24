#include <graphics.h> //To access the functions like initwindow, putpixel, etc
#include <iostream>   //To access the basic input output functionality in console

using namespace std;

int main() // Start of the proogram.
{
    // Declarig variables.
    float x1, y1, x2, y2, dx, dy, x, y;
    int step;

    // Taking input from the user.
    cout << "Enter the value of x1, y1, x2 and y2:" << endl;
    cout << "Enter the value of x1:";
    cin >> x1;
    cout << "Enter the value of y1:";
    cin >> y1;
    cout << "Enter the value of x2:";
    cin >> x2;
    cout << "Enter the value of y2:";
    cin >> y2;

    // Calculating the change in x and y axes distances between the points.
    dx = x2 - x1;
    dy = y2 - y1;

    // The larger value among dx and dy is saved to the step variable.
    if (abs(dx) >= abs(dy))
    {
        step = abs(dx);
    }
    else
    {
        step = abs(dy);
    }

    // Calculating the incremental factor for x and y.
    dx = dx / (float)step;
    dy = dy / (float)step;

    // Assigning the initial value of x and y
    x = x1;
    y = y1;

    // Creating the window for drawing with width of 1200 pixels, height of 900 pixels and title of the window.
    initwindow(1300, 600, "DDA-LDA Implementation (By Sabin Acharya, Roll Number : THA077BEI035)");

    // This loop runs for 'step' number of times to draw a line
    for (int i = 0; i <= step; i++)
    {
        putpixel(x, y, WHITE); // Puts a pixel of white color at the desired (x,y) position on the screen.
        // Incrementing x and y to get next point.
        x = x + dx;
        y = y + dy;
    }

    getch();      // To hold the screen from exiting suddenly after drawing the graphics onto the screen.
    closegraph(); // To close the graphics window once the program exits.
    return 0;     // End of the program.
}