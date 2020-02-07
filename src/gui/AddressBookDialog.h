// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2018 The Circle Foundation & FTSCoin Devs
// Copyright (c) 2018-2019 FTSCoin Network & FTSCoin Devs
//  
// Copyright (c) 2018 The Circle Foundation & FTSCoin Devs
// Copyright (c) 2018-2019 FTSCoin Network & FTSCoin Devs
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QDialog>

namespace Ui {
class AddressBookDialog;
}

namespace WalletGui {

class AddressBookDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(AddressBookDialog)

public:
  explicit AddressBookDialog(QWidget* _parent);
  ~AddressBookDialog();

  QString getAddress() const;
  QString getPaymentID() const;

private:
  QScopedPointer<Ui::AddressBookDialog> m_ui;
};

}
