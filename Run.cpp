#include <iostream>
#include <string>
#include <regex>
#include <stdexcept>
#include <vector>
#include <sstream>
#include <cstdlib>

std::string base64_decode(const std::string &in) {
    std::string out;
    std::vector<int> T(256, -1);
    for (int i = 0; i < 64; i++) T["ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[i]] = i;

    int val = 0, valb = -8;
    for (unsigned char c : in) {
        if (T[c] == -1) break;
        val = (val << 6) + T[c];
        valb += 6;
        if (valb >= 0) {
            out.push_back(char((val >> valb) & 0xFF));
            valb -= 8;
        }
    }
    return out;
}

std::string clean_string(const std::string &str) {
    return std::regex_replace(str, std::regex("[^a-zA-Z0-9_\\-]"), "");
}

int main() {
    system("clear");
    std::string encrypted_url;

    std::cout << "  _   _                      _\n | \\ | |                    | |\n |  \\| | ___  ___  ___  __ _| |_ ___ _   _\n | . ` |/ _ \\/ _ \\/ __|/ _` | __/ __| | | |\n | |\\  |  __/ (_) \\__ \\ (_| | |_\\__ \\ |_| |\n |_| \\_|\\___|\\___/|___/\\__,_|\\__|___/\\__,_|" << std::endl;
    std::cout << "   Neosatsu ShortLink Bypass - by Rozhak" << std::endl;

    std::cout << "\n[?] Masukkan URL: ";
    std::getline(std::cin, encrypted_url);

    std::string encrypted_str = encrypted_url.substr(encrypted_url.find("url=") + 4);
    encrypted_str = encrypted_str.substr(encrypted_str.find("/") + 1);

    int missing_padding = encrypted_str.length() % 4;
    if (missing_padding) {
        encrypted_str.append(4 - missing_padding, '=');
    }

    std::string decoded_str = base64_decode(encrypted_str);

    std::string cleaned_str = clean_string(decoded_str);
    cleaned_str = cleaned_str.substr(cleaned_str.find("id=") + 3);

    std::string base_url = "https://drive.google.com/open?";
    std::string decoded_url_cut = base_url + "id=" + cleaned_str.substr(0, 33);
    std::string decoded_url = base_url + "id=" + cleaned_str;

    if (decoded_url != decoded_url_cut) {
        std::cout << "\n[1] Decode URL : " << decoded_url_cut << std::endl;
        std::cout << "[2] Decode URL : " << decoded_url << std::endl;
    } else {
        std::cout << "\n[*] Decode URL : " << decoded_url << std::endl;
    }

    return 0;
}