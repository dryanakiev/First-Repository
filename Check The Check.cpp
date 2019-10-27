#include <iostream>
using namespace std;
char Board[8][8];
bool CheckMateWhite;
bool CheckMateBlack;
//---------------------------PAWN------------------------------
char Pawn(int x, int y){
	if((x+1<=7 && y+1<=7) && (x-1>=0 && y-1>=0)){
		if(Board[x+1][y+1] == 'K' || Board[x+1][y-1] == 'K'){
			CheckMateWhite = 1;
		}
		if(Board[x-1][y+1] == 'k' || Board[x-1][y-1] == 'k'){
			CheckMateBlack = 1;
		}
	}
}
//-------------------------------------ROOK---------------------------------
char Rook(int x, int y){
	for(int i=y+1; i<8; i++){
		if(Board[x][i] != '.'){
			if(Board[x][i] == 'K'){
				CheckMateWhite = true;
				break;
			}
			if(Board[x][i] == 'k'){
				CheckMateBlack = true;
				break;
			}
			else{
				break;
			}
		}
	}
	for(int i=y-1; i>=0; i--){
		if(Board[x][i] != '.'){
			if(Board[x][i] == 'K'){
				CheckMateWhite = true;
				break;
			}
			if(Board[x][i] == 'k'){
				CheckMateBlack = true;
				break;
			}
			else{
				break;
			}
		}
	}
	for(int i=x-1; i>=0; i--){
		if(Board[i][y] != '.'){
			if(Board[i][y] == 'K'){
				CheckMateWhite = true;
				break;
			}
			if(Board[i][y] == 'k'){
				CheckMateBlack = true;
				break;
			}
			else{
				break;
			}
		}
	}
	for(int i=x+1; i<8; i++){
		if(Board[i][y] != '.'){
			if(Board[i][y] == 'K'){
				CheckMateWhite = true;
				break;
			}
			if(Board[i][y] == 'k'){
				CheckMateBlack = true;
				break;
			}
			else{
				break;
			}
		}
	}
}
//--------------------------------------BISHOP-----------------------
char Bishop(int x, int y){
	int temp = 0;
	for(int i=0; i<8; i++){
		if(temp == 1)break;
		if(Board[x+i][y+i] != '.'){
			if(Board[x+i][y+i] == 'K'){
				CheckMateWhite = 1;
				break;
			}
			if(Board[x+i][y+i] == 'k'){
				CheckMateBlack = 1;
				break;
			}
			else{
				temp = 1;
			}
		}
	}
	temp = 0;
	for(int i=0; i<8; i++){
		if(temp == 1)break;
		if(Board[x+i][y-i] != '.'){
			if(Board[x+i][y-i] == 'K'){
				CheckMateWhite = 1;
				break;
			}
			if(Board[x+i][y-i] == 'k'){
				CheckMateBlack = 1;
				break;
			}
			else{
				temp = 1;
			}
		}
	}
	temp = 0;
	for(int i=0; i<8; i++){
		if(temp == 1)break;
		if(Board[x-i][y-i] != '.'){
			if(Board[x-i][y-i] == 'K'){
				CheckMateWhite = 1;
				break;
			}
			if(Board[x-i][y-i] == 'k'){
				CheckMateBlack = 1;
				break;
			}
			else{
				temp = 1;
			}
		}
	}
	temp = 0;
	for(int i=0; i<8; i++){
		if(temp == 1)break;
		if(Board[x-i][y+i] != '.'){
			if(Board[x-i][y+i] == 'K'){
				CheckMateWhite = 1;
				break;
			}
			if(Board[x-i][y+i] == 'k'){
				CheckMateBlack = 1;
				break;
			}
			else{
				temp = 1;
			}
		}
	}
}
//--------------------QUEEN---------------------------------------
char Queen(int x, int y){
	int temp = 0;
	for(int i=0; i<8; i++){
		if(temp == 1)break;
		if(Board[x+i][y+i] != '.'){
			if(Board[x+i][y+i] == 'K'){
				CheckMateWhite = 1;
				break;
			}
			if(Board[x+i][y+i] == 'k'){
				CheckMateBlack = 1;
				break;
			}
			else{
				temp = 1;
			}
		}
	}
	temp = 0;
	for(int i=0; i<8; i++){
		if(temp == 1)break;
		if(Board[x+i][y-i] != '.'){
			if(Board[x+i][y-i] == 'K'){
				CheckMateWhite = 1;
				break;
			}
			if(Board[x+i][y-i] == 'k'){
				CheckMateBlack = 1;
				break;
			}
			else{
				temp = 1;
			}
		}
	}
	temp = 0;
	for(int i=0; i<8; i++){
		if(temp == 1)break;
		if(Board[x-i][y-i] != '.'){
			if(Board[x-i][y-i] == 'K'){
				CheckMateWhite = 1;
				break;
			}
			if(Board[x-i][y-i] == 'k'){
				CheckMateBlack = 1;
				break;
			}
			else{
				temp = 1;
			}
		}
	}
	temp = 0;
	for(int i=0; i<8; i++){
		if(temp == 1)break;
		if(Board[x-i][y+i] != '.'){
			if(Board[x-i][y+i] == 'K'){
				CheckMateWhite = 1;
				break;
			}
			if(Board[x-i][y+i] == 'k'){
				CheckMateBlack = 1;
				break;
			}
			else{
				temp = 1;
			}
		}
	}
	for(int i=y; i<8; i++){
		if(Board[x][i] != '.'){
			if(Board[x][i] == 'K'){
				CheckMateWhite = true;
				break;
			}
			if(Board[x][i] == 'k'){
				CheckMateBlack = true;
				break;
			}
			else{
				break;
			}
		}
	}
	for(int i=y; i>=0; i--){
		if(Board[x][i] != '.'){
			if(Board[x][i] == 'K'){
				CheckMateWhite = true;
				break;
			}
			if(Board[x][i] == 'k'){
				CheckMateBlack = true;
				break;
			}
			else{
				break;
			}
		}
	}
	for(int i=x; i>=0; i--){
		if(Board[i][y] != '.'){
			if(Board[i][y] == 'K'){
				CheckMateWhite = true;
				break;
			}
			if(Board[i][y] == 'k'){
				CheckMateBlack = true;
				break;
			}
			else{
				break;
			}
		}
	}
	for(int i=x; i<8; i++){
		if(Board[i][y] != '.'){
			if(Board[i][y] == 'K'){
				CheckMateWhite = true;
				break;
			}
			if(Board[i][y] == 'k'){
				CheckMateBlack = true;
				break;
			}
			else{
				break;
			}
		}
	}
}
//------------------------------KNIGHT----------------------------
char Knight(int x, int y){
	if(Board[x+1][y+2] == 'K' || Board[x+1][y-2] == 'K' || Board[x+2][y+1] == 'K' ||Board[x+2][y-1] == 'K'){
		CheckMateWhite = 1;
	}
	if(Board[x-1][y+2] == 'K' || Board[x-1][y-2] == 'K' || Board[x-2][y+1] == 'K' ||Board[x-2][y-1] == 'K'){
		CheckMateWhite = 1;
	}
	if(Board[x+1][y+2] == 'k' || Board[x+1][y-2] == 'k' || Board[x+2][y+1] == 'k' ||Board[x+2][y-1] == 'k'){
		CheckMateBlack = 1;
	}
	if(Board[x-1][y+2] == 'k' || Board[x-1][y-2] == 'k' || Board[x-2][y+1] == 'k' ||Board[x-2][y-1] == 'k'){
		CheckMateBlack = 1;
	}
}
//----------------------------------------------------------------------------------
int counter = 0;
int BoardCounter;
int Piece;
int main(){
	while (true){
		BoardCounter = 0;
		counter++;
		CheckMateWhite = false;
		CheckMateBlack = false;
		for(int i=0; i<8; i++){
			for (int j=0; j<8; j++){
				cin>>Board[i][j];
				if(Board[i][j] == '.'){
					BoardCounter++;
				}
			}
		}
		if(BoardCounter == 64){
			break;
		}
		for(int i=0; i<=8; i++){
			for(int j=0; j<=8; j++){
				Piece = Board[i][j];
				switch(Piece){
					case 'p':
					case 'P':{
						Pawn(i,j);
						break;
					}
					case 'r':
					case 'R':{
						Rook(i,j);
						break;
					}
					case 'b':
					case 'B':{
						Bishop(i,j);
						break;
					}
					case 'q':
					case 'Q':{
						Queen(i,j);
						break;
					}
					case 'n':
					case 'N':{
						Knight(i,j);
						break;
					}
				}
			}
		}
		if(CheckMateWhite == true){
			cout<<"Game #"<<counter<<": white king is in check.";
		}
		if(CheckMateBlack == true){
			cout<<"Game #"<<counter<<": black king is in check.";
		}
		if(CheckMateBlack == false && CheckMateWhite == false){
			cout<<"Game #"<<counter<<": no king is in check.";
		}
		cout<<endl;
	}
}
