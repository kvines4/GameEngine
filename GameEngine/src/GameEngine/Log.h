#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace GameEngine
{
	class ENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define ENGINE_CORE_TRACE(...) ::GameEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ENGINE_CORE_INFO(...)  ::GameEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ENGINE_CORE_WARN(...)  ::GameEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ENGINE_CORE_ERROR(...) ::GameEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ENGINE_CORE_FATAL(...) ::GameEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Core log macros
#define ENGINE_TRACE(...) ::GameEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define ENGINE_INFO(...)  ::GameEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define ENGINE_WARN(...)  ::GameEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ENGINE_ERROR(...) ::GameEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define ENGINE_FATAL(...) ::GameEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)
