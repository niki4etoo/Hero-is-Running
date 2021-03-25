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
	void blockBy4(Texture terrainTexture, size_t posX, size_t posY, size_t width = 32, size_t height = 32);
};

#endif
