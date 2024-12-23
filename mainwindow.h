#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void updateLabelSquare(double value);
    void toggleButtons();
    void syncDateEditWithCalendar(const QDate &date);
    void syncCalendarWithDateEdit();
    void updateRadioStatus();
    void updateColor();

private:
    Ui::MainWindow *ui;

    void setupConnections();
};

#endif // MAINWINDOW_H
