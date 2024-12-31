#include <iostream>
#include <string>
#include <cstdlib>
#include <thread>
#include <chrono>

namespace fs = std::filesystem;
using namespace std;

void slowPrint(const string& text, unsigned int millis_per_char) {
    for (const char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(millis_per_char));
    }
}

int main() {
    system("sudo apt install -y figlet");
    system("clear");
    system("figlet -f /usr/share/figlet/big.flf \"xdfce2gnome\"");

    int userinput;

    cout << "\t\t\t\t\t\tcoded by @srp1337";
    cout << endl;
    cout << "\t\t\t\t\t\ttelegram @spearblack";
    cout << endl << endl << endl;
    slowPrint("Select Options\n\n\a", 20);
    slowPrint("\033[31m[1] Download GNOME(gdm3)\033[0m\n", 5);
    slowPrint("\033[31m[2] Delete LightDM\033[0m\n\n", 5);
    slowPrint("F2> ", 10);
    cin >> userinput;

    if (userinput == 1) {
        system("clear");
        system("figlet -f /usr/share/figlet/big.flf \"xdfce2gnome\"");
        cout << endl << endl;
        system("sudo apt update && sudo apt install kali-desktop-gnome -y && sudo reboot");
    }
    else if (userinput == 2) {
        system("clear");
        system("figlet -f /usr/share/figlet/big.flf \"xdfce2gnome\"");
        cout << endl << endl;
        system("sudo apt purge kali-desktop-xfce xfce4* lightdm -y && sudo apt autoremove -y");
        system("firefox https://github.com/srp1337");
    }
    else {
        system("clear");
        slowPrint("Invalid input.\n", 100);
        system("./xdfce2gnome");
    }

    return 0;
}