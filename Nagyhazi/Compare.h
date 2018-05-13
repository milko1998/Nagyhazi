#pragma once
#include "Targy.h"
 struct Compare
{
	static bool osszehasonlit (Targy* a, Targy* b)
	{
			return a->getName() < b->getName();
	}
};