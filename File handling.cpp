//program for implementing system calls for file manupilation//
//lab outcome: student will be able to
//System calls -stencil

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    fstream file;
    string line;

    file.open("sample.txt", ios::out | ios::in);

    while (file)
        {
            getline(cin, line);
            if (line == "-1")
                break;
            file << line << endl;
        }

    file.seekg(0, ios::beg);

    while (file)
        {
            getline(file, line);
            cout << line << endl;
        }

    file.close();

    return 0;
}
