#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <random>
#include <algorithm>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:

    void on_btnQLoad_clicked();

    void on_btnAnswer1_clicked();

    void on_btnAnswer2_clicked();

    void on_btnAnswer3_clicked();

    void on_btnAnswer4_clicked();

    void readQuestions();

    void newGame();

    void pickQuestion();

    void on_btnCheck_clicked();

private:
    Ui::MainWindow *ui;

    QStringList allQuestionList;
    QStringList fullQuestionList;
    QStringList semiQuestionList;
    QStringList finalQuestionList;
    QStringList question;
    QStringList answer;

    bool answer1Clicked = false;
    bool answer2Clicked = false;
    bool answer3Clicked = false;
    bool answer4Clicked = false;

    bool answered = true;
    bool checked = false;
    bool lose = false;

    int iterQuestion = 0;
    int result = 0;


};
#endif // MAINWINDOW_H
