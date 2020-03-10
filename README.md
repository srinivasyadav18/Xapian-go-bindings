# Xapian-go-bindings

This is Just a prototype and how the build happens with swig and go using go tools (cgo , link , compile ,pack)

STEP 1 :
  FIRST using swig we pass the interface file gsoc 
  #ignore <angular brackets> while including headers ..its a lib in mine 
  swig -I(pathforheaders) -c++ -go -cgo -intgosize 32/64 interface.i
  
STEP 2 :
  RUN THE getbindings.sh 

  
