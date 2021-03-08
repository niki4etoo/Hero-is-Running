#include "../../include/ui/main_menu.h"

MainMenu::MainMenu(std::string startBtnText, std::string settingsBtnText, std::string quitBtnText){
	this->startBtnText = startBtnText;
	this->settingsBtnText = settingsBtnText;
	this->quitBtnText = quitBtnText;	
}

void MainMenu::startButton(){
	//to do
}
	
void MainMenu::setStartButtonText(std::string label){
	this->startBtnText = label;
}

void MainMenu::setStartButtonWidth(size_t width){
	this->startBtnWidth = width;
}

void MainMenu::setStartButtonHeight(size_t height){
	this->startBtnHeight = height;
}

void MainMenu::setStartButtonBorderRadius(size_t radius){
	this->startBtnRadius = radius;
}

void MainMenu::setStartButtonBackgroundColor(float r, float g, float b, float a){
	//to do
}


void MainMenu::settingsButton(){
	//to do
}

void MainMenu::setSettingsButtonText(std::string label){
	this->settingsBtnText = label;
}

void MainMenu::setSettingsButtonWidth(size_t width){
	this->settingsBtnWidth = width;
}

void MainMenu::setSettingsButtonHeight(size_t height){
	this->settingsBtnHeight = height;
}

void MainMenu::setSettingsButtonBorderRadius(size_t radius){
	this->settingsBtnRadius = radius;
}

void MainMenu::setSettingsButtonBackgroundColor(float r, float g, float b, float a){
	//to do
}


void MainMenu::quitButton(){
	//to do
}

void MainMenu::setQuitButtonText(std::string label){
	this->quitBtnText = label;
}

void MainMenu::setQuitButtonWidth(size_t width){
	this->quitBtnWidth = width;
}

void MainMenu::setQuitButtonHeight(size_t height){
	this->quitBtnHeight = height;
}

void MainMenu::setQuitButtonBorderRadius(size_t radius){
	this->quitBtnRadius = radius;
}

void MainMenu::setQuitButtonBackgroundColor(float r, float g, float b, float a){
	//to do
}
