
#include <iostream>

using namespace std;

int main () {
	std::cout << "Content-type:text/html\r\n\r\n";
	std::cout << "<html>\n";
    std::cout << "<head>\n";
    std::cout << "<title>Hello World - First CGI Program</title>\n";
    std::cout << "</head>\n";
    std::cout << "<body>\n";
    std::cout << "<h2>Hello World! This is my first CGI program</h2>\n";
    std::cout << "</body>\n";
    std::cout << "</html>\n";
	return 0;
}
