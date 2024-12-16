#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

//  Reference => https://www.youtube.com/watch?v=8jLOx1hD3_o
//            => (freeCodeCamp.org)

int main(){

    CivilEngineer ceng1("Maria Gray", 25, "Niagara Falls 15St#32", 43, "Road Length");
 
    // constructors are called from base to the end/tail ( in here, person->engineer->civilengineer)
    // but destructors are called in reverse order than the constructors
    // (so civilengineer->engineer->person in here)
    
    return 0;
}