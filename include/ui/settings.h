#ifndef SETTINGS_H_
#define SETTINGS_H_

#include <cstddef>

class Settings {
	bool fullscreen = false;
	bool windowed = false;
	bool music = false;
	bool sound = false;
	bool style = false;
	
	size_t styleOptions[3] = { 1, 2, 3 };
	
	size_t posX;
	size_t posY;
	size_t width;
	size_t height;
	
public:
	Settings();
	~Settings();
	
	void selectOption(size_t option);
	
	void setPosX(size_t posX);
	void setPosY(size_t posY);
	void setWidth(size_t width);
	void setHeight(size_t height);
	
	void setFullscreen(bool fullscreen);
	void setWindowed(bool windowed);
	void setMusic(bool music);
	void setSound(bool sound);
	void setStyle(bool style);
	
	size_t getPosX();
	size_t getPosY();
	size_t getWidth();
	size_t getHeight();
	
	bool getFullscreen();
	bool getWindowed();
	bool getMusic();
	bool getSound();
	bool getStyle();
	
};

#endif
