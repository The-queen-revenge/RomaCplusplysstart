#include <iostream>
int main() {
    char **strOfStr = new char*[16];

    for (unsigned i = 0; i < 16; i++) {
        strOfStr[i] = new char[255];

        for (unsigned k = 0; k < 255; k++)
            strOfStr[i][k] = 0;

        std::cout << "Enter the string: ";
        std::cin.getline(strOfStr[i], 255);
    }

    char firstSymbol, lastSymbol;

    printf("Enter necessary first symbol and last by space, responsibility: ");
    scanf("%s %s", &firstSymbol, &lastSymbol);

    for (unsigned i = 0; i < 16; i++) {
        unsigned len = 0;
        char localFirstSymbol = strOfStr[i][0], localLastSymbol;

        for (unsigned k = 0; k < 255; k++)
            if (strOfStr[i][k] == 0) {
                if (k != 0)
                    localLastSymbol = strOfStr[i][k - 1];

                break;
            } else
                len++;

        if (firstSymbol == localFirstSymbol && lastSymbol == localLastSymbol && !(len % 2))
            printf("Matching string: %s", strOfStr[i]);
    }

    for (unsigned i = 0; i < 16; i++)
        delete[] strOfStr[i];

    delete[] strOfStr;

    return 0;
}