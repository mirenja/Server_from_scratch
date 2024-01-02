#include <iostream>
#include <filesystem>
using namespace std;
int main() {
const filesystem::path index{ R"(C:\Windows\System32\kernel32.dll)" };
cout << "Root name: " << kernel32.root_name()
    << "\nRoot directory: " << kernel32.root_directory()w << "\nRoot path: " << kernel32.root_path()x
<< "\nRelative path: " << kernel32.relative_path()y << "\nParent path: " << kernel32.parent_path()z