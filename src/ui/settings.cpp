#include "../../include/ui/settings.h"

Settings::Settings(){}
Settings::~Settings(){}

void Settings::selectOption(size_t option){
	switch(option){
		case 1:
			//set option 1
			break;
		case 2:
			//set option 2
			break;
		case 3:
			//set option 3
			break;
	}
}

void Settings::setPosX(size_t posX){
	this->posX = posX;
}

void Settings::setPosY(size_t posY){
	this->posY = posY;
}

void Settings::setWidth(size_t width){
	this->width = width;
}

void Settings::setHeight(size_t height){
	this->height = height;
}

void Settings::setFullscreen(bool fullscreen){
	this->fullscreen = fullscreen;
}

void Settings::setWindowed(bool windowed){
	this->windowed = windowed;
}

void Settings::setMusic(bool music){
	this->music = music;
}

void Settings::setSound(bool sound){
	this->sound = sound;
}

void Settings::setStyle(bool style){
	this->style = style;
}


bool Settings::getFullscreen(){
	return this->fullscreen;
}

bool Settings::getWindowed(){
	return this->windowed;
}

bool Settings::getMusic(){
	return this->music;
}

bool Settings::getSound(){
	return this->sound;
}

bool Settings::getStyle(){
	return this->style;
}

size_t Settings::getPosX(){
	return this->posX;
}

size_t Settings::getPosY(){
	return this->posY;
}

size_t Settings::getWidth(){
	return this->width;
}

size_t Settings::getHeight(){
	return this->height;
}
