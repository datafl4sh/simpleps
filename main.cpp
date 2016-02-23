/* Simple postscript library - Matteo Cicuttin (c) 2016 */

#include <iostream>
#include "simpleps.h"

int main(void)
{
    using namespace sps;
    
    simpleps ps;
    
    path *p = new path( {point(0,0), point(100,100), point(200,100)} );
    
    ps.add(p);
    
    ps.write("test.ps");
    
    ps.output(std::cout);
}
