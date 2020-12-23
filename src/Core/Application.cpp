/** @file Application.h
 * @brief This class is the main entity that manages the application.
 *
 * It acts as a controller that sits between the model (mainly the morphology)
 * and the view (the renderer).
 */
#include <Core/Application.h>

namespace NeuralViz {
    Application::Application(int argc, char* argv[], QWidget* parent)
        : QObject(parent)
    {
        m_App = std::make_unique<QApplication>(argc, argv);
        m_Ui = std::make_unique <NeuralViz::GUI::MainView>();

        InitSignals();
    }

    Application::~Application() {}

    int Application::Run() {
        m_Ui->show();
        return m_App->exec();
    }

    void Application::InitSignals() {
        connect(m_Ui.get(), SIGNAL(Exit()), this, SLOT(OnExit()));
    }

    void Application::OnExit() {
        m_App->quit();
    }
}
