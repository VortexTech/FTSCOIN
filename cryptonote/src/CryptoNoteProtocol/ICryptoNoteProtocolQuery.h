// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2017-2020 The Circle Foundation & FTSCoin Devs
// Copyright (c) 2020-2019 FTSCoin Network & FTSCoin Devs
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <cstddef>
#include <cstdint>

namespace CryptoNote {
class ICryptoNoteProtocolObserver;

class ICryptoNoteProtocolQuery {
public:
  virtual bool addObserver(ICryptoNoteProtocolObserver* observer) = 0;
  virtual bool removeObserver(ICryptoNoteProtocolObserver* observer) = 0;

  virtual uint32_t getObservedHeight() const = 0;
  virtual size_t getPeerCount() const = 0;
  virtual bool isSynchronized() const = 0;
};

} //namespace CryptoNote
