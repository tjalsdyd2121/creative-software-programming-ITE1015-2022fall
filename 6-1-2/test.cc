#include <iostream>
#include "test.h"

using namespace std; 

MinimalFighter::MinimalFighter()
{
	    mHp = 0 ; 
	        mPower = 0 ;
		    mStatus = Invalid;
}

MinimalFighter::MinimalFighter(int _hp, int _power)
{
	    mHp = _hp;
	        mPower = _power;
		    if(_hp > 0) mStatus = Alive;
		        else mStatus = Dead;
}

int MinimalFighter::hp()
{
	    return mHp;
}

int MinimalFighter::power()
{
	    return mPower;
}

FighterStatus MinimalFighter::status()
{
	    return mStatus;
}

void MinimalFighter::setHp(int _hp)
{
	    mHp = _hp;
}

void MinimalFighter::hit(MinimalFighter *_enemy)
{
	    (_enemy->mHp) -= mPower;
	        mHp -= (_enemy->mPower);

		    if((_enemy ->mHp) <= 0 ) _enemy->mStatus = Dead;
		        if(mHp <= 0 ) mStatus = Dead;
}

void MinimalFighter::attack(MinimalFighter *_enemy)
{
	    (_enemy->mHp) -= mPower;
	        if(_enemy->mHp <= 0) _enemy->mStatus = Dead;
		    mPower = 0 ; 
}

void MinimalFighter::fight(MinimalFighter *_enemy)
{
	    while (1){
		            if((_enemy->mStatus == Dead) || (mStatus == Dead)) break;
			            MinimalFighter::hit(_enemy);

				        }
	        
}
