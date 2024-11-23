#pragma once
#include <iostream>
#include "useFunc.h"
#include "Initialize.h"
#include "settings.h"
#include "menu.h"

inline const std::string RED = "\033[31m";
inline const std::string GREEN = "\033[32m";
inline const std::string RESET = "\033[0m";

inline Initialize init;
inline menu men;
inline useFunc usef;
inline settings sett;
inline std::string Path = "";
inline std::string pFile = "path.txt";
inline bool bFileExist = true;
inline bool bPathExist = false;
inline bool bRunning = true;
