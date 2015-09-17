#include "card_reader.h"
#include "getFiles.h"

using namespace std;

Card::Card(string _cardPath){
	cardPath = _cardPath;
	Is_run = false;
}


void Card::Is_run_card(){
	
	if(!Is_run){
		filePath.clear();
		getFiles(cardPath,filePath);
		if(filePath.size()== 2){
			Is_run = true;
			remove(filePath[0].c_str());
			remove(filePath[1].c_str());
		}
			
	}
}

bool Card::get_run_card(){
	Is_run_card();
	return Is_run;
}

void Card::set_run_card(){
	Is_run = false;
}