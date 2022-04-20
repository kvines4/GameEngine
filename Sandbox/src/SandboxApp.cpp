#include <GameEngine.h>

class ExampleLayer : public GameEngine::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		ENGINE_INFO("ExampleLayer::Update");

		if (GameEngine::Input::IsKeyPressed(GE_KEY_TAB))
			ENGINE_TRACE("Tab Key is pressed! (poll)");
	}

	void OnEvent(GameEngine::Event& event) override
	{
		if (event.GetEventType() == GameEngine::EventType::KeyPressed)
		{
			auto e = (GameEngine::KeyPressedEvent&)event;
			if (e.GetKeyCode() == GE_KEY_TAB)
				ENGINE_TRACE("Tab Key is pressed! (event)");
			else
				ENGINE_TRACE("{0}", (char)e.GetKeyCode());
		}
	}
};

class Sandbox : public GameEngine::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverlay(new GameEngine::ImGuiLayer());
	}

	~Sandbox()
	{

	}
};

GameEngine::Application* GameEngine::CreateApplication()
{
	return new Sandbox();
}