#include "Peak.h"
#include <iostream>

namespace brain
{
	void Peak::printout(std::ostream& os) const
	{
		std::cout.precision(10);
		os << mz << "\t" << intensity << std::endl;
	}
}