#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include <string>
#include <cstddef>

class MainMenu {
	std::string startBtnText;
	size_t startBtnWidth;
	size_t startBtnHeight;
	size_t startBtnRadius;
	
	std::string settingsBtnText;
	size_t settingsBtnWidth;
	size_t settingsBtnHeight;
	size_t settingsBtnRadius;
	
	std::string quitBtnText;
	size_t quitBtnWidth;
	size_t quitBtnHeight;
	size_t quitBtnRadius;
	
public:
	MainMenu(std::string startBtnText, std::string settingsBtnText, std::string quitBtnText);
	~MainMenu();
	void startButton();
	void setStartButtonText(std::string label);
	void setStartButtonWidth(size_t width);
	void setStartButtonHeight(size_t height);
	void setStartButtonBorderRadius(size_t radius);
	void setStartButtonBackgroundColor(float r, float g, float b, float a);
	
	void settingsButton();
	void setSettingsButtonText(std::string label);
	void setSettingsButtonWidth(size_t width);
	void setSettingsButtonHeight(size_t height);
	void setSettingsButtonBorderRadius(size_t radius);
	void setSettingsButtonBackgroundColor(float r, float g, float b, float a);
	
	void quitButton();
	void setQuitButtonText(std::string label);
	void setQuitButtonWidth(size_t width);
	void setQuitButtonHeight(size_t height);
	void setQuitButtonBorderRadius(size_t radius);
	void setQuitButtonBackgroundColor(float r, float g, float b, float a);
};

#endif
