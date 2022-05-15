#include <conio.h>
#include <windows.h>
#include <iostream>
 
using namespace std;

char a[50][50] = {"############",
				  "#O#        #",
				  "#   #  # ###",
				  "#####  #   #",
				  "#      #####",
				  "#####    # #",
				  "#     #     ",
				  "############"};

int main(){
    int x=1, y=1;
    char ch;
    for(int i=0;i<=7;i++){
        puts(a[i]);
    }
    while(true){
        ch=getch();
        if(ch=='w'/*UP*/){
            if(a[x-1][y]==' '){
                a[x][y]=' ';
                x--;
                a[x][y]='O';
            }
        }
        else if(ch=='s'/*DOWN*/){
            if(a[x+1][y]==' '){
				a[x][y]=' ';
                x++;
                a[x][y]='O';
            }
        }
        else if(ch=='a'/*LEFT*/){
            if(a[x][y-1]==' '){
				a[x][y]=' ';
				y--;
                a[x][y]='O';
            }
        }
        else if (ch=='d'/*RIGHT*/){
            if(a[x][y+1]==' '){
				a[x][y]=' ';
                y++;
                a[x][y]='O';
            }
        }
        system("cls");
        for(int i=0;i<=7;i++){
            puts(a[i]);
        }
        if(x==6 && y==11){
            break;
        }
    }
    cout << "YOU WIN";
    int end;
    cin >> end;
    return 0;
}