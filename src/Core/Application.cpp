/** @file Application.h
 * @brief This class is the main entity that manages the application.
 *
 * It acts as a controller that sits between the model (mainly the morphology)
 * and the view (the renderer).
 */
#include <Core/Application.h>

#include <SWC/SwcReader.h>

namespace NeuralViz {
    Application::Application(int argc, char* argv[], QWidget* parent)
        : QObject(parent)
    {
        LOG_INFO("NeuralViz started");

        m_App = std::make_unique<QApplication>(argc, argv);
        m_Ui = std::make_unique <NeuralViz::GUI::MainView>();

        InitSignals();
    }

    Application::~Application() {
        LOG_INFO("Destroying application");
    }

    int Application::Run() {
        m_Ui->show();
        return m_App->exec();
    }

    void Application::InitSignals() {
        connect(m_Ui.get(), SIGNAL(Exit()), this, SLOT(OnExit()));
        connect(m_Ui.get(), SIGNAL(LoadFile(QString&)), this, SLOT(OnLoadFile(QString&)));
    }

    void Application::OnExit() {
        m_App->quit();
    }

    void Application::OnLoadFile(QString& filePath) {
        LOG_INFO("Loading SWC file: {}", filePath.toStdString());

        m_Neuron = SwcReader::Parse(filePath);
        m_Ui->DrawNeuron(m_Neuron);
    }
}
