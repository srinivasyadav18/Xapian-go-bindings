mkdir -p work
cd /usr/local/go/src/xapian
CGO_LDFLAGS='"-g" "-O2" "-lxapian-1.5" "-I/home/test/xapian/xapian-core/include"' /usr/local/go/pkg/tool/linux_amd64/cgo -objdir work -importpath xapian -- -lxapian-1.5 -I/home/test/xapian/xapian-core/include -I ./work -g -O2 -lxapian-1.5 -I/home/test/xapian/xapian-core/include ./xapian.go
cd work
gcc -I /usr/local/go/src/xapian -fPIC -m64 -pthread -fmessage-length=0 -lxapian-1.5 -I/home/test/xapian/xapian-core/include -I ./ -g -O2 -lxapian-1.5 -I/home/test/xapian/xapian-core/include -o /usr/local/go/src/xapian/work/first.o -c _cgo_export.c
gcc -I /usr/local/go/src/xapian -fPIC -m64 -pthread -fmessage-length=0 -lxapian-1.5 -I/home/test/xapian/xapian-core/include -I ./ -g -O2 -lxapian-1.5 -I/home/test/xapian/xapian-core/include -o /usr/local/go/src/xapian/work/second.o -c xapian.cgo2.c
gcc -I /usr/local/go/src/xapian -fPIC -m64 -pthread -fmessage-length=0 -lxapian-1.5 -g -O2 -lxapian-1.5 -I/home/test/xapian/xapian-core/include -o /usr/local/go/src/xapian/work/_cgo_main.o -c _cgo_main.c
cd ..
g++ -I . -fPIC -m64 -pthread -fmessage-length=0 -lxapian-1.5 -I ./work/ -g -O2 -lxapian-1.5 -I/home/test/xapian/xapian-core/include -o ./work/wrap.o -c go_wrap.cxx
g++ -I . -fPIC -m64 -pthread -fmessage-length=0 -o ./work/_cgo_.o ./work/_cgo_main.o ./work/first.o ./work/second.o ./work/wrap.o -g -O2 -lxapian-1.5 -I/home/test/xapian/xapian-core/include
TERM='dumb' /usr/local/go/pkg/tool/linux_amd64/cgo -dynpackage xapian -dynimport ./work/_cgo_.o -dynout ./work/_cgo_import.go
cat >./work/importcfg << 'EOF' # internal
# import config
packagefile runtime/cgo=/usr/local/go/pkg/linux_amd64/runtime/cgo.a
packagefile sync=/usr/local/go/pkg/linux_amd64/sync.a
packagefile syscall=/usr/local/go/pkg/linux_amd64/syscall.a
EOF
/usr/local/go/pkg/tool/linux_amd64/compile -o ./work/xapian.a -p xapian -std -importcfg ./work/importcfg -pack -c=4 ./work/_cgo_gotypes.go ./work/xapian.cgo1.go ./work/_cgo_import.go
/usr/local/go/pkg/tool/linux_amd64/pack r ./work/xapian.a ./work/first.o ./work/second.o ./work/wrap.o # internal
mv ./work/xapian.a /usr/local/go/pkg/linux_amd64
