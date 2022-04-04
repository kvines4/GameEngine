#include "enginepch.h"
#include "Application.h"

#include "GameEngine/Events/ApplicationEvents.h"
#include "GameEngine/Log.h"

namespace GameEngine
{
	Application::Application()
	{
		
	}

	Application::~Application()
	{
		
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		ENGINE_TRACE(e);

		while (true);
	}
}