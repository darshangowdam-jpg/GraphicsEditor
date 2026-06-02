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