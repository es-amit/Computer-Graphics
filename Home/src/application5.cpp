#include <graphics.h>
#include <cmath>
#include <time.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int centerX = getmaxx() / 2;
    int centerY = getmaxy() / 2;

    float radius = 50.0f; // Initial radius

    clock_t startTime = clock(); // Start time

    while (!kbhit()) {
        cleardevice();

        // Calculate elapsed time
        clock_t elapsedTime = clock() - startTime;

        // Change the radius over time (using a sine function)
        radius = 50 + 30 * sin(float(elapsedTime) / CLOCKS_PER_SEC * 1000);

        circle(centerX, centerY, static_cast<int>(radius)); // Ensure radius is an integer
        delay(100); // Adjust the delay as needed for animation speed
    }

    closegraph();
    return 0;
}
