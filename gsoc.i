%module gsoc
%include <std_string.i>
%include <std_list.i>
%include <std_vector.i>
namespace std{
        %template(StringVector) vector<string>;
        %template(ByteVector) vector<char>;
}
%{      
        #include "gsoc.h"
        #include "constants.h"
        #include "attributes.h"
        #include "stem.h"
        #include "database.h"
        #include "document.h"
%}

%include "constants.h"
%include "attributes.h"
%include "stem.h"
%include "database.h"
%include "document.h"


