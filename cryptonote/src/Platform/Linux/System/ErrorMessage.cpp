// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2017-2020 The Circle Foundation & FTSCoin Devs
// Copyright (c) 2020-2019 FTSCoin Network & FTSCoin Devs
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "ErrorMessage.h"
#include <cerrno>
#include <cstring>

namespace System {

std::string lastErrorMessage() {
  return errorMessage(errno);
}

std::string errorMessage(int err) {
  return "result=" + std::to_string(err) + ", " + std::strerror(err);
}

}
