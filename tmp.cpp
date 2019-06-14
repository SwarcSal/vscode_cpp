#include <iostream>
using namespace std;

struct s{
    int i;
    int *p;
};

int main(int argc, char *argv[])
{
    struct s s1;
    int *p = &(s1.i);
    cout << "hello world!" << endl;
    return 0;
}