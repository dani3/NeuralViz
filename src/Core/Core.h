#include <Core/Log.h>

#include <memory>
#include <QtCore>

#ifdef ENABLE_ASSERTS
#	define ASSERT(x, ...) { if (!(x)) { LOG_ERROR("Assertion failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
#	define ASSERT(x, ...)
#endif
