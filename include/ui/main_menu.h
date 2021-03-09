#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include <string>
#include <cstddef>

class MainMenu {
	std::string startBtnText;
	size_t startBtnWidth;
	size_t startBtnHeight;
	float startBtnRadius;
	
	std::string settingsBtnText;
	size_t settingsBtnWidth;
	size_t settingsBtnHeight;
	float settingsBtnRadius;
	
	std::string quitBtnText;
	size_t quitBtnWidth;
	size_t quitBtnHeight;
	float quitBtnRadius;
	
public:
	MainMenu(std::string startBtnText, std::string settingsBtnText, std::string quitBtnText);
	~MainMenu();
	//Setters
	void startButton();
	void setStartButtonText(std::string label);
	void setStartButtonWidth(size_t width);
	void setStartButtonHeight(size_t height);
	void setStartButtonBorderRadius(float radius);
	void setStartButtonBackgroundColor(float r, float g, float b, float a);
	
	void settingsButton();
	void setSettingsButtonText(std::string label);
	void setSettingsButtonWidth(size_t width);
	void setSettingsButtonHeight(size_t height);
	void setSettingsButtonBorderRadius(float radius);
	void setSettingsButtonBackgroundColor(float r, float g, float b, float a);
	
	void quitButton();
	void setQuitButtonText(std::string label);
	void setQuitButtonWidth(size_t width);
	void setQuitButtonHeight(size_t height);
	void setQuitButtonBorderRadius(float radius);
	void setQuitButtonBackgroundColor(float r, float g, float b, float a);
	
	//Getters
	std::string getStartButtonText();
	size_t getStartButtonWidth();
	size_t getStartButtonHeight();
	float getStartButtonBorderRadius();
	float getStartButtonBackgroundColor();
	
	std::string getSettingsButtonText();
	size_t getSettingsButtonWidth();
	size_t getSettingsButtonHeight();
	float getSettingsButtonBorderRadius();
	float getSettingsButtonBackgroundColor();
	
	std::string getQuitButtonText();
	size_t getQuitButtonWidth();
	size_t getQuitButtonHeight();
	float getQuitButtonBorderRadius();
	float getQuitButtonBackgroundColor();
};

#endif
