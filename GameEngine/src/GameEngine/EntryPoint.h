#pragma once

#ifdef ENGINE_PLATFORM_WINDOWS

extern GameEngine::Application* GameEngine::CreateApplication();

int main(int argc, char** argv)
{
	GameEngine::Log::Init();
	ENGINE_CORE_WARN("Initialised Log!");
	int a = 5;
	ENGINE_INFO("Hello! Var={0}", a);

	auto app = GameEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif // ENGINE_PLATFORM_WINDOWS
