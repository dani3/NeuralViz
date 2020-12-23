/** @file Main.cpp
 * @brief defines the entry point for the application.
 */
#include <Core/Core.h>
#include <Core/Application.h>

int main(int argc, char* argv[]) {
    NeuralViz::Log::Init();
    LOG_INFO("NeuralViz started");

    QApplication qapp(argc, argv);

    NeuralViz::Application app(qapp);

    return app.Run();
}
