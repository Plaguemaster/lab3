    #include "formmater_hello_world.h"

    #include "../formatter_lib/formatter.h"

    #include "../solver_lib/solver.h"
    
 
    std::ostream& formatter(std::ostream& out, const std::string& message)
    {
    return out << "Helo World!!";
    }
