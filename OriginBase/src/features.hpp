#pragma once
#include "common.hpp"

namespace Origin::features
{
	void run_tick();
	void script_func();

	/*Test Bool*/
	extern bool testbool;
	void TestBool(bool enable);
}
