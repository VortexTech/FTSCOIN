// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2018 The Circle Foundation & FTSCoin Devs
// Copyright (c) 2018-2019 FTSCoin Network & FTSCoin Devs
//  
// Copyright (c) 2018 The Circle Foundation & FTSCoin Devs
// Copyright (c) 2018-2019 FTSCoin Network & FTSCoin Devs
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QSortFilterProxyModel>

namespace WalletGui {

class SortedAddressListModel : public QSortFilterProxyModel {
  Q_OBJECT

public:
  static SortedAddressListModel& instance();

protected:

private:
  SortedAddressListModel();
  ~SortedAddressListModel();
};

}
