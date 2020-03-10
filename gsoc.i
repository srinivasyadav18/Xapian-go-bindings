%module gsoc
%include <std_string.i>
%include <std_list.i>
%include <std_vector.i>
namespace std{
        %template(StringVector) vector<string>;
        %template(ByteVector) vector<char>;
}
%{      //ignore < > angular brackets...this is library in mine
        #include <gsoc.h>
        #include <gsoc/constants.h>
        #include <gsoc/attributes.h>
        #include <gsoc/stem.h>
        #include <gsoc/database.h>
        #include <gsoc/document.h>
%}
%include <gsoc.h>
%include <gsoc.h>
%include <gsoc/constants.h>
%include <gsoc/attributes.h>
%include <gsoc/stem.h>
%include <gsoc/database.h>
%include <gsoc/document.h>


