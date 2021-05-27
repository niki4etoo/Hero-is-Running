#ifndef PLAYER_PROFILE_H
#define PLAYER_PROFILE_H

#include <string>

class PlayerProfile {
	unsigned int id;

	//Personal player info
	std::string name;
	std::string lastName;
	std::string middleName;
	
	std::string country;
	std::string city;
	std::string avatarDescription;
	std::string shortDescription;
	
	
	//Game info
	std::string nickname;
	std::string hero;
	unsigned int experience;
	unsigned int level;
	
	//Stats
	//Counts
	size_t numberOfWinning;
	size_t numberOfLosses;
	
public:
	PlayerProfile(std::string name, std::string lastName);
	~PlayerProfile();
	
	//Setters
	void setID(unsigned int id);
	
	void setName(std::string name);
	void setLastName(std::string lastName);
	void setMiddleName(std::string middleName);
	
	void setCountry(std::string country);
	void setCity(std::string city);
	void setAvatarDescription(std::string avatarDescription);
	void setShortDescription(std::string shortDescription);
	
	void setNickname(std::string nickname);
	void setHero(std::string hero);
	void setExperience(unsigned int experience);
	void setLevel(unsigned int level);
	
	void setNumberOfWinning(size_t numberOfWinning);
	void setNumberOfLosses(size_t numberOfLosses);
	
	//Getters
	unsigned int getID();
	
	std::string getName();
	std::string getLastName();
	std::string getMiddleName();
	
	std::string getCountry();
	std::string getCity();
	std::string getAvatarDescription();
	std::string getShortDescription();
	
	std::string getNickname();
	std::string getHero();
	unsigned int getExperience();
	unsigned int getLevel();
	
	size_t getNumberOfWinning();
	size_t getNumberOfLosses();
};

#endif
