/** @file Main.cpp
 * @brief defines the entry point for the application.
 */
#include <Core/Core.h>
#include <Core/Application.h>

#include <iostream>

int main(int argc, char* argv[]) {
    NeuralViz::Log::Init();
    NeuralViz::Application app(argc, argv);

    return app.Run();
}
