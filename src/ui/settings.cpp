#include "../../include/ui/settings.h"

Settings::Settings(){}
Settings::~Settings(){}

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
