#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QComboBox>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void setupUI();

protected slots:
    void onsubmit();

private:
    QComboBox ** m_scores;
    int m_nQuestionCount;

};

#endif // MAINWINDOW_H
