#ifndef TESTWINDOW_H
#define TESTWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class TestWindow;
}

QT_END_NAMESPACE

class TestWindow : public QWidget
{
    Q_OBJECT

public:
    //explicit TestWindow(QWidget *parent = nullptr);
    TestWindow(QWidget *parent = nullptr);
    ~TestWindow();
private:
    Ui::TestWindow *ui;
;

signals:
};

#endif // TESTWINDOW_H
