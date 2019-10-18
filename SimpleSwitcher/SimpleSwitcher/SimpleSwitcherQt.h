#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SimpleSwitcherQt.h"

class SimpleSwitcherQt : public QMainWindow
{
	Q_OBJECT

public:
	SimpleSwitcherQt(QWidget *parent = Q_NULLPTR);

public slots:
	void addTask();

private:
	Ui::SimpleSwitcherQtClass ui;
};