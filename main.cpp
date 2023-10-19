#include <iostream>

int main() {
    // Примеры использования функций
    char str1[100] = "Hello";
    char str2[100] = ", World!";
    
    // strcpy
    char dest[100];
    strcpy(dest, str1);
    std::cout << "strcpy: " << dest << std::endl;
    
    // strcat
    strcat(dest, str2);
    std::cout << "strcat: " << dest << std::endl;
    
    // strlen
    std::cout << "strlen: " << strlen(dest) << std::endl;
    
    // strcmp
    int result = strcmp(dest, "Hello, World!");
    std::cout << "strcmp: " << result << std::endl;
    
    // strncmp
    result = strncmp(dest, "Hello, Planet!", 5);
    std::cout << "strncmp: " << result << std::endl;
    
    // strchr
    char* found = strchr(dest, 'W');
    std::cout << "strchr: ";
    if (found) {
        std::cout << found << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }
    
    // strstr
    found = strstr(dest, "World");
    std::cout << "strstr: ";
    if (found) {
        std::cout << found << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }
    
    return 0;
}
