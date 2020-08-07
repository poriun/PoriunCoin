//Copyright (c) 2019 The PIVX developers
//Copyright (c) 2020 The Poriun Coin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef Poriun_ADDRESSHOLDER_H
#define Poriun_ADDRESSHOLDER_H

#include <QWidget>
#include <QColor>
#include "qt/poriun/myaddressrow.h"
#include "qt/poriun/furlistrow.h"
#include "guiutil.h"


class AddressHolder : public FurListRow<QWidget*>
{
public:
    AddressHolder();

    explicit AddressHolder(bool _isLightTheme) : FurListRow(), isLightTheme(_isLightTheme){}

    MyAddressRow* createHolder(int pos) override{
        if (!cachedRow) cachedRow = new MyAddressRow();
        return cachedRow;
    }

    void init(QWidget* holder,const QModelIndex &index, bool isHovered, bool isSelected) const override;

    QColor rectColor(bool isHovered, bool isSelected) override;

    ~AddressHolder() override {
        if (cachedRow)
            delete cachedRow;
    }

    bool isLightTheme;
    MyAddressRow* cachedRow = nullptr;
};


#endif //Poriun_ADDRESSHOLDER_H
