#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    readQuestions();
    newGame();
    ui->setupUi(this);
    QPixmap pixmap("POSTAW NA SZYSKĘ Z TŁEM częsciowym.png");
    int Width = ui->lblLogo->width();
    ui->lblLogo->setPixmap(pixmap.scaledToWidth(Width));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newGame()
{
    iterQuestion = 0;
    result = 0;

    fullQuestionList.clear();
    semiQuestionList.clear();
    finalQuestionList.clear();

    for(int i = 0; i < allQuestionList.size() - 1; i++)
    {
        question = allQuestionList.value(i).split("/");
        QString tmp = allQuestionList.value(i);


        if(question.value(4) == nullptr)
        {
            if(question.value(3) == nullptr)
                finalQuestionList << tmp;
            else
                semiQuestionList << tmp;
        }
        else
            fullQuestionList << tmp;
    }

    std::random_device rd;
    std::mt19937 g(rd());

    shuffle(fullQuestionList.begin(),fullQuestionList.end(),g);
    shuffle(semiQuestionList.begin(),semiQuestionList.end(),g);
    shuffle(finalQuestionList.begin(),finalQuestionList.end(),g);
}

void MainWindow::readQuestions()
{
    QFile questionFile(QString("questions.txt"));

    questionFile.open(QIODevice::ReadOnly);

    const QString data(questionFile.readAll());
    allQuestionList << data.split(";");




}

void MainWindow::pickQuestion()
{

    if(result < 4)
        question = fullQuestionList.value(iterQuestion).split("/");

    else if(result > 3 && result < 7)
        question = semiQuestionList.value(iterQuestion).split("/");

    else
        question = finalQuestionList.value(iterQuestion).split("/");
}

void MainWindow::on_btnQLoad_clicked()
{
    ui->btnQLoad->setText("Następne pytanie");


    if(answered == true){
        ui->lblCheckedAnswer->setText("");
        answer.clear();

        ui->lblResult->setText(QString::number(result));

        if(result == 4)
            iterQuestion = 0;

        if(result == 7)
            iterQuestion = 0;

        answered = false;
        checked = false;

        pickQuestion();

        answer.push_back(question.value(1));
        answer.push_back(question.value(2));
        if(question.value(3) != nullptr)
            answer.push_back(question.value(3));
        if(question.value(4) != nullptr)
            answer.push_back(question.value(4));

        std::random_device rd;
        std::mt19937 g(rd());

        shuffle(answer.begin(),answer.end(),g); //mieszanie odpowiedzi

        ui->lblQuestion->setText(question.value(0).trimmed());   //wyswietlanie pytania i odpowiedzi
        ui->btnAnswer1->setText(answer.value(0));
        ui->btnAnswer2->setText(answer.value(1));
        if(question.value(3) != nullptr)
            ui->btnAnswer3->setText(answer.value(2));
        else
            ui->btnAnswer3->setText("");
        if(question.value(4) != nullptr)
            ui->btnAnswer4->setText(answer.value(3));
        else
            ui->btnAnswer4->setText("");
    }

    iterQuestion++;
}

void MainWindow::on_btnAnswer1_clicked()
{
    answer1Clicked = true;
    answer2Clicked = false;
    answer3Clicked = false;
    answer4Clicked = false;

    checked = true;

    ui->lblCheckedAnswer->setText(ui->btnAnswer1->text());
}

void MainWindow::on_btnAnswer2_clicked()
{
    answer1Clicked = false;
    answer2Clicked = true;
    answer3Clicked = false;
    answer4Clicked = false;

    checked = true;

    ui->lblCheckedAnswer->setText(ui->btnAnswer2->text());
}

void MainWindow::on_btnAnswer3_clicked()
{
    answer1Clicked = false;
    answer2Clicked = false;
    answer3Clicked = true;
    answer4Clicked = false;

    checked = true;

    ui->lblCheckedAnswer->setText(ui->btnAnswer3->text());
}

void MainWindow::on_btnAnswer4_clicked()
{
    answer1Clicked = false;
    answer2Clicked = false;
    answer3Clicked = false;
    answer4Clicked = true;

    checked = true;

    ui->lblCheckedAnswer->setText(ui->btnAnswer4->text());
}

void MainWindow::on_btnCheck_clicked()
{
    if(checked){


        if(answer1Clicked)
        {
            if(ui->btnAnswer1->text() == question.value(1))
                result++;
            else
            {
                ui->lblResult->setText("Wynik");
                lose = true;
            }

        }

        else if(answer2Clicked)
        {
            if(ui->btnAnswer2->text() == question.value(1))
                result++;
            else
            {
                ui->lblResult->setText("Wynik");
                lose = true;
            }

        }

        else if(answer3Clicked)
        {
            if(ui->btnAnswer3->text() == question.value(1))
                result++;
            else
            {
                ui->lblResult->setText("Wynik");
                lose = true;
            }

        }

        else if(answer4Clicked)
        {
            if(ui->btnAnswer4->text() == question.value(1))
                result++;
            else
            {
                ui->lblResult->setText("Wynik");
                lose = true;
            }

        }

        answer1Clicked = false;
        answer2Clicked = false;
        answer3Clicked = false;
        answer4Clicked = false;

        answered = true;
        checked = false;

        ui->lblCheckedAnswer->setText("Prawidłowa odpowiedź: " + question.value(1));

    }

    ui->lblResult->setText(QString::number(result));

    if(lose)
    {
        newGame();
        ui->btnQLoad->setText("Nowa gra");
        ui->lblQuestion->setText("Upsss...");
        lose = false;
    }

    if(result == 8)
    {
        newGame();
        ui->btnQLoad->setText("Nowa Gra");
        ui->lblQuestion->setText("GRATULACJE!");
    }
}
