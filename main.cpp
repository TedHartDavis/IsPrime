#include <iostream>
int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "Too few arguments" << std::endl;
        return 1;
    }
    else
    {
        //std::string currarg;
        bool NotPrime;
        int num;
        int i, j;

        for(i=1; i<argc; i++)
        {
            NotPrime = false;
            num = std::stoi(argv[i]);
            //std::istringstream ss(argv);
            //currarg = argv[i];
            //ss >> num;
            if(num%2==0)
            {
                NotPrime=true;
            }
            else
            {
                for(j=2;j<(num/2);j++)
                {
                    if (j%2==0)
                    {
                        continue;
                    }
                    else if (num%j==0)
                    {
                        NotPrime = true;
                        break;
                    }
                }
            }
            if (NotPrime)
            {
                std::cout << num << " appears to not be prime" << std::endl;
            }
            else
            {
                std::cout << num << " appears to be prime" << std::endl;
            }

        }

    }
    return 0;
}
