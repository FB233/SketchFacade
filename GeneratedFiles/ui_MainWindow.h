/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionOpen;
    QAction *actionExit;
    QAction *actionPredict;
    QAction *actionNew;
    QAction *actionOpenCGA;
    QAction *actionCuboid;
    QAction *actionLShape;
    QAction *actionAddBuildingMass;
    QAction *actionFixGeometry;
    QAction *actionClearSketch;
    QAction *actionSaveGeometry;
    QAction *actionSketchyRendering;
    QAction *actionViewShadow;
    QAction *actionViewBasicRendering;
    QAction *actionViewSSAO;
    QAction *actionViewLineRendering;
    QAction *actionViewHatching;
    QAction *actionViewSketchyRendering;
    QAction *actionSetting;
    QAction *actionCopyBuildingMass;
    QAction *actionDeleteBuildingMass;
    QAction *actionGrammarWindow;
    QAction *actionViewGroundPlane;
    QAction *actionUndo;
    QAction *actionOpenImage;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuShape;
    QMenu *menuView;
    QMenu *menuOptions;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(1057, 800);
        actionOpen = new QAction(MainWindowClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionExit = new QAction(MainWindowClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionPredict = new QAction(MainWindowClass);
        actionPredict->setObjectName(QStringLiteral("actionPredict"));
        actionNew = new QAction(MainWindowClass);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionOpenCGA = new QAction(MainWindowClass);
        actionOpenCGA->setObjectName(QStringLiteral("actionOpenCGA"));
        actionCuboid = new QAction(MainWindowClass);
        actionCuboid->setObjectName(QStringLiteral("actionCuboid"));
        actionCuboid->setCheckable(true);
        actionLShape = new QAction(MainWindowClass);
        actionLShape->setObjectName(QStringLiteral("actionLShape"));
        actionLShape->setCheckable(true);
        actionAddBuildingMass = new QAction(MainWindowClass);
        actionAddBuildingMass->setObjectName(QStringLiteral("actionAddBuildingMass"));
        actionFixGeometry = new QAction(MainWindowClass);
        actionFixGeometry->setObjectName(QStringLiteral("actionFixGeometry"));
        actionClearSketch = new QAction(MainWindowClass);
        actionClearSketch->setObjectName(QStringLiteral("actionClearSketch"));
        actionSaveGeometry = new QAction(MainWindowClass);
        actionSaveGeometry->setObjectName(QStringLiteral("actionSaveGeometry"));
        actionSketchyRendering = new QAction(MainWindowClass);
        actionSketchyRendering->setObjectName(QStringLiteral("actionSketchyRendering"));
        actionViewShadow = new QAction(MainWindowClass);
        actionViewShadow->setObjectName(QStringLiteral("actionViewShadow"));
        actionViewShadow->setCheckable(true);
        actionViewBasicRendering = new QAction(MainWindowClass);
        actionViewBasicRendering->setObjectName(QStringLiteral("actionViewBasicRendering"));
        actionViewBasicRendering->setCheckable(true);
        actionViewSSAO = new QAction(MainWindowClass);
        actionViewSSAO->setObjectName(QStringLiteral("actionViewSSAO"));
        actionViewSSAO->setCheckable(true);
        actionViewLineRendering = new QAction(MainWindowClass);
        actionViewLineRendering->setObjectName(QStringLiteral("actionViewLineRendering"));
        actionViewLineRendering->setCheckable(true);
        actionViewHatching = new QAction(MainWindowClass);
        actionViewHatching->setObjectName(QStringLiteral("actionViewHatching"));
        actionViewHatching->setCheckable(true);
        actionViewSketchyRendering = new QAction(MainWindowClass);
        actionViewSketchyRendering->setObjectName(QStringLiteral("actionViewSketchyRendering"));
        actionViewSketchyRendering->setCheckable(true);
        actionSetting = new QAction(MainWindowClass);
        actionSetting->setObjectName(QStringLiteral("actionSetting"));
        actionCopyBuildingMass = new QAction(MainWindowClass);
        actionCopyBuildingMass->setObjectName(QStringLiteral("actionCopyBuildingMass"));
        actionDeleteBuildingMass = new QAction(MainWindowClass);
        actionDeleteBuildingMass->setObjectName(QStringLiteral("actionDeleteBuildingMass"));
        actionGrammarWindow = new QAction(MainWindowClass);
        actionGrammarWindow->setObjectName(QStringLiteral("actionGrammarWindow"));
        actionViewGroundPlane = new QAction(MainWindowClass);
        actionViewGroundPlane->setObjectName(QStringLiteral("actionViewGroundPlane"));
        actionViewGroundPlane->setCheckable(true);
        actionUndo = new QAction(MainWindowClass);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionOpenImage = new QAction(MainWindowClass);
        actionOpenImage->setObjectName(QStringLiteral("actionOpenImage"));
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1057, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuShape = new QMenu(menuBar);
        menuShape->setObjectName(QStringLiteral("menuShape"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        MainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuShape->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionClearSketch);
        menuFile->addAction(actionOpenImage);
        menuFile->addAction(actionOpenCGA);
        menuFile->addAction(actionSaveGeometry);
        menuFile->addAction(actionSketchyRendering);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuShape->addAction(actionAddBuildingMass);
        menuShape->addAction(actionCopyBuildingMass);
        menuShape->addAction(actionDeleteBuildingMass);
        menuShape->addSeparator();
        menuShape->addAction(actionUndo);
        menuView->addAction(actionViewShadow);
        menuView->addSeparator();
        menuView->addAction(actionViewBasicRendering);
        menuView->addAction(actionViewSSAO);
        menuView->addAction(actionViewLineRendering);
        menuView->addAction(actionViewHatching);
        menuView->addAction(actionViewSketchyRendering);
        menuView->addSeparator();
        menuView->addAction(actionViewGroundPlane);
        menuOptions->addAction(actionSetting);
        menuOptions->addAction(actionGrammarWindow);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "Sketching Application", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindowClass", "Open", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("MainWindowClass", "Exit", Q_NULLPTR));
        actionPredict->setText(QApplication::translate("MainWindowClass", "Predict", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionPredict->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionNew->setText(QApplication::translate("MainWindowClass", "New", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionOpenCGA->setText(QApplication::translate("MainWindowClass", "Open CGA", Q_NULLPTR));
        actionCuboid->setText(QApplication::translate("MainWindowClass", "Cuboid", Q_NULLPTR));
        actionLShape->setText(QApplication::translate("MainWindowClass", "L-Shape", Q_NULLPTR));
        actionAddBuildingMass->setText(QApplication::translate("MainWindowClass", "Add Building Mass", Q_NULLPTR));
        actionFixGeometry->setText(QApplication::translate("MainWindowClass", "Fix", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionFixGeometry->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionClearSketch->setText(QApplication::translate("MainWindowClass", "Clear Sketch", Q_NULLPTR));
        actionSaveGeometry->setText(QApplication::translate("MainWindowClass", "Save Geometry", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSaveGeometry->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSketchyRendering->setText(QApplication::translate("MainWindowClass", "Sketchy Rendering", Q_NULLPTR));
        actionViewShadow->setText(QApplication::translate("MainWindowClass", "Shadow", Q_NULLPTR));
        actionViewBasicRendering->setText(QApplication::translate("MainWindowClass", "Basic Rendering", Q_NULLPTR));
        actionViewSSAO->setText(QApplication::translate("MainWindowClass", "SSAO", Q_NULLPTR));
        actionViewLineRendering->setText(QApplication::translate("MainWindowClass", "Line Rendering", Q_NULLPTR));
        actionViewHatching->setText(QApplication::translate("MainWindowClass", "Hatching", Q_NULLPTR));
        actionViewSketchyRendering->setText(QApplication::translate("MainWindowClass", "Sketchy Rendering", Q_NULLPTR));
        actionSetting->setText(QApplication::translate("MainWindowClass", "Setting", Q_NULLPTR));
        actionCopyBuildingMass->setText(QApplication::translate("MainWindowClass", "Copy Building Mass", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionCopyBuildingMass->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionDeleteBuildingMass->setText(QApplication::translate("MainWindowClass", "Delete Building Mass", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionDeleteBuildingMass->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionGrammarWindow->setText(QApplication::translate("MainWindowClass", "Grammar Window", Q_NULLPTR));
        actionViewGroundPlane->setText(QApplication::translate("MainWindowClass", "Ground Plane", Q_NULLPTR));
        actionUndo->setText(QApplication::translate("MainWindowClass", "Undo", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionUndo->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionOpenImage->setText(QApplication::translate("MainWindowClass", "Open Image", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindowClass", "File", Q_NULLPTR));
        menuShape->setTitle(QApplication::translate("MainWindowClass", "Edit", Q_NULLPTR));
        menuView->setTitle(QApplication::translate("MainWindowClass", "View", Q_NULLPTR));
        menuOptions->setTitle(QApplication::translate("MainWindowClass", "Options", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
