#include "../../include/player/player_status.h"

PlayerStatus::PlayerStatus(){

}

void PlayerStatus::scores(){
	std::cout << "Total Scores: " << this->totalScores << std::endl;
}

void PlayerStatus::setTotalScores(size_t totalScores){
	this->totalScores = totalScores;
}

size_t PlayerStatus::getTotalScores(){
	return this->totalScores;
}
