#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;
class TicTac{
char mark;
public:
    bool MARK(char i){
        bool progress = false;
    if(i=='O')progress=Omark();
    else if(i=='X')progress=Xmark();
    return progress;

    }
    bool Omark(){
    if(!check()){mark='O';return true;}
    else {cout<<"Box already marked"<<endl;return false;}
    }
    bool Xmark(){
    if(!check()){mark='X';return true;}
    else {cout<<"Box already marked"<<endl;return false;}
    }
    bool check(){
    if(mark=='O'||mark=='X')return true;
    else return false;
    }
    char returnmark(){
    if(mark=='O')return 'O';
    else if(mark=='X') return 'X';
    else return ' ';

    }
};
class Board{
TicTac boxes[3][3];
public:
bool Boxmarker(int x,int y,char i){
    if((x>-1)&&(x<3)){
bool success=boxes[x][y].MARK(i);

return success;

}
else return false;
///bool func returns true if not specified return
}
void PrintBoard(){
cout<<"|"<<boxes[0][0].returnmark()<<"|"<<boxes[0][1].returnmark()<<"|"<<boxes[0][2].returnmark()<<"|"<<endl;
cout<<"|"<<boxes[1][0].returnmark()<<"|"<<boxes[1][1].returnmark()<<"|"<<boxes[1][2].returnmark()<<"|"<<endl;
cout<<"|"<<boxes[2][0].returnmark()<<"|"<<boxes[2][1].returnmark()<<"|"<<boxes[2][2].returnmark()<<"|"<<endl;



}
bool winchecker(){
    bool win=false;
///horizontals
if(boxes[0][0].returnmark()=='O'&&boxes[0][1].returnmark()=='O'&&boxes[0][2].returnmark()=='O'){
  //  cout<<"you win"<<endl;
    win=true;
}
if(boxes[1][0].returnmark()=='O'&&boxes[1][1].returnmark()=='O'&&boxes[1][2].returnmark()=='O'){
    cout<<"you win"<<endl;
    win=true;
}
if(boxes[2][0].returnmark()=='O'&&boxes[2][1].returnmark()=='O'&&boxes[2][2].returnmark()=='O'){
   // cout<<"you win"<<endl;
    win=true;
}
///verticals
if(boxes[0][0].returnmark()=='O'&&boxes[1][0].returnmark()=='O'&&boxes[2][0].returnmark()=='O'){
  //  cout<<"you win"<<endl;
    win=true;
}
if(boxes[0][1].returnmark()=='O'&&boxes[1][1].returnmark()=='O'&&boxes[2][1].returnmark()=='O'){
    cout<<"you win"<<endl;
    win=true;
}
if(boxes[0][2].returnmark()=='O'&&boxes[1][2].returnmark()=='O'&&boxes[2][2].returnmark()=='O'){
   // cout<<"you win"<<endl;
    win=true;
}
///diagonals
if(boxes[0][0].returnmark()=='O'&&boxes[1][1].returnmark()=='O'&&boxes[2][2].returnmark()=='O'){
    cout<<"you win"<<endl;
   // win=true;
}
if(boxes[0][2].returnmark()=='O'&&boxes[1][1].returnmark()=='O'&&boxes[2][0].returnmark()=='O'){
    //cout<<"you win"<<endl;
    win=true;

}
return win;
}
bool winchecker2(){
    bool win=false;
///horizontals
if(boxes[0][0].returnmark()=='X'&&boxes[0][1].returnmark()=='X'&&boxes[0][2].returnmark()=='X'){
  //  cout<<"you win"<<endl;
    win=true;
}
if(boxes[1][0].returnmark()=='X'&&boxes[1][1].returnmark()=='X'&&boxes[1][2].returnmark()=='X'){
    cout<<"you win"<<endl;
    win=true;
}
if(boxes[2][0].returnmark()=='X'&&boxes[2][1].returnmark()=='X'&&boxes[2][2].returnmark()=='X'){
 //   cout<<"you win"<<endl;
    win=true;
}
///verticals
if(boxes[0][0].returnmark()=='X'&&boxes[1][0].returnmark()=='X'&&boxes[2][0].returnmark()=='X'){
   // cout<<"you win"<<endl;
    win=true;
}
if(boxes[0][1].returnmark()=='X'&&boxes[1][1].returnmark()=='X'&&boxes[2][1].returnmark()=='X'){
   // cout<<"you win"<<endl;
    win=true;
}
if(boxes[0][2].returnmark()=='X'&&boxes[1][2].returnmark()=='X'&&boxes[2][2].returnmark()=='X'){
   // cout<<"you win"<<endl;
    win=true;
}
///diagonals
if(boxes[0][0].returnmark()=='X'&&boxes[1][1].returnmark()=='X'&&boxes[2][2].returnmark()=='X'){
   // cout<<"you win"<<endl;
    win=true;
}
if(boxes[0][2].returnmark()=='X'&&boxes[1][1].returnmark()=='X'&&boxes[2][0].returnmark()=='X'){
   // cout<<"you win"<<endl;
    win=true;

}
return win;
}
bool filled(){

bool filled=false;
if(
   boxes[0][0].returnmark()!=' '&&boxes[0][1].returnmark()!=' '&&boxes[0][2].returnmark()!=' '&&
   boxes[1][0].returnmark()!=' '&&boxes[1][1].returnmark()!=' '&&boxes[1][2].returnmark()!=' '&&
   boxes[2][0].returnmark()!=' '&&boxes[2][1].returnmark()!=' '&&boxes[2][2].returnmark()!=' '

   ){
    filled=true;


   }
return filled;


}
};
#endif // CLASSES_H_INCLUDED
