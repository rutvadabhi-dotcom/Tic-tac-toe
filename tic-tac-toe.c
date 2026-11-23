#include<stdio.h>

void display_board();
static char arr[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

int main()
{
    display_board();
    return 0;
}

void display_board()
{
    int i,j;

    for(i=0;i<3;i++)
    {   
        for(j=0;j<3;j++)
        {
            printf(" %c ",arr[i][j]);

            if(j==2)
            {
                continue;
            }
            printf("|");
        }
        
        printf("\n");

        if(i==2)
        {
            continue;
        }
        printf("---|---|---");
        printf("\n");
    }
}