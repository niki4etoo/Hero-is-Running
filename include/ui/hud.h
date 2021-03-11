#ifndef HUD_H_
#define HUD_H_

class HUD {
	unsigned int health;
	unsigned int shield;
	unsigned int damage;
	unsigned int points;
	unsigned int time;
public:
	HUD();
	~HUD();
	void healthBar();
	void shieldBar();
	void damageBar();
	void pointsField();
	void timeField();
	
	void resetBars();
	void resetFields();
	
	//Setters
	void setHealth(unsigned int health);
	void setShield(unsigned int shield);
	void setDamage(unsigned int damage);
	void setPoints(unsigned int points);
	void setTime(unsigned int time);
	
	//Getters
	unsigned int getHealth();
	unsigned int getShield();
	unsigned int getDamage();
	unsigned int getPoints();
	unsigned int getTime();
};

#endif
