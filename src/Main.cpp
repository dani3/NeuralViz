/** @file Main.cpp
 * @brief defines the entry point for the application.
 */
#include <Core/Core.h>

#include <GUI/MainUI.h>

int main(int argc, char* argv[]) {
    NeuralViz::Log::Init();
    LOG_INFO("NeuralViz started");

    QApplication app(argc, argv);

    NeuralViz::GUI::MainUI mainUi;
    mainUi.setWindowState(Qt::WindowMaximized);
    mainUi.show();

    return app.exec();
}
