#include <conio.h>
#include <windows.h>
#include <stdio.h>

char map[50][50]={"### ######",
                  "#O#      #",
                  "# ###### #",
                  "#      # #",
                  "###### # #",
                  "#      # #",
                  "#  ##### #",
                  "#  #   # #",
                  "#    #   #",
                  "##########"};

int main(void){
    int x=1,y=1;
    char ch;
    for(int i=0;i<=9;i++){
        puts(map[i]);
    }
    while(1){
        ch=getch();
        if(ch=='w'/*UP*/){
            if(map[x-1][y]==' '){
                map[x][y]=' ';
                x--;
                map[x][y]='O';
            }
        }
        else if(ch=='s'/*DOWN*/){
            if(map[x+1][y]==' '){
				map[x][y]=' ';
                x++;
                map[x][y]='O';
            }
        }
        else if(ch=='a'/*LEFT*/){
            if(map[x][y-1]==' '){
				map[x][y]=' ';
				y--;
                map[x][y]='O';
            }
        }
        else if (ch=='d'/*RIGHT*/){
            if(map[x][y+1]==' '){
				map[x][y]=' ';
                y++;
                map[x][y]='O';
            }
        }
        system("cls");
        for(int i=0;i<=9;i++){
            puts(map[i]);
        }
        if(x==0 && y==3){
            break;
        }
    }
    printf("YOU WIN!\n");
    int end;
    scanf("%d", end);
    return 0;
}