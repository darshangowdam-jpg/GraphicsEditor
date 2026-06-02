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