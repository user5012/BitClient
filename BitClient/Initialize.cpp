#include "Initialize.h"
#include "Globals.h"
#include "fstream"
#include <string>


//checks if file path.txt exists
void Initialize::FileExist()
{
    FILE* file = nullptr;
    if (fopen_s(&file ,pFile.c_str(), "r") ==0 ) {
        fclose(file);
        bFileExist = true;
        usef.debug("File exists!: " + pFile, false, false);
    }
    else
    {
        bFileExist = false;
        usef.debug("File doesn't exists", true, false);
    }
}

//checks if path exists in file
void Initialize::checkIfPath()
{
    if (bFileExist) {
        std::ifstream file(pFile);
        std::string path;
        if (file.is_open()) {
            std::getline(file, path);
            file.close();
        }
        if (path != "") {
            Path = path;
            bPathExist = true;
            std::cout << "Path: " + Path + "\n";
            usef.debug("path exists: " + Path, false, false);
        }
        else {
            usef.debug("path doesnt exist", true, false);
            bPathExist = false;
        }
    }
    else bPathExist = false;
}

void Initialize::getPath()
{
    std::cout << "Enter download path: ";
    std::cin >> Path;
}

//initializes app
void Initialize::Init()
{
    FileExist();
    checkIfPath();
    if (!bPathExist) {
        getPath();
    }
    sett.addPath(Path);
}



