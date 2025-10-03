#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <thread>

#include <minoizer.h>

/**
 * Waits for n seconds and then returns n.
 */
int long_running_function(int n)
{
    std::this_thread::sleep_for(std::chrono::seconds(n));

    return n;
}

int main()
{
    printf("This should have taken a few seconds: long_running_function(8) = %d\n",
           memo(&long_running_function, 8));
    printf("This should have taken some time too: lrf(7) = %d\n",
           memo(&long_running_function, 7));

    printf("... but this should have gone much faster: lrf(8) = %d; lrf(7) = %d!\n",
           memo(&long_running_function, 8), memo(&long_running_function, 7));

    return EXIT_SUCCESS;
}
