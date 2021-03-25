#include "../../include/level/terrain.h"

void Terrain::loadTexture(Texture terrainTexture){
		//Load Texture into the object
		this->terrainTexture = terrainTexture;
}

void Terrain::block(Texture terrainTexture, size_t posX, size_t posY, size_t width, size_t height){
	this->terrainTexture = terrainTexture;
	this->blockPosX = posX;
	this->blockPosY = posY;
	this->blockWidth = width;
	this->blockHeight = height;
	
	this->blocksCount = 1;
}

void Terrain::blockBy4(Texture terrainTexture, size_t posX, size_t posY, size_t width, size_t height){
	this->terrainTexture = terrainTexture;
	this->blockPosX = posX;
	this->blockPosY = posY;
	this->blockWidth = width;
	this->blockHeight = height;
	
	this->blocksCount = 4;
}
