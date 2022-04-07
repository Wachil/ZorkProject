#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    inline static MainWindow *instance = nullptr;
    void print(QString string);
    QString read_wordle();
    Ui::MainWindow *ui;
    void showPlay();
    void hidePlay();
    void showWordle();
    void hideWordle();
    void hideMenu();
    void showMenu();
    void hideGameOver();
    void showGameOver();
    void showWin();
    void hideWin();
    void print_welcome();
    void resetRoomInventory();

private slots:
    void on_pushButtonNorth_clicked();

    void on_pushButtonSouth_clicked();

    void on_pushButtonWest_clicked();

    void on_pushButtonEast_clicked();

    void on_pushButtonTP_clicked();

    void on_pushButtonMap_clicked();

    void on_pushButtonHystory_clicked();

    void on_pushButtonInfos_clicked();

    void on_pushButton_attack_clicked();

    void on_pushButton_validate_clicked();

    void on_pushButton_play_clicked();

    void on_pushButton_restart_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_info_room_clicked();

    void on_pushButton_use_clicked();

    void on_pushButton_tomenu_clicked();

private:
};
#endif // MAINWINDOW_H
