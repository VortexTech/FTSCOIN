// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2017-2020 The Circle Foundation & FTSCoin Devs
// Copyright (c) 2020-2019 FTSCoin Network & FTSCoin Devs
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <cstdint>
#include <string>

#include <boost/program_options.hpp>

namespace CryptoNote {

class MinerConfig {
public:
  MinerConfig();

  static void initOptions(boost::program_options::options_description& desc);
  void init(const boost::program_options::variables_map& options);

  std::string extraMessages;
  std::string startMining;
  uint32_t miningThreads;
};

} //namespace CryptoNote