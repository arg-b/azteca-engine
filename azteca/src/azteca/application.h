#pragma once

#include "core.h"

namespace azteca
{
	class AZTECA_API application
	{
	public:
		application();
		virtual ~application();

		void run();
	};

	// To be defined by the client application
	application* create_application();
}

