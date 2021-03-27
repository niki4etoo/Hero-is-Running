#ifndef TERRAIN_H_
#define TERRAIN_H_

#include <cstddef>

struct Texture {
	//to do
};

class Terrain {
	size_t levelID;
	size_t textureID;
	
	size_t blocksCount;
	
	size_t blockPosX;
	size_t blockPosY;
	size_t blockWidth;
	size_t blockHeight;
	
	Texture terrainTexture;
public:
	Terrain(){};
	~Terrain(){};

	void loadTexture(Texture terrainTexture);
	void block(Texture terrainTexture, size_t posX, size_t posY, size_t width = 32, size_t height = 32);
	void blockBy2(Texture terrainTexture, size_t posX, size_t posY, size_t width = 32, size_t height = 32);
	void blockBy4(Texture terrainTexture, size_t posX, size_t posY, size_t width = 32, size_t height = 32);
	
	//Setters
	void setLevelID(size_t levelID);
	void setTextureID(size_t textureID);
	void setBlocksCount(size_t blocksCount);
	void setBlockPosX(size_t posX);
	void setBlockPoxY(size_t posY);
	void setBlockWidth(size_t width);
	void setBlockHeight(size_t height);
	
	//Getters
	size_t getLevelID();
	size_t getTextureID();
	size_t getBlocksCount();
	size_t getBlockPosX();
	size_t getBlockPoxY();
	size_t getBlockWidth();
	size_t getBlockHeight();
};

#endif
