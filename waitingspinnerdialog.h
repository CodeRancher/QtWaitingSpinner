#ifndef WAITINGSPINNERDIALOG_H
#define WAITINGSPINNERDIALOG_H

#include <memory>
using namespace std;

#include <QDialog>

#include "waitingspinnerwidget.h"

namespace Ui {
class WaitingSpinnerDialog;
}

class WaitingSpinnerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WaitingSpinnerDialog(QWidget *parent = nullptr);
    ~WaitingSpinnerDialog();

    void setMessage(const QString msg);

    void setColor(QColor color) { getWaitingSpinner()->setColor(color); }
    void setRoundness(qreal roundness) { getWaitingSpinner()->setRoundness(roundness); }
    void setMinimumTrailOpacity(qreal minimumTrailOpacity) { getWaitingSpinner()->setMinimumTrailOpacity(minimumTrailOpacity); }
    void setTrailFadePercentage(qreal trail) { getWaitingSpinner()->setTrailFadePercentage(trail); }
    void setRevolutionsPerSecond(qreal revolutionsPerSecond) { getWaitingSpinner()->setRevolutionsPerSecond(revolutionsPerSecond); }
    void setNumberOfLines(int lines) { getWaitingSpinner()->setNumberOfLines(lines); }
    void setLineLength(int length) { getWaitingSpinner()->setLineLength(length); }
    void setLineWidth(int width) { getWaitingSpinner()->setLineWidth(width); }
    void setInnerRadius(int radius) { getWaitingSpinner()->setInnerRadius(radius); }
    void setText(QString text) { getWaitingSpinner()->setText(text); }

    void start() { getWaitingSpinner()->start(); }
    void stop() { getWaitingSpinner()->stop(); }

    using Ptr = unique_ptr<WaitingSpinnerDialog>;
    static Ptr factory(QWidget *parent = nullptr) {
        Ptr dialog = make_unique<WaitingSpinnerDialog>(parent);
        dialog->show();
        return dialog;
    }

private:
    Ui::WaitingSpinnerDialog *ui;

    static const QString m_waitingSpinnerName;
    static const QString m_messageLabelName;

    WaitingSpinnerWidget *getWaitingSpinner();

};

#endif // WAITINGSPINNERDIALOG_H
