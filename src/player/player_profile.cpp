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

void PlayerProfile::setMiddleName(std::string middleName){
	this->middleName = middleName;
}

//Social networks
void setEmail(std::string email){
	this->email = email;
}

void setInstagram(std::string instagram){
	this->instagram = instagram;
}

void setFacebook(std::string facebook){
	this->facebook = facebook;
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

void PlayerProfile::setNumberOfWinning(size_t numberOfWinning){
	this->numberOfWinning = numberOfWinning;
}

void PlayerProfile::setNumberOfLosses(size_t numberOfLosses){
	this->numberOfLosses = numberOfLosses;
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

std::string PlayerProfile::getMiddleName(){
	return this->middleName;
}

std::string getEmail(){
	return this->email;
}

std::string getInstagram(){
	return this->instagram;
}

std::string getFacebook(){
	return this->facebook;
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

size_t PlayerProfile::getNumberOfWinning(){
	return this->numberOfWinning;
}

size_t PlayerProfile::getNumberOfLosses(){
	return this->numberOfLosses;
}
