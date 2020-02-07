// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2017-2020 The Circle Foundation & FTSCoin Devs
// Copyright (c) 2020-2019 FTSCoin Network & FTSCoin Devs
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "ScopeExit.h"

namespace Tools {

ScopeExit::ScopeExit(std::function<void()>&& handler) :
  m_handler(std::move(handler)),
  m_cancelled(false) {
}

ScopeExit::~ScopeExit() {
  if (!m_cancelled) {
    m_handler();
  }
}

void ScopeExit::cancel() {
  m_cancelled = true;
}

}
