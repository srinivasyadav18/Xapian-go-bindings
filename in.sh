if ! hash go 2>/dev/null
then
	echo "please install go and configure your go path correctly"
	echo "visit golang.org for more information"
	exit 1
fi

go env GOROOT > goroot.txt
GOROOT="$(cat goroot.txt)"
rm -r goroot.txt

echo "GOROOT" "${GOROOT}"

SRCDIR="$(pwd)"
echo "SRCDIR" "${SRCDIR}"

SWIGFLAGS="$(xapian-config-1.5 --swigflags)"
echo "SWIGFLAGS" "${SWIGFLAGS}"

swig ${SWIGFLAGS} -c++ -cgo -go -intgosize 64 go.i

mkdir ${GOROOT}/src/xapian

cp * ${GOROOT}/src/xapian

sed '17 i \#cgo pkg-config : xapian-core-1.5' xapian.go > xapian2.go
mv xapian2.go xapian.go 

go install -a -x

