//#include <classes.h>
#include "classes.h"

int main()
{  /* int x[2];
    int y=3;
    cout<<x[y];*/
    bool quit=false;
Board game;
int x;
int y;
char op;
int n=1;
cout<<"game started row , coloumn "<<endl;
while(!quit){
        if(n%2==0){op='X';cout<<"PLAYER 2's TURN:"<<endl;}
        else{
            op='O';cout<<"PLAYER 1's TURN:"<<endl;
        }
    game.PrintBoard();
    cin>>x>>y;
    if(game.Boxmarker(x-1,y-1,op)==true)n++;
    if(game.winchecker()){game.PrintBoard();
    cout<<"player 1 wins"<<endl;
    quit=true;}
    if(game.winchecker2()){
        game.PrintBoard();
        cout<<"player 2 wins"<<endl;
        quit=true;

    }
    if(game.filled()){
        cout<<"board filled,tied!"<<endl;
        quit=true;
    }


}
    return 0;
}
