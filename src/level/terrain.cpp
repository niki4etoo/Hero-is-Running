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

void blockBy2(Texture terrainTexture, size_t posX, size_t posY, size_t width, size_t height){
	this->terrainTexture = terrainTexture;
	this->blockPosX = posX;
	this->blockPosY = posY;
	this->blockWidth = width;
	this->blockHeight = height;
	
	this->blocksCount = 2;
}

void Terrain::blockBy4(Texture terrainTexture, size_t posX, size_t posY, size_t width, size_t height){
	this->terrainTexture = terrainTexture;
	this->blockPosX = posX;
	this->blockPosY = posY;
	this->blockWidth = width;
	this->blockHeight = height;
	
	this->blocksCount = 4;
}

//Setters
void Terrain::setLevelID(size_t levelID){
	this->levelID = levelID;
}

void Terrain::setTextureID(size_t textureID){
	this->textureID = textureID;
}

void Terrain::setBlocksCount(size_t blocksCount){
	this->blocksCount = blocksCount;
}

void Terrain::setBlockPosX(size_t posX){
	this->blockPosX = posX;
}

void Terrain::setBlockPoxY(size_t posY){
	this->blockPъ
	osY = posY;
}

void Terrain::setBlockWidth(size_t width){
	this->blockWidth = width;
}

void Terrain::setBlockHeight(size_t height){
	this->blockHeight = height;
}

//Getters
size_t Terrain::getLevelID(){
	return this->levelID;
}

size_t Terrain::getTextureID(){
	return this->textureID;
}

size_t Terrain::getBlocksCount(){
	return this->blocksCount;
}

size_t Terrain::getBlockPosX(){
	return this->blockPosX;
}

size_t Terrain::getBlockPoxY(){
	return this->blockPosY;
}

size_t Terrain::getBlockWidth(){
	return this->blockWidth;
}

size_t Terrain::getBlockHeight(){
	return this->blockHeight;
}
