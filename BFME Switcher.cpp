

//Includes
#include <iostream>
#include <vector>
#include <string>
#include <filesystem>


//usings
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::filesystem::exists;
using std::filesystem::absolute;
using std::filesystem::current_path;
using std::filesystem::directory_iterator;
using std::filesystem::copy;
using std::filesystem::copy_options;
using std::filesystem::remove;
using std::filesystem::path;
using std::string;

//const
std::error_code code;
const path target = "C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/";
const path folder_v100 = "./1.00/";
const path folder_v103 = "./1.03/";
const path folder_v106 = "./1.06/";
const path folder_v108 = "./1.08/";
const auto copyOptions = copy_options::update_existing
                            | copy_options::recursive;

//do FileExist
int doFileExist(string file) {
    if (exists(file)) {
        return 1;
    }
    return 0;
}


//Downgrade version
void v103Tov100() {
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_frenchpatch103.big");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch103.big");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_frenchpatch102.big");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch102.big");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_frenchpatch101.big");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch101.big");
    copy(folder_v100, target, copyOptions);
    cout << code.message();
    cout << "\n1.03 -> 1.00:\n";
}
void v106Tov103() {
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_frenchpatch106.big");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch105.big");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch106.big");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch106french.big");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch106textures.big");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_WSMaps.big");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/px2xdll.dll");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/patch.doc");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/patchget.dat");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/patchw32.dll");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins000.dat");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins000.exe");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins001.dat");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins001.exe");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins002.dat");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/unins002.exe");
    copy(folder_v103, target, copyOptions);
    cout << code.message();
    cout << "\n1.06 -> 1.03: done\n";
}
void v108Tov106() {
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_WSMaps2.big");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch108french.big");
    remove("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch108.big");
    copy(folder_v106, target, copyOptions);
    cout << code.message();
    cout << "\n1.08 -> 1.06: done\n";
}


//main
int main() {

    //Check installation
    //Check for bfme
    if (!exists(target)) {cout << "ERREUR, BFME n'est pas installe || ERROR, BFME isn't installed \n\n";}
    //check for patch switcher
    if (!exists(folder_v100) || !exists(folder_v100) || !exists(folder_v100) || !exists(folder_v100)) {
        cout << "ERREUR, Le patchswitcher n'est pas installé || ERROR, switcher isnt install \n\n";}

    //Check for installed version
    int version_103 = doFileExist("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch103.big");
    int version_106 = doFileExist("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch106.big");
    int version_108 = doFileExist("C:/Program Files (x86)/EA GAMES/La Bataille pour la Terre du Milieu(tm)/_patch108.big");
    int version = version_103 + version_106 + version_108;



    cout << "Entrez le numero de la version avec laquelle vous souhaitez joeur || Enter the number associate with the version you want to play\n\n";
    int command;
    switch (version) {

    // 1.00
    case 0:
        cout << "Vous etes en 1.00 || You're in version 1.00";
        cout << "\n\n1.03 = 1\n1.06 = 2\n1.08 = 3";
        cin >> command;

        switch (command) {
        case 1: //to 1.03
            copy(folder_v103, target, copyOptions);
            std::cout << code.message();
            break;
        case 2: //to 1.06
            copy(folder_v103, target, copyOptions);
            std::cout << code.message();
            copy(folder_v106, target, copyOptions);
            std::cout << code.message();
            break;
        case 3: //to 1.08
            copy(folder_v103, target, copyOptions);
            std::cout << code.message();
            copy(folder_v106, target, copyOptions);
            std::cout << code.message();
            copy(folder_v108, target, copyOptions);
            std::cout << code.message();
            break;
        default:
            break;
        }
        break;

    //1.03
    case 1:
        cout << "Vous etes en 1.03 || You're in version 1.03";
        cout << "\n\n1.00 = 1\n1.06 = 2\n1.08 = 3";
        cin >> command;

        switch (command) {
        case 1: //to 1.00
            v103Tov100();
            break;
        case 2: //to 1.06
            copy(folder_v106, target, copyOptions);
            std::cout << code.message();
            break;
        case 3: //to 1.08
            copy(folder_v106, target, copyOptions);
            std::cout << code.message();
            copy(folder_v108, target, copyOptions);
            std::cout << code.message();
            break;
        default:
            break;
        }
        break;

    //1.06
    case 2:
        cout << "Vous etes en 1.06 || You're in version 1.06";
        cout << "\n\n1.00 = 1\n1.03 = 2\n1.08 = 3";
        cin >> command;

        switch (command) {
        case 1: //to 1.00
            v106Tov103();
            v103Tov100();
            break;
        case 2: //to 1.03
            v106Tov103();
            break;
        case 3: //to 1.08
            copy(folder_v108, target, copyOptions);
            std::cout << code.message();
            break;
        default:
            break;
        }
        break;

    //1.08
    case 3:
        cout << "Vous etes en 1.08 || You're in version 1.08";
        cout << "\n\n1.00 = 1\n1.03 = 2\n1.06 = 3";
        cin >> command;

        switch (command) {
        case 1: //to 1.00
            v108Tov106();
            v106Tov103();
            v103Tov100();
            break;
        case 2: //to 1.03
            v108Tov106();
            v106Tov103();
            break;
        case 3: //to 1.08
            v108Tov106();
            break;
        default:
            break;
        }
        break;
    default:
        cout << "Error";
        return EXIT_FAILURE;
    }
    char a;
    cout << "Appuyez ENTRER pour fermer || Press ENTER to continue";
    cin >> a;
    
    return EXIT_SUCCESS;
}