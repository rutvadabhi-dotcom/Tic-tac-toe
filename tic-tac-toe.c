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

            if(row<4 && row>0 && column<4 && column>0)
            {
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
                printf("Invalid move, try again\n");
                i--;
                continue;
            } 
        }

        else
        {
            int row,column;
            printf("Player 2, enter the row and column (1-3) to place X: ");
            scanf("%d%d",&row,&column);

            if(row<4 && row>0 && column<4 && column>0)
            {
                if(arr[row-1][column-1]=='-')
                {
                    arr[row-1][column-1]='X';
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
                printf("Invalid move, try again.\n");
                i--;
            }
        }
        
        if((arr[0][0]=='O' && arr[0][1]=='O' && arr[0][2]=='O') || (arr[1][0]=='O' && arr[1][1]=='O' && arr[1][2]=='O') || (arr[2][0]=='O' && arr[2][1]=='O' && arr[2][2]=='O') || (arr[0][0]=='O' && arr[1][0]=='O' && arr[2][0]=='O') || (arr[0][1]=='O' && arr[1][1]=='O' && arr[2][1]=='O') || (arr[0][2]=='O' && arr[1][2]=='O' && arr[2][2]=='O') || (arr[0][0]=='O' && arr[1][1]=='O' && arr[2][2]=='O') || (arr[0][2]=='O' && arr[1][1]=='O' && arr[2][0]=='O'))
        {
            printf("Player 1 wins!\n");
            break;
        }
        else if((arr[0][0]=='X' && arr[0][1]=='X' && arr[0][2]=='X') || (arr[1][0]=='X' && arr[1][1]=='X' && arr[1][2]=='X') || (arr[2][0]=='X' && arr[2][1]=='X' && arr[2][2]=='X') || (arr[0][0]=='X' && arr[1][0]=='X' && arr[2][0]=='X') || (arr[0][1]=='X' && arr[1][1]=='X' && arr[2][1]=='X') || (arr[0][2]=='X' && arr[1][2]=='X' && arr[2][2]=='X') || (arr[0][0]=='X' && arr[1][1]=='X' && arr[2][2]=='X') || (arr[0][2]=='X' && arr[1][1]=='X' && arr[2][0]=='X'))
        {
            printf("Player 2 wins!\n");
            break;
        }
        else if(i==9)
        {
            printf("It's a draw!\n");
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