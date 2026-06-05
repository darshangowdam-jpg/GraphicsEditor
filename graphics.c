#include <stdio.h>

#define ROWS 20
#define COLS 40

extern char canvas[ROWS][COLS];

void initializeCanvas()
{
    int i,j;

    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            canvas[i][j]='_';
        }
    }
}

void displayCanvas()
{
    int i,j;

    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            printf("%c ",canvas[i][j]);
        }
        printf("\n");
    }
}
void drawRectangle(int row, int col, int width, int height)
{
    int i, j;

    for(i = row; i < row + height; i++)
    {
        for(j = col; j < col + width; j++)
        {
            if(i < ROWS && j < COLS)
            {
                canvas[i][j] = '*';
            }
        }
    }
}
void drawLine(int row, int startCol, int endCol)
{
    int j;

    for(j = startCol; j <= endCol; j++)
    {
        if(row < ROWS && j < COLS)
        {
            canvas[row][j] = '*';
        }
    }
}
void drawTriangle(int row, int col, int height)
{
    int i, j;

    for(i = 0; i < height; i++)
    {
        for(j = 0; j <= i; j++)
        {
            if((row + i) < ROWS && (col + j) < COLS)
            {
                canvas[row + i][col + j] = '*';
            }
        }
    }
}
void drawCircle(int centerRow, int centerCol, int radius)
{
    int x, y;

    for(x = 0; x < ROWS; x++)
    {
        for(y = 0; y < COLS; y++)
        {
            int dx = x - centerRow;
            int dy = y - centerCol;

            if(dx * dx + dy * dy <= radius * radius)
            {
                canvas[x][y] = '*';
            }
        }
    }
}