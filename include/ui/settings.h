#ifndef SETTINGS_H_
#define SETTINGS_H_

class Settings {
	bool fullscreen = false;
	bool windowed = false;
	bool music = false;
	bool sound = false;
	bool style = false;
public:
	Settings();
	~Settings();
	
	void setFullscreen(bool fullscreen);
	void setWindowed(bool windowed);
	void setMusic(bool music);
	void setSound(bool sound);
	void setStyle(bool style);
	
	bool getFullscreen();
	bool getWindowed();
	bool getMusic();
	bool getSound();
	bool getStyle();
	
};

#endif
