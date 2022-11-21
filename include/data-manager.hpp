#include <string>
#include <string.h>
#include <fstream>
#include <iostream>

typedef struct Lsystem_Data
{
    std::string axiom;
    int SCREEN_WIDTH;
    int SCREEN_HEIGHT;
    int red;
    int green;
    int blue;
    int alpha;
    float theta;
    float line_length;
} Lsystem_Data;

class Data_Manager {

    public:
        Data_Manager();
        Lsystem_Data Load(std::string file_path);
        int Assign_Data(Lsystem_Data* ls_data, std::string prop, std::string value);
        void Save();

};