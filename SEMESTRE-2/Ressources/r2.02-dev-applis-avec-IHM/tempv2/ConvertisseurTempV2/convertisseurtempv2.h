#ifndef CONVERTISSEURTEMPV2_H
#define CONVERTISSEURTEMPV2_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ConvertisseurTempV2; }
QT_END_NAMESPACE

class ConvertisseurTempV2 : public QMainWindow
{
    Q_OBJECT

public:
    ConvertisseurTempV2(QWidget *parent = nullptr);
    ~ConvertisseurTempV2();


private:
    Ui::ConvertisseurTempV2 *ui;
};
#endif // CONVERTISSEURTEMPV2_H
