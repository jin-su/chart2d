#include "FrmMain.h"

FrmMain::FrmMain(QWidget *parent)
    : QMainWindow(parent)
{
    _chart = new Chart(this);
    setCentralWidget(_chart);
}

FrmMain::~FrmMain()
{

}
