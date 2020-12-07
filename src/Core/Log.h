#pragma once

#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>

// Log macros
#define LOG_TRACE(...)      NeuralViz::Log::GetLogger()->trace(__VA_ARGS__)
#define LOG_INFO(...)       NeuralViz::Log::GetLogger()->info(__VA_ARGS__)
#define LOG_WARN(...)       NeuralViz::Log::GetLogger()->warn(__VA_ARGS__)
#define LOG_ERROR(...)      NeuralViz::Log::GetLogger()->error(__VA_ARGS__)

namespace NeuralViz {
	class Log {
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetLogger() { return s_Logger; }

	private:
		static std::shared_ptr<spdlog::logger> s_Logger;
	};
}
