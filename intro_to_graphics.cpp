#include <graphics.h>

int main() // Start of the proogram.
{
    initwindow(1600, 900, "Introduction To Graphics Library (By Sabin Acharya, Roll Number : THA077BEI035)"); // Creating the window for drawing graphics with width of 1600 pixels, height of 900 pixels and title of the window.

    // Drawing a horizontal line by drawing individual pixel with the help of for loop.
    for (int i = 100; i <= 300; i++)
    {
        putpixel(i, 100, WHITE); // draws the pixel of white color in the specified location
    }

    // Drawing a tilted line with the help of line function (Coordinates: starting = (400, 100) & ending = (800, 200))
    line(400, 100, 800, 200);

    // Drawing a full circle with the help of circle function (Center = (1000, 150) & radius = 100)
    circle(1000, 150, 100);

    // Drawing a full ellispe with the help of ellipse function (Center = (1350, 150), semi major axis length (x-axis) = 150 & semi minor axis length(y-axis) = 100)
    ellipse(1350, 150, 0, 360, 150, 100);

    // Drawing a half ellipse with the help of ellipse function (Center = (1350, 150), semi major axis length (x-axis) = 150, semi minor axis length(y-axis) = 100 & drawing angle from 0 to 180 degress)
    ellipse(1350, 450, 0, 180, 150, 100);

    // Drawing an arc extending from 45 degree to 135 degree using arc function (Center = (200, 600), radius = 200 & drawing angle from 45to 135 degrees)
    arc(200, 550, 45, 135, 200);

    // Drawing a rectangle with the help of rectangle function (top left corner co-ordinate = (400, 400) & bottom right corner co-ordinate = (800, 600))
    rectangle(400, 350, 800, 550);

    // Drawing a square with the help of rectangle function (top left corner co-ordinate = (900, 400) & bottom right corner co-ordinate = (1100, 600))
    rectangle(900, 350, 1100, 550);

    // using for loop to draw coincentric circles
    for (int i = 10; i < 150; i += 10)
    {
        circle(800, 750, i);
    }

    // using for loop to draw coincentric ellipses
    for (int i = 0; i <= 150; i += 10)
    {
        ellipse(1350, 750, 0, 360, 200 - i, 150 - i);
    }

    // multilayered square using for loop
    for (int i = 0; i <= 110; i += 10)
    {
        rectangle(80 + i, 630 + i, 320 - i, 870 - i);
    }

    getch();      // To hold the screen from exiting suddenly after drawing the graphics onto the screen.
    closegraph(); // To close the graphics window once the program exits.
    return 0;     // End of the program.
}