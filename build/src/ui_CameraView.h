/********************************************************************************
** Form generated from reading UI file 'CameraView.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERAVIEW_H
#define UI_CAMERAVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "FrameLabel.h"

QT_BEGIN_NAMESPACE

class Ui_CameraView
{
public:
    QVBoxLayout *verticalLayout;
    FrameLabel *frameLabel;
    QFrame *line;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *clearImageBufferButton;
    QLabel *label_4;
    QLabel *imageBufferLabel;
    QLabel *roiLabel;
    QLabel *label_2;
    QLabel *nFramesProcessedLabel;
    QLabel *label_6;
    QLabel *deviceNumberLabel;
    QLabel *label_5;
    QProgressBar *imageBufferBar;
    QLabel *processingRateLabel;
    QLabel *label_1;
    QLabel *captureRateLabel;
    QLabel *nFramesCapturedLabel;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *mouseCursorPosLabel;
    QLabel *cameraResolutionLabel;

    void setupUi(QWidget *CameraView)
    {
        if (CameraView->objectName().isEmpty())
            CameraView->setObjectName(QStringLiteral("CameraView"));
        CameraView->resize(762, 597);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CameraView->sizePolicy().hasHeightForWidth());
        CameraView->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(CameraView);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frameLabel = new FrameLabel(CameraView);
        frameLabel->setObjectName(QStringLiteral("frameLabel"));
        frameLabel->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frameLabel->sizePolicy().hasHeightForWidth());
        frameLabel->setSizePolicy(sizePolicy1);
        frameLabel->setMouseTracking(true);
        frameLabel->setAutoFillBackground(true);
        frameLabel->setFrameShape(QFrame::Box);
        frameLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(frameLabel);

        line = new QFrame(CameraView);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        clearImageBufferButton = new QPushButton(CameraView);
        clearImageBufferButton->setObjectName(QStringLiteral("clearImageBufferButton"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(clearImageBufferButton->sizePolicy().hasHeightForWidth());
        clearImageBufferButton->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(8);
        clearImageBufferButton->setFont(font);

        horizontalLayout->addWidget(clearImageBufferButton);


        gridLayout->addLayout(horizontalLayout, 6, 3, 1, 1);

        label_4 = new QLabel(CameraView);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        imageBufferLabel = new QLabel(CameraView);
        imageBufferLabel->setObjectName(QStringLiteral("imageBufferLabel"));
        sizePolicy2.setHeightForWidth(imageBufferLabel->sizePolicy().hasHeightForWidth());
        imageBufferLabel->setSizePolicy(sizePolicy2);
        imageBufferLabel->setFont(font);
        imageBufferLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(imageBufferLabel, 6, 2, 1, 1);

        roiLabel = new QLabel(CameraView);
        roiLabel->setObjectName(QStringLiteral("roiLabel"));
        sizePolicy2.setHeightForWidth(roiLabel->sizePolicy().hasHeightForWidth());
        roiLabel->setSizePolicy(sizePolicy2);
        roiLabel->setFont(font);

        gridLayout->addWidget(roiLabel, 4, 1, 1, 1);

        label_2 = new QLabel(CameraView);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        nFramesProcessedLabel = new QLabel(CameraView);
        nFramesProcessedLabel->setObjectName(QStringLiteral("nFramesProcessedLabel"));
        sizePolicy2.setHeightForWidth(nFramesProcessedLabel->sizePolicy().hasHeightForWidth());
        nFramesProcessedLabel->setSizePolicy(sizePolicy2);
        nFramesProcessedLabel->setFont(font);
        nFramesProcessedLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(nFramesProcessedLabel, 3, 2, 1, 1);

        label_6 = new QLabel(CameraView);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        deviceNumberLabel = new QLabel(CameraView);
        deviceNumberLabel->setObjectName(QStringLiteral("deviceNumberLabel"));
        sizePolicy2.setHeightForWidth(deviceNumberLabel->sizePolicy().hasHeightForWidth());
        deviceNumberLabel->setSizePolicy(sizePolicy2);
        deviceNumberLabel->setFont(font);
        deviceNumberLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(deviceNumberLabel, 0, 1, 1, 1);

        label_5 = new QLabel(CameraView);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        imageBufferBar = new QProgressBar(CameraView);
        imageBufferBar->setObjectName(QStringLiteral("imageBufferBar"));
        sizePolicy2.setHeightForWidth(imageBufferBar->sizePolicy().hasHeightForWidth());
        imageBufferBar->setSizePolicy(sizePolicy2);
        imageBufferBar->setFont(font);
        imageBufferBar->setValue(0);

        gridLayout->addWidget(imageBufferBar, 6, 1, 1, 1);

        processingRateLabel = new QLabel(CameraView);
        processingRateLabel->setObjectName(QStringLiteral("processingRateLabel"));
        sizePolicy2.setHeightForWidth(processingRateLabel->sizePolicy().hasHeightForWidth());
        processingRateLabel->setSizePolicy(sizePolicy2);
        processingRateLabel->setFont(font);

        gridLayout->addWidget(processingRateLabel, 3, 1, 1, 1);

        label_1 = new QLabel(CameraView);
        label_1->setObjectName(QStringLiteral("label_1"));
        sizePolicy2.setHeightForWidth(label_1->sizePolicy().hasHeightForWidth());
        label_1->setSizePolicy(sizePolicy2);
        label_1->setFont(font1);
        label_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_1, 6, 0, 1, 1);

        captureRateLabel = new QLabel(CameraView);
        captureRateLabel->setObjectName(QStringLiteral("captureRateLabel"));
        captureRateLabel->setEnabled(true);
        sizePolicy2.setHeightForWidth(captureRateLabel->sizePolicy().hasHeightForWidth());
        captureRateLabel->setSizePolicy(sizePolicy2);
        captureRateLabel->setFont(font);

        gridLayout->addWidget(captureRateLabel, 2, 1, 1, 1);

        nFramesCapturedLabel = new QLabel(CameraView);
        nFramesCapturedLabel->setObjectName(QStringLiteral("nFramesCapturedLabel"));
        sizePolicy2.setHeightForWidth(nFramesCapturedLabel->sizePolicy().hasHeightForWidth());
        nFramesCapturedLabel->setSizePolicy(sizePolicy2);
        nFramesCapturedLabel->setFont(font);
        nFramesCapturedLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(nFramesCapturedLabel, 2, 2, 1, 1);

        label_3 = new QLabel(CameraView);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_7 = new QLabel(CameraView);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setFont(font1);

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        mouseCursorPosLabel = new QLabel(CameraView);
        mouseCursorPosLabel->setObjectName(QStringLiteral("mouseCursorPosLabel"));
        sizePolicy2.setHeightForWidth(mouseCursorPosLabel->sizePolicy().hasHeightForWidth());
        mouseCursorPosLabel->setSizePolicy(sizePolicy2);
        mouseCursorPosLabel->setFont(font);

        gridLayout->addWidget(mouseCursorPosLabel, 5, 1, 1, 1);

        cameraResolutionLabel = new QLabel(CameraView);
        cameraResolutionLabel->setObjectName(QStringLiteral("cameraResolutionLabel"));
        sizePolicy2.setHeightForWidth(cameraResolutionLabel->sizePolicy().hasHeightForWidth());
        cameraResolutionLabel->setSizePolicy(sizePolicy2);
        cameraResolutionLabel->setFont(font);
        cameraResolutionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(cameraResolutionLabel, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(0, 1);

        retranslateUi(CameraView);

        QMetaObject::connectSlotsByName(CameraView);
    } // setupUi

    void retranslateUi(QWidget *CameraView)
    {
        CameraView->setWindowTitle(QApplication::translate("CameraView", "Form", 0));
        clearImageBufferButton->setText(QApplication::translate("CameraView", "Clear Image Buffer", 0));
        label_4->setText(QApplication::translate("CameraView", "Camera Device Number:", 0));
        imageBufferLabel->setText(QString());
        roiLabel->setText(QString());
        label_2->setText(QApplication::translate("CameraView", "Capture Rate:", 0));
        nFramesProcessedLabel->setText(QString());
        label_6->setText(QApplication::translate("CameraView", "ROI:", 0));
        label_5->setText(QApplication::translate("CameraView", "Camera Resolution:", 0));
        processingRateLabel->setText(QString());
        label_1->setText(QApplication::translate("CameraView", "Image Buffer:", 0));
        captureRateLabel->setText(QString());
        nFramesCapturedLabel->setText(QString());
        label_3->setText(QApplication::translate("CameraView", "Processing Rate:", 0));
        label_7->setText(QApplication::translate("CameraView", "Cursor:", 0));
        mouseCursorPosLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CameraView: public Ui_CameraView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERAVIEW_H
