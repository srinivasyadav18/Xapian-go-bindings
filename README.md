# Xapian-go-bindings

STEP 1 :
  FIRST using swig we pass the interface file gsoc 
  swig -I(pathforheaders) -c++ -go -cgo -intgosize 32/64 interface.i
  
STEP 2 :
  RUN THE BELOW getbindings.sh file 
  
  getbindings.sh:
  #create a temporary working directory to put the object files and cgo files at oneplace..
  mkdir -p work
  
  CGO_LDFLAGS='"-g" "-O2"' go tool cgo -objdir ./work -importpath gsoc -- -I ./work -g -O2 ./gsoc.go
  #first call go tool cgo to generate required cgo intermediate files and put into work dir
  
  cd work
  #compile and get object files for the cgo files 
  gcc -I ../ -fPIC -m64 -pthread -fmessage-length=0 -I ./ -g -O2 -o first_go.o -c _cgo_export.c
  gcc -I ../ -fPIC -m64 -pthread -fmessage-length=0 -I ./ -g -O2 -o second_go.o -c gsoc.cgo2.c
  gcc -I ../ -fPIC -m64 -pthread -fmessage-length=0 -I ./ -g -O2 -o _cgo_main.o -c _cgo_main.c
  #go back to source dir and compile and get the object of the sources files and wrapper file(target_wrap.cxx)
  cd ..
  
  g++ -I . -fPIC -m64 -pthread -fmessage-length=0 -I ./work/ -g -O2 -o ./work/input1.o -c /home/oem/Desktop/gsoc/database.cc
  g++ -I . -fPIC -m64 -pthread -fmessage-length=0 -I ./work/ -g -O2 -o ./work/input2.o -c document.cc
  g++ -I . -fPIC -m64 -pthread -fmessage-length=0 -I ./work/ -g -O2 -o ./work/input3.o -c stem.cc
  g++ -I . -fPIC -m64 -pthread -fmessage-length=0 -I ./work/ -g -O2 -o ./work/input4.o -c gsoc_wrap.cxx
  cd work
  #merge the objects and output to _cgo_.o
  g++ -fPIC -m64 -pthread -fmessage-length=0 -o _cgo_.o _cgo_main.o first_go.o second_go.o input1.o input2.o input3.o input4.o
  #call the go tool and import _cgo_o to get _cgo_import.go 
  go tool cgo -dynpackage gsoc -dynimport _cgo_.o -dynout _cgo_import.go
  # compile the .go files and create an archive (.a) static lib
  go tool compile -o gsoc.a -p gsoc -importcfg importcfg -pack -c=4 _cgo_gotypes.go gsoc.cgo1.go _cgo_import.go
  #append the object files of the source files to the archive
  go tool pack r gsoc.a first_go.o second_go.o input1.o input2.o input3.o input4.o
  mv gsoc.a /usr/local/go/pkg/linux_amd64
  
