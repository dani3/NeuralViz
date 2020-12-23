/** @file Application.h
 * @brief This class is the main entity that manages the application.
 */
#pragma once

#include <Core/Core.h>

#include <memory>

#include <QtWidgets/QMainWindow>
#include <Qt3DCore>
#include <Qt3DExtras>

#include "ui_MainWindow.h"

namespace NeuralViz {
    class Application : public QMainWindow {
        Q_OBJECT

    public:
        Application(QApplication& app, QWidget* parent = nullptr);
        ~Application();

        int Run();

    private:
        void InitUI();
        void InitCamera();
        void InitSignals();

    public slots:
        void OnExit();

    private:
        QApplication& m_App;
        std::unique_ptr<Qt3DExtras::Qt3DWindow> m_Window;
        std::unique_ptr<Qt3DCore::QEntity> m_Scene;

        Ui::MainWindow m_Ui;
    };
}
