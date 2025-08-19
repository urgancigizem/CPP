#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    if(argc > 1)
    {
        while(argv[i])
        {
            j = 0;
            while(argv[i][j])
            {
                std::cout << (char) std::toupper(argv[i][j]);
                j++;
            }
            i++;
            if(argv[i])
                std::cout << ' ';
        }
        std::cout << std::endl;
    }
    else 
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
