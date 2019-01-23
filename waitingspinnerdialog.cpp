#include "waitingspinnerdialog.h"
#include "ui_waitingspinnerdialog.h"


const QString WaitingSpinnerDialog::m_waitingSpinnerName = "waitingSpinner";
const QString WaitingSpinnerDialog::m_messageLabelName = "messageLabel";

WaitingSpinnerDialog::WaitingSpinnerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WaitingSpinnerDialog)
{
    ui->setupUi(this);
}

WaitingSpinnerDialog::~WaitingSpinnerDialog()
{
    delete ui;
}

void WaitingSpinnerDialog::setMessage(const QString msg)
{
    findChild<QLabel*>(m_messageLabelName)->setText(msg);
}

WaitingSpinnerWidget *WaitingSpinnerDialog::getWaitingSpinner()
{
    return findChild<WaitingSpinnerWidget*>(m_waitingSpinnerName);
}
