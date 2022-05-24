#ifndef DIALOGUE1_H
#define DIALOGUE1_H

#include <QDialog>

namespace Ui {
class Dialogue1;
}

class Dialogue1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogue1(QWidget *parent = nullptr);
    ~Dialogue1();

private:
    Ui::Dialogue1 *ui;
};

#endif // DIALOGUE1_H
