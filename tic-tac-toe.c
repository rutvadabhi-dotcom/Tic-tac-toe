#include<stdio.h>

void display_board();
static char arr[3][3] = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};

int main()
{   
    
    printf("Tic Tac Toe Game\n");
    printf("Player 1 (O)  -  Player 2 (X)\n");

    for(int i=1;i<=9;i++)
    {   
        if(i%2!=0)
        {
            int row,column;
            printf("Player 1, enter the row and column (1-3) to place O: ");
            scanf("%d%d",&row,&column);

            if(arr[row-1][column-1]=='-')
            {
                arr[row-1][column-1]='O';
            }
            else
            {
                printf("Invalid move, try again.\n");
                i--;
                continue;
            }  

            display_board();
        }
        else
        {
            int row,column;
            printf("Player 2, enter the row and column (1-3) to place X: ");
            scanf("%d%d",&row,&column);

            if(arr[row-1][column-1]=='-')
            {
                arr[row-1][column-1]='X';
            }
            else
            {
                printf("Invalid move, try again.\n");
                i--;
            }  
            display_board();
        }
        
    }
        
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