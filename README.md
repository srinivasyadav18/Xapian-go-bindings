# Xapian-go-bindings

STEP 1 :
  FIRST using swig we pass the interface file gsoc 
  
  swig -I(pathforheaders) -c++ -go -cgo -intgosize 32/64 interface.i
  
STEP 2 :
  RUN THE getbindings.sh 

  
