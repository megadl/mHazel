#pragma once

namespace Hazel {

	class __declspec(dllexport) Application
	{
	public:
		Application();
	    virtual ~Application();

		void run();
	};

	// to be defined in client
	Application* CreateApplication();

}