//#pragma once

#ifndef CHARACTER_H
#define CHARACTER_H


#include "Raylib.h"
#include "BaseCharacter.h"

class Character : public BaseCharacter
{
public:
	Character(int winWidth, int winHeight);
	virtual void tick(float deltaTime) override;
private:

};

#endif // !CHARACTER_H