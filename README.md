![image](https://github.com/FTSCoinNetwork/FTSCoin-assets/blob/master/splash.png)

# FTSCoin Desktop (GUI Wallet)
Latest Release: v6.1.2
Maintained by FTSCoin Devs.

## Information
FTSCoin.Network is a decentralized blockchain bank, with deposits and investments paying interest rates, without involvement of financial institutions, powered by 100% open source code.

FTSCoin.Network enables untraceable and anonymous messaging, and a secure way to transfer funds. Using a distributed public ledger, the sender and receiver are kept anonymous, a key concern in a post Snowden world. Hackers cannot trace money or messages when the messages are sent across public networks.

FTSCoin Cryptocurrency (₡FTS) is based on the Cryptonote protocol and runs on a secure peer-to-peer network technology to operate with no central authority. You control the private keys to your funds.

FTSCoin is accessible by anyone in the world regardless of their geographic location or status. Our blockchain is resistant to any kind of analysis. All your FTS transactions and messages are anonymous. FTSCoin avoids many concerns, e.g. technological, environment impact, reputational and security, of Bitcoin, and provides a glimpse of the future.

FTSCoin is open-source, community driven and truly decentralized.

No one owns FTSCoin, everyone can take part.

## Resources
- Web: [FTSCoin.network](https://FTSCoin.network/)
- GitHub: [https://github.com/FTSCoinNetwork/FTSCoin-core](https://github.com/FTSCoinNetwork/FTSCoin-core)
- Discord: [https://discord.gg/YbpHVSd](https://discord.gg/YbpHVSd)
- Twitter: [https://twitter.com/FTSCoinNetwork](https://twitter.com/FTSCoinNetwork)
- Telegram Official (News Feed): [https://t.me/FTSCoinnetwork](https://t.me/FTSCoinnetwork)
- Telegram User Group (Chat Group): [https://t.me/FTSCoinnetworkusers](https://t.me/FTSCoinnetworkusers)
- Medium: [https://medium.com/@FTSCoinNetwork](https://medium.com/@FTSCoinNetwork)
- Reddit: [https://www.reddit.com/r/FTSCoinNetwork/](https://www.reddit.com/r/FTSCoinNetwork/)
- Bitcoin Talk: [https://bitcointalk.org/index.php?topic=4515873](https://bitcointalk.org/index.php?topic=4515873)
- Paperwallet: [https://paperwallet.FTSCoin.network/](https://paperwallet.FTSCoin.network/)

## Compiling FTSCoin from source

### Linux / Ubuntu

##### Prerequisites

Dependencies: GCC 4.7.3 or later, CMake 2.8.6 or later, Boost 1.55 or later, and Qt 5.9 or later.
You may download them from:

- http://gcc.gnu.org/
- http://www.cmake.org/
- http://www.boost.org/
- https://www.qt.io

Alternatively, it may be possible to install them using a package manager.

#### Building

To acquire the source via git and build the release version, run the following commands:

- `cd ~`
- `git clone https://github.com/FTSCoinNetwork/FTSCoin-desktop`
- `cd FTSCoin-wallet`
- `git clone https://github.com/FTSCoinNetwork/FTSCoin-core.git cryptonote`
- `make build-release`
- `mkdir bin && mv build/release/CONCEAL-GUI bin/`
- `make clean`

If the build is successful the binaries will be in the bin folder.

### Windows 10

##### Prerequisites

- Install [Visual Studio 2017 Community Edition](https://www.visualstudio.com/thank-you-downloading-visual-studio/?sku=Community&rel=15&page=inlineinstall)
- When installing Visual Studio, you need to install **Desktop development with C++** and the **VC++ v140 toolchain** components. The option to install the v140 toolchain can be found by expanding the "Desktop development with C++" node on the right. You will need this for the project to build correctly.
- Install [CMake](https://cmake.org/download/)
- Install [Boost 1.67.0](https://boost.teeks99.com/bin/1.67.0/), ensuring you download the installer for MSVC 14.1.
- Install [Qt 5.11.0](https://www.qt.io/download)

##### Building

- From the start menu, open 'x64 Native Tools Command Prompt for vs2017' or run "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\Common7\Tools\VsMSBuildCmd.bat" from any command prompt.
- Edit the CMakeLists.txt file and set the path to QT cmake folder. For example: set(CMAKE_PREFIX_PATH "C:\\Qt\\5.11.0\\msvc2017_64\\lib\\cmake\\").
- `git clone https://github.com/FTSCoinNetwork/FTSCoin-core`
- `git clone https://github.com/FTSCoinNetwork/FTSCoin-wallet`
- Copy the contents of the FTSCoin-core folder into FTSCoin-wallet\cryptonote
- `cd FTSCoin-wallet`
- `mkdir build`
- `cd build`
- `cmake -G "Visual Studio 15 2017 Win64" -DBOOST_LIBRARYDIR:PATH=c:/local/boost_1_67_0 ..` (Or your boost installed dir.)
- `msbuild CONCEAL-GUI.sln /p:Configuration=Release`

If the build is successful the binaries will be in the Release folder.

#### Special Thanks
Special thanks goes out to the developers from Cryptonote, Bytecoin, Monero, Forknote, TurtleCoin, and Masari.