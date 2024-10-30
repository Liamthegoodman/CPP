#include<iostream>
#include<time.h>
using namespace std;
void drawboard(char *space);
void playerMove( char *space, char player);
void computermove(char *space, char computer);
bool checkwinner(char *space, char player , char computer);
bool checkTie(char *space);
int main(){
    char space [9]={' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';

    bool running = true;
    drawboard(space);

    while ( running){
        playerMove(space,player);
        drawboard(space);
        if(checkwinner(space,player,computer)){
            running = false;
            break;
        }
        else if (checkTie(space)){
            running = false;
            break;
        }
        computermove(space,computer);
        drawboard(space);
        if(checkwinner(space,player,computer)){
            running = false;
            break;
        }else if (checkTie(space)){
            running = false;
            break;
        }
    }
    cout<<"Thanks for playing!!!!!"<<endl;
 
}


void drawboard(char *space){

    cout<< "     |     |     "<<endl;
    cout<< "   "<<  space[0]  <<" |   "<<  space[1]  <<" |   "<<  space[2]  <<"  "<<endl;
    cout<< "_____|_____|_____"<<endl;
    cout<< "     |     |     "<<endl;
    cout<< "   "<<  space[3]  <<" |   "<<  space[4]  <<" |   "<<  space[5]  <<"  "<<endl;
    cout<< "_____|_____|_____"<<endl;
    cout<< "     |     |     "<<endl;
    cout<< "   "<<  space[6]  <<" |   "<<  space[7]  <<" |   "<<  space[8]  <<"  "<<endl;
    cout<< "     |     |     "<<endl;

}
void playerMove( char *space, char player){

    int number ;
    do {
        cout<< " Enter a spot (1-9):";
        cin>> number;
        number --;
        if( space[number]== ' '){
            space[number]= player;
            break;
        }

    }while(number < 0 || number > 8);

}
void computermove(char *space, char computer){
    int number;
    srand(time(0));

    while (true){
        number = rand() % 9;
        if( space[number]== ' '){
            space[number]=computer;
            break;
        }
    }
}
bool checkwinner(char *spaces, char player, char computer){



    if((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])){

        spaces[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";

    }

    else if((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])){

        spaces[3] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";

    }

    else if((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])){

        spaces[6] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";

    }

    else if((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])){

        spaces[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";

    }

    else if((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])){

        spaces[1] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";

    }

    else if((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])){

        spaces[2] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";

    }

    else if((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])){

        spaces[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";

    }

    else if((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])){

        spaces[2] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";

    }

    else{

        return false;

    }



    return true;

}
bool checkTie(char *space){
    for (int i=0;i<9;i++){
        if (space[i] == ' '){
            return false;
        }
        

    }
    cout<<"It's a TIE!";

    return true;
}