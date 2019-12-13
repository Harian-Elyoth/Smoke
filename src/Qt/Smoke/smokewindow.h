#ifndef SMOKEWINDOW_H
#define SMOKEWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SmokeWindow; }
QT_END_NAMESPACE

class SmokeWindow : public QMainWindow
{
    Q_OBJECT

public:
    SmokeWindow(QWidget *parent = nullptr);
    ~SmokeWindow();

private:
    Ui::SmokeWindow *ui;
};
#endif // SMOKEWINDOW_H
