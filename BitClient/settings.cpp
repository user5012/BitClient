#include "settings.h"
#include "fstream"
#include "Globals.h"

void settings::removeNowPath()
{
    std::fstream file;
    file.open(pFile);
    file << "";
    file.close();
}

void settings::addPath(std::string path)
{
    std::fstream file;

    if (!bFileExist) {
        file.open(pFile, std::fstream::out);
        file << path;
    }
    removeNowPath();
    file.open(pFile);
    file << path;
    file.close();
}

