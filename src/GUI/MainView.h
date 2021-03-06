#pragma once

#include <Core/Core.h>

#include <QtWidgets/QMainWindow>
#include <Qt3DCore>
#include <Qt3DExtras>

#include "ui_MainWindow.h"

namespace NeuralViz {
    namespace GUI {
        class MainView : public QMainWindow {
            Q_OBJECT

        public:
            MainView(QWidget* parent = Q_NULLPTR);
            virtual ~MainView();

        private:
            void InitCamera();
            void InitSignals();

        signals:
            void Exit();
            void LoadFile(QString& filePath);

        private slots:
            void OnLoadFile();

        private:
            Ui::MainWindow m_Ui;

            std::unique_ptr<Qt3DExtras::Qt3DWindow> m_Window;
            std::unique_ptr<Qt3DCore::QEntity> m_Scene;
        };
    }
}
