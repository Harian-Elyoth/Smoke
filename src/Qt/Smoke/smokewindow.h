#ifndef SMOKEWINDOW_H
#define SMOKEWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QListWidget>
#include <QMessageBox>

#include "CardWidget.h"
#include "DeckWidget.h"

#include "../../GameBoard/Board.h"

QT_BEGIN_NAMESPACE
namespace Ui { class SmokeWindow; }
QT_END_NAMESPACE

class SmokeWindow : public QMainWindow
{
    Q_OBJECT

public:

    SmokeWindow(QWidget *parent = nullptr);
    ~SmokeWindow();
    QHBoxLayout* getHP2(){return handP2;}
    QHBoxLayout* getHP1(){return handP1;}
    QHBoxLayout* getBP2(){return boardP2;}
    QHBoxLayout* getBP1(){return boardP1;}
    DeckWidget* getDP2(){return DP2;}
    DeckWidget* getDP1(){return DP1;}
    Ui::SmokeWindow *ui;

private:
    QGridLayout* gridLayout = new QGridLayout(this);

    QListWidget* HP2 = new QListWidget(this);
    QListWidget* HP1 = new QListWidget(this);
    QListWidget* BP2 = new QListWidget(this);
    QListWidget* BP1 = new QListWidget(this);

    QHBoxLayout *handP2 = new QHBoxLayout(HP2);
    QHBoxLayout *handP1 = new QHBoxLayout(HP1);
    QHBoxLayout *boardP2 = new QHBoxLayout(BP2);
    QHBoxLayout *boardP1 = new QHBoxLayout(BP1);

    DeckWidget* DP2 = new DeckWidget();
    DeckWidget* DP1 = new DeckWidget();

    Board board;

public slots:
    void playCard(CardWidget* card){
        int id = card->getOwner();
        QListWidget* hand;
        QListWidget* battleground;
        int i = 0;

        if(id == board.getP1()->getId()){
            hand = HP1;
            battleground = BP1;
        }
        else{
            hand = HP2;
            battleground = BP1;
        }

        if(board.getActivePlayer()->getId() != id || board.getActivePlayer()->getBattleground()->isFull()) return;

        while(card != (CardWidget*)hand->layout()->itemAt(i)->widget() && i < hand->layout()->count()) i++;
        hand->layout()->takeAt(i);
        battleground->layout()->addWidget(card);
        board.getActivePlayer()->play(*card->Card());
    }

};
#endif // SMOKEWINDOW_H
