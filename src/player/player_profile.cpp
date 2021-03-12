#include "../../include/player/player_profile.h"

PlayerProfile::PlayerProfile(std::string name, std::string lastName){
	this->name = name;
	this->lastName = lastName;
}

//Setters
void PlayerProfile::setID(unsigned int id){
	this->id = id;
}

void PlayerProfile::setName(std::string name){
	this->name = name;
}

void PlayerProfile::setLastName(std::string lastName){
	this->lastName = lastName;
}

void PlayerProfile::setCountry(std::string country){
	this->country = country;
}

void PlayerProfile::setCity(std::string city){
	this->city = city;
}

void PlayerProfile::setAvatarDescription(std::string avatarDescription){
	this->avatarDescription = avatarDescription;
}

void PlayerProfile::setShortDescription(std::string shortDescription){
	this->shortDescription = shortDescription;
}


void PlayerProfile::setNickname(std::string nickname){
	this->nickname = nickname;
}

void PlayerProfile::setHero(std::string hero){
	this->hero = hero;
}

void PlayerProfile::setExperience(unsigned int experience){
	this->experience = experience;
}

void PlayerProfile::setLevel(unsigned int level){
	this->level = level;
}

//Getters
unsigned int PlayerProfile::getID(){
	return this->id;
}

std::string PlayerProfile::getName(){
	return this->name;
}

std::string PlayerProfile::getLastName(){
	return this->lastName;
}

std::string PlayerProfile::getCountry(){
	return this->country;
}

std::string PlayerProfile::getCity(){
	return this->city;
}

std::string PlayerProfile::getAvatarDescription(){
	return this->avatarDescription;
}

std::string PlayerProfile::getShortDescription(){
	return this->shortDescription;
}

std::string PlayerProfile::getNickname(){
	return this->nickname;
}

std::string PlayerProfile::getHero(){
	return this->hero;
}

unsigned int PlayerProfile::getExperience(){
	return this->experience;
}

unsigned int PlayerProfile::getLevel(){
	return this->level;
}
