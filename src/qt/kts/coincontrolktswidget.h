// Copyright (c) 2019 The PIVX developers
// Copyright (c) 2020 The Klimatas developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLKTSWIDGET_H
#define COINCONTROLKTSWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlKtsWidget;
}

class CoinControlKtsWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlKtsWidget(QWidget *parent = nullptr);
    ~CoinControlKtsWidget();

private:
    Ui::CoinControlKtsWidget *ui;
};

#endif // COINCONTROLKTSWIDGET_H
