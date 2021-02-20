#include <iostream>

// An example of a callback function
bool updateProgress(int pct) {
  
   std::cout << pct << "%d complete...\n";
   return(true);
}

// A typedef to make for easier reading
 typedef bool (*FuncPtrBoolInt)(int);

// A function that runs for a while
void longOperation(FuncPtrBoolInt f) {

   for (long l = 0; l < 100000000; l++)
      if (l % 1000000 == 0)
         f(l / 1000000);
}


int main(void){


    int c;
    std::cin >> c;
    std::cout << "hereee" << c << std::endl;
    longOperation(updateProgress); // ok


    return 0;
}