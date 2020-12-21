#include <Core/Core.h>

#include <GUI/MainUI.h>

#include <QtGui>
#include <Qt3DRender>

namespace NeuralViz {
    namespace GUI {
        MainUI::MainUI(QWidget* parent)
            : QMainWindow(parent)
        {
            m_Ui.setupUi(this);
            m_Scene = std::make_unique<Qt3DCore::QEntity>();

            // Embed the 3D window in a layout.
            m_Window = std::make_unique<Qt3DExtras::Qt3DWindow>();
            m_Ui.HorizontalLayout->addWidget(QWidget::createWindowContainer(m_Window.get()));

            // Set gray background
            m_Window.get()->defaultFrameGraph()->setClearColor(QColor(QRgb(0x333333)));
            m_Window.get()->defaultFrameGraph()->setFrustumCullingEnabled(true);

            // camera
            Qt3DRender::QCamera* camera = m_Window.get()->camera();
            camera->lens()->setPerspectiveProjection(45.0f, 16.0f / 9.0f, 0.1f, 1000.0f);
            camera->setPosition(QVector3D(0, 0, 40.0f));
            camera->setViewCenter(QVector3D(0, 0, 0));

            // manipulator
            Qt3DExtras::QOrbitCameraController* manipulator = new Qt3DExtras::QOrbitCameraController(m_Scene.get());
            manipulator->setLinearSpeed(50.f);
            manipulator->setLookSpeed(180.f);
            manipulator->setCamera(camera);

            m_Window.get()->setRootEntity(m_Scene.get());
        }
    }
}
