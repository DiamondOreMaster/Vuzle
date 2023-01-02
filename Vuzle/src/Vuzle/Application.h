#pragma once

#include "Core.h"

namespace Vuzle {

	class VUZLE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}