/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *pushButton;
    QLabel *label_3;
    QTextBrowser *logTextEdit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_2;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QSpinBox *spinBox;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QLabel *label_8;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QSpinBox *spinBox_2;
    QPushButton *pushButton_8;
    QLabel *label_10;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QSlider *horizontalSlider;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QLineEdit *savefilename;
    QPushButton *pushButton_12;
    QListWidget *listWidget;
    QLabel *label_12;
    QPushButton *LoadButton;
    QPushButton *RefreshButton;
    QLabel *label_13;
    QListWidget *poseListWidget;
    QSpinBox *poseCountSpinBox;
    QSpinBox *repeatCountSpinBox;
    QPushButton *startSequenceButton;
    QLabel *label_14;
    QLabel *label_15;
    QPushButton *poseCountButton;
    QPushButton *refreshButton;
    QPushButton *selectPoseButton;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(983, 866);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(720, 790, 271, 61));
        label->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(420, 130, 331, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        doubleSpinBox = new QDoubleSpinBox(horizontalLayoutWidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMinimum(0.800000000000000);
        doubleSpinBox->setMaximum(2.000000000000000);
        doubleSpinBox->setSingleStep(0.100000000000000);
        doubleSpinBox->setValue(1.000000000000000);

        horizontalLayout->addWidget(doubleSpinBox);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 10, 561, 51));
        label_3->setAlignment(Qt::AlignCenter);
        logTextEdit = new QTextBrowser(centralwidget);
        logTextEdit->setObjectName(QString::fromUtf8("logTextEdit"));
        logTextEdit->setGeometry(QRect(10, 80, 381, 751));
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(420, 210, 427, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_4);

        doubleSpinBox_2 = new QDoubleSpinBox(horizontalLayoutWidget_2);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setMaximum(6.000000000000000);
        doubleSpinBox_2->setSingleStep(0.100000000000000);
        doubleSpinBox_2->setValue(2.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox_2);

        pushButton_2 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(540, 70, 301, 51));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(500, 310, 411, 51));
        label_6->setAlignment(Qt::AlignCenter);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(420, 360, 101, 48));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(530, 360, 91, 48));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(820, 360, 71, 48));
        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(420, 530, 255, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_7);

        spinBox = new QSpinBox(horizontalLayoutWidget_3);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(9);

        horizontalLayout_3->addWidget(spinBox);

        pushButton_7 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        horizontalLayout_3->addWidget(pushButton_7);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(630, 360, 181, 48));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(500, 420, 411, 51));
        label_8->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(420, 470, 254, 51));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(horizontalLayoutWidget_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_9);

        spinBox_2 = new QSpinBox(horizontalLayoutWidget_4);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMaximum(9);

        horizontalLayout_4->addWidget(spinBox_2);

        pushButton_8 = new QPushButton(horizontalLayoutWidget_4);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        horizontalLayout_4->addWidget(pushButton_8);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(350, 780, 271, 51));
        label_10->setAlignment(Qt::AlignCenter);
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(580, 780, 95, 48));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(10, 37, 131, 41));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(880, 0, 101, 31));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(650, 270, 201, 30));
        horizontalSlider->setMaximum(60);
        horizontalSlider->setValue(20);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalLayoutWidget_5 = new QWidget(centralwidget);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(680, 470, 291, 51));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(horizontalLayoutWidget_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_11);

        savefilename = new QLineEdit(horizontalLayoutWidget_5);
        savefilename->setObjectName(QString::fromUtf8("savefilename"));

        horizontalLayout_5->addWidget(savefilename);

        pushButton_12 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        horizontalLayout_5->addWidget(pushButton_12);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(780, 550, 111, 61));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(680, 540, 142, 41));
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        LoadButton = new QPushButton(centralwidget);
        LoadButton->setObjectName(QString::fromUtf8("LoadButton"));
        LoadButton->setGeometry(QRect(900, 580, 71, 25));
        RefreshButton = new QPushButton(centralwidget);
        RefreshButton->setObjectName(QString::fromUtf8("RefreshButton"));
        RefreshButton->setGeometry(QRect(710, 580, 61, 25));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(490, 610, 411, 51));
        label_13->setAlignment(Qt::AlignCenter);
        poseListWidget = new QListWidget(centralwidget);
        poseListWidget->setObjectName(QString::fromUtf8("poseListWidget"));
        poseListWidget->setGeometry(QRect(620, 650, 111, 61));
        sizePolicy1.setHeightForWidth(poseListWidget->sizePolicy().hasHeightForWidth());
        poseListWidget->setSizePolicy(sizePolicy1);
        poseCountSpinBox = new QSpinBox(centralwidget);
        poseCountSpinBox->setObjectName(QString::fromUtf8("poseCountSpinBox"));
        poseCountSpinBox->setGeometry(QRect(540, 680, 41, 26));
        poseCountSpinBox->setMinimum(1);
        repeatCountSpinBox = new QSpinBox(centralwidget);
        repeatCountSpinBox->setObjectName(QString::fromUtf8("repeatCountSpinBox"));
        repeatCountSpinBox->setGeometry(QRect(850, 680, 41, 26));
        repeatCountSpinBox->setMinimum(1);
        startSequenceButton = new QPushButton(centralwidget);
        startSequenceButton->setObjectName(QString::fromUtf8("startSequenceButton"));
        startSequenceButton->setGeometry(QRect(900, 680, 71, 25));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(420, 670, 151, 51));
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(740, 670, 111, 51));
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        poseCountButton = new QPushButton(centralwidget);
        poseCountButton->setObjectName(QString::fromUtf8("poseCountButton"));
        poseCountButton->setGeometry(QRect(580, 680, 31, 31));
        refreshButton = new QPushButton(centralwidget);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        refreshButton->setGeometry(QRect(440, 710, 71, 25));
        selectPoseButton = new QPushButton(centralwidget);
        selectPoseButton->setObjectName(QString::fromUtf8("selectPoseButton"));
        selectPoseButton->setGeometry(QRect(668, 710, 61, 25));
        MainWindow->setCentralWidget(centralwidget);
        listWidget->raise();
        label->raise();
        horizontalLayoutWidget->raise();
        label_3->raise();
        logTextEdit->raise();
        horizontalLayoutWidget_2->raise();
        label_5->raise();
        label_6->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_6->raise();
        horizontalLayoutWidget_3->raise();
        pushButton_5->raise();
        label_8->raise();
        horizontalLayoutWidget_4->raise();
        label_10->raise();
        pushButton_9->raise();
        pushButton_10->raise();
        pushButton_11->raise();
        horizontalSlider->raise();
        horizontalLayoutWidget_5->raise();
        label_12->raise();
        LoadButton->raise();
        RefreshButton->raise();
        label_13->raise();
        poseListWidget->raise();
        poseCountSpinBox->raise();
        repeatCountSpinBox->raise();
        startSequenceButton->raise();
        label_14->raise();
        label_15->raise();
        poseCountButton->raise();
        refreshButton->raise();
        selectPoseButton->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 983, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:600; color:#3465a4;\">WonikRobotics</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Time ::", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:600;\">Allegro Hand V5 Control Panel</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Grasping force ::", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Apply", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Parameter Panel</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Pre-defined Hand Pose Panel</span></p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Grasp", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Off", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">PdControl Num ::</span></p></body></html>", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Move", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "GravityComp", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Custom Hand Pose Panel</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Save Pose Num ::</span></p></body></html>", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Fingertip Sensor  ::</span></p></body></html>", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Clear log", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Save Pose file ::</span></p></body></html>", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Load Pose ::</span></p></body></html>", nullptr));
        LoadButton->setText(QCoreApplication::translate("MainWindow", "Move", nullptr));
        RefreshButton->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Custom Hand Pose Repeat</span></p></body></html>", nullptr));
        startSequenceButton->setText(QCoreApplication::translate("MainWindow", "start", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Num of Poses ::</span></p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Repeat time ::</span></p></body></html>", nullptr));
        poseCountButton->setText(QCoreApplication::translate("MainWindow", "set", nullptr));
        refreshButton->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        selectPoseButton->setText(QCoreApplication::translate("MainWindow", "select", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
