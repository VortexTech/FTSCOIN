// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2017-2020 The Circle Foundation & FTSCoin Devs
// Copyright (c) 2020-2019 FTSCoin Network & FTSCoin Devs
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <mutex>
#include "CommonLogger.h"

namespace Logging {

class StreamLogger : public CommonLogger {
public:
  StreamLogger(Level level = DEBUGGING);
  StreamLogger(std::ostream& stream, Level level = DEBUGGING);
  void attachToStream(std::ostream& stream);

protected:
  virtual void doLogString(const std::string& message) override;

protected:
  std::ostream* stream;

private:
  std::mutex mutex;
};

}