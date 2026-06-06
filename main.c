#include <stdio.h>

int main()
{
    printf("2D Graphics Editor Project\n");
    return 0;
}
#include <stdio.h>

#define ROWS 20
#define COLS 40

char canvas[ROWS][COLS];

void initializeCanvas();
void displayCanvas();

int main()
{
    initializeCanvas();
    displayCanvas();

    return 0;
}
void drawRectangle(int row, int col, int width, int height);
int main()
{
    initializeCanvas();

    drawRectangle(2, 5, 10, 4);

    displayCanvas();

    return 0;
}
void drawLine(int row, int startCol, int endCol);
int main()
{
    initializeCanvas();

    drawRectangle(2, 5, 10, 4);

    drawLine(10, 5, 20);

    displayCanvas();

    return 0;
}
void drawTriangle(int row, int col, int height);
int main()
{
    initializeCanvas();

    drawRectangle(2, 5, 10, 4);

    drawLine(10, 5, 20);

    drawTriangle(12, 5, 6);

    displayCanvas();

    return 0;
}
void drawCircle(int centerRow, int centerCol, int radius);
int main()
{
    initializeCanvas();

    drawRectangle(2, 5, 10, 4);

    drawLine(10, 5, 20);

    drawTriangle(12, 5, 6);

    drawCircle(10, 30, 5);

    displayCanvas();

    return 0;
}
void deleteArea(int row, int col, int width, int height);
int main()
{
    initializeCanvas();

    drawRectangle(2, 5, 10, 4);

    drawLine(10, 5, 20);

    drawTriangle(12, 5, 6);

    drawCircle(10, 30, 5);

    deleteArea(3, 7, 4, 2);

    displayCanvas();

    return 0;
}