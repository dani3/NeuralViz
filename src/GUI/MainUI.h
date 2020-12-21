#pragma once

#include <memory>

#include <QtWidgets/QMainWindow>
#include <Qt3DCore>
#include <Qt3DExtras>

#include <Morpho/Neuron.h>

#include "ui_MainWindow.h"

namespace NeuralViz {
    namespace GUI {
        class MainUI : public QMainWindow {
            Q_OBJECT

        public:
            MainUI(QWidget* parent = Q_NULLPTR);

        private:
            Ui::MainWindow m_Ui;

            std::unique_ptr<Qt3DExtras::Qt3DWindow> m_Window;
            std::unique_ptr<Qt3DCore::QEntity> m_Scene;
        };
    }
}
