/** @file Application.h
 * @brief This class is the main entity that manages the application.
 *
 * It acts as a controller that sits between the model (mainly the morphology)
 * and the view (the renderer).
 */
#pragma once

#include <Core/Core.h>
#include <GUI/MainView.h>
#include <Morpho/Neuron.h>

#include <Qt3DCore>

namespace NeuralViz {
    class Application : public QObject {
        Q_OBJECT

    public:
        Application(int argc, char* argv[], QWidget* parent = nullptr);
        virtual ~Application();

        int Run();

    private:
        void InitSignals();

    private slots:
        void OnExit();
        void OnLoadFile(QString& filePath);

    private:
        std::unique_ptr<QApplication> m_App;
        std::unique_ptr<NeuralViz::GUI::MainView> m_Ui;

        std::shared_ptr<NeuralViz::Neuron> m_Neuron;
    };
}
