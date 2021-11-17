#pragma once
#include "Core.h"

namespace TwoD {
	class DD App
	{
	public:
		App();
		virtual ~App();

		void Run();
	};

	App* CreateApp();
}

