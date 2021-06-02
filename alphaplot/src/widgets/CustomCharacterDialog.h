#ifndef CUSTOMCHARACTERDIALOG_H
#define CUSTOMCHARACTERDIALOG_H

#include <QDialog>

namespace Ui {
  class CustomCharacterDialog;
}

class CustomCharacterDialog : public QDialog
{
  Q_OBJECT

public:
  explicit CustomCharacterDialog(QWidget *parent = nullptr);
  ~CustomCharacterDialog();

signals:
  void customChar(int value);

private:
  Ui::CustomCharacterDialog *ui;
};

#endif // CUSTOMCHARACTERDIALOG_H