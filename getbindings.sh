mkdir -p work
CGO_LDFLAGS='"-g" "-O2"' go tool cgo -objdir ./work -importpath gsoc -- -I ./work -g -O2 ./gsoc.go
cd work
gcc -I ../ -fPIC -m64 -pthread -fmessage-length=0 -I ./ -g -O2 -o first_go.o -c _cgo_export.c
gcc -I ../ -fPIC -m64 -pthread -fmessage-length=0 -I ./ -g -O2 -o second_go.o -c gsoc.cgo2.c
gcc -I ../ -fPIC -m64 -pthread -fmessage-length=0 -I ./ -g -O2 -o _cgo_main.o -c _cgo_main.c
cd ..
g++ -I . -fPIC -m64 -pthread -fmessage-length=0 -I ./work/ -g -O2 -o ./work/input1.o -c /home/oem/Desktop/gsoc/database.cc
g++ -I . -fPIC -m64 -pthread -fmessage-length=0 -I ./work/ -g -O2 -o ./work/input2.o -c document.cc
g++ -I . -fPIC -m64 -pthread -fmessage-length=0 -I ./work/ -g -O2 -o ./work/input3.o -c stem.cc
g++ -I . -fPIC -m64 -pthread -fmessage-length=0 -I ./work/ -g -O2 -o ./work/input4.o -c gsoc_wrap.cxx
cd work
g++ -fPIC -m64 -pthread -fmessage-length=0 -o _cgo_.o _cgo_main.o first_go.o second_go.o input1.o input2.o input3.o input4.o
go tool cgo -dynpackage gsoc -dynimport _cgo_.o -dynout _cgo_import.go
go tool compile -o gsoc.a -p gsoc -importcfg importcfg -pack -c=4 _cgo_gotypes.go gsoc.cgo1.go _cgo_import.go
go tool pack r gsoc.a first_go.o second_go.o input1.o input2.o input3.o input4.o
mv gsoc.a /usr/local/go/pkg/linux_amd64

#go tool link -o ./work/libgsoc.so -importcfg ./work/importcfg.link -installsuffix dynlink -buildmode=shared -extld=g++ gsoc=/usr/local/go/pkg/linux_amd64_dynlink/gsoc.a runtime/cgo=/usr/local/go/pkg/linux_amd64_dynlink/runtime/cgo.a
# mv $WORK/b017/libgsoc.so /usr/local/go/pkg/linux_amd64_dynlink/libgsoc.so
