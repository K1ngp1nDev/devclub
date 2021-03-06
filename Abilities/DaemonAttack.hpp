/*_Created_by_K1ngp1n_*/

#pragma once

#include "../Interfaces/AbstractAttack.hpp"
#include "../Units/Warlock.hpp"

class Warlock;

class DaemonAttack : public AbstractAttack {
	Warlock* w_owner;
	public:
	DaemonAttack(AbstractUnit* _target, Warlock* own);
	~DaemonAttack() override;

	void makeAttack(AbstractUnit *attacker, AbstractUnit *attacked) override ;
	void makeCounterAttack(AbstractUnit *attacker, AbstractUnit *attacked) override;

};



