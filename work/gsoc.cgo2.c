
#line 1 "cgo-builtin-prolog"
#include <stddef.h> /* for ptrdiff_t and size_t below */

/* Define intgo when compiling with GCC.  */
typedef ptrdiff_t intgo;

#define GO_CGO_GOSTRING_TYPEDEF
typedef struct { const char *p; intgo n; } _GoString_;
typedef struct { char *p; intgo n; intgo c; } _GoBytes_;
_GoString_ GoString(char *p);
_GoString_ GoStringN(char *p, int l);
_GoBytes_ GoBytes(void *p, int n);
char *CString(_GoString_);
void *CBytes(_GoBytes_);
void *_CMalloc(size_t);

__attribute__ ((unused))
static size_t _GoStringLen(_GoString_ s) { return (size_t)s.n; }

__attribute__ ((unused))
static const char *_GoStringPtr(_GoString_ s) { return s.p; }

#line 15 "/usr/local/go/src/gsoc/gsoc.go"

#define intgo swig_intgo
typedef void *swig_voidp;

#include <stdint.h>


typedef long long intgo;
typedef unsigned long long uintgo;



typedef struct { char *p; intgo n; } _gostring_;
typedef struct { void* array; intgo len; intgo cap; } _goslice_;


typedef long long swig_type_1;
typedef long long swig_type_2;
typedef long long swig_type_3;
typedef long long swig_type_4;
typedef _gostring_ swig_type_5;
typedef _gostring_ swig_type_6;
typedef _gostring_ swig_type_7;
typedef long long swig_type_8;
typedef long long swig_type_9;
typedef long long swig_type_10;
typedef long long swig_type_11;
typedef _gostring_ swig_type_12;
typedef _gostring_ swig_type_13;
extern void _wrap_Swig_free_gsoc_028db1e2336ef482(uintptr_t arg1);
extern uintptr_t _wrap_Swig_malloc_gsoc_028db1e2336ef482(swig_intgo arg1);
extern uintptr_t _wrap_new_StringVector__SWIG_0_gsoc_028db1e2336ef482(void);
extern uintptr_t _wrap_new_StringVector__SWIG_1_gsoc_028db1e2336ef482(swig_type_1 arg1);
extern swig_type_2 _wrap_StringVector_size_gsoc_028db1e2336ef482(uintptr_t arg1);
extern swig_type_3 _wrap_StringVector_capacity_gsoc_028db1e2336ef482(uintptr_t arg1);
extern void _wrap_StringVector_reserve_gsoc_028db1e2336ef482(uintptr_t arg1, swig_type_4 arg2);
extern _Bool _wrap_StringVector_isEmpty_gsoc_028db1e2336ef482(uintptr_t arg1);
extern void _wrap_StringVector_clear_gsoc_028db1e2336ef482(uintptr_t arg1);
extern void _wrap_StringVector_add_gsoc_028db1e2336ef482(uintptr_t arg1, swig_type_5 arg2);
extern swig_type_6 _wrap_StringVector_get_gsoc_028db1e2336ef482(uintptr_t arg1, swig_intgo arg2);
extern void _wrap_StringVector_set_gsoc_028db1e2336ef482(uintptr_t arg1, swig_intgo arg2, swig_type_7 arg3);
extern void _wrap_delete_StringVector_gsoc_028db1e2336ef482(uintptr_t arg1);
extern uintptr_t _wrap_new_ByteVector__SWIG_0_gsoc_028db1e2336ef482(void);
extern uintptr_t _wrap_new_ByteVector__SWIG_1_gsoc_028db1e2336ef482(swig_type_8 arg1);
extern swig_type_9 _wrap_ByteVector_size_gsoc_028db1e2336ef482(uintptr_t arg1);
extern swig_type_10 _wrap_ByteVector_capacity_gsoc_028db1e2336ef482(uintptr_t arg1);
extern void _wrap_ByteVector_reserve_gsoc_028db1e2336ef482(uintptr_t arg1, swig_type_11 arg2);
extern _Bool _wrap_ByteVector_isEmpty_gsoc_028db1e2336ef482(uintptr_t arg1);
extern void _wrap_ByteVector_clear_gsoc_028db1e2336ef482(uintptr_t arg1);
extern void _wrap_ByteVector_add_gsoc_028db1e2336ef482(uintptr_t arg1, char arg2);
extern char _wrap_ByteVector_get_gsoc_028db1e2336ef482(uintptr_t arg1, swig_intgo arg2);
extern void _wrap_ByteVector_set_gsoc_028db1e2336ef482(uintptr_t arg1, swig_intgo arg2, char arg3);
extern void _wrap_delete_ByteVector_gsoc_028db1e2336ef482(uintptr_t arg1);
extern swig_intgo _wrap_GSOC_OPEN_get_gsoc_028db1e2336ef482(void);
extern swig_intgo _wrap_GSOC_CLOSE_get_gsoc_028db1e2336ef482(void);
extern uintptr_t _wrap_new_Stem_gsoc_028db1e2336ef482(void);
extern void _wrap_delete_Stem_gsoc_028db1e2336ef482(uintptr_t arg1);
extern uintptr_t _wrap_Stem_applyStem_gsoc_028db1e2336ef482(uintptr_t arg1, swig_type_12 arg2);
extern void _wrap_func_stem_gsoc_028db1e2336ef482(void);
extern uintptr_t _wrap_new_Database_gsoc_028db1e2336ef482(void);
extern void _wrap_delete_Database_gsoc_028db1e2336ef482(uintptr_t arg1);
extern void _wrap_Database_printId_gsoc_028db1e2336ef482(uintptr_t arg1);
extern swig_intgo _wrap_Database_getId_gsoc_028db1e2336ef482(uintptr_t arg1);
extern void _wrap_Database_setId_gsoc_028db1e2336ef482(uintptr_t arg1, swig_intgo arg2);
extern void _wrap_database_func_gsoc_028db1e2336ef482(void);
extern uintptr_t _wrap_new_Document_gsoc_028db1e2336ef482(void);
extern void _wrap_delete_Document_gsoc_028db1e2336ef482(uintptr_t arg1);
extern void _wrap_Document_display_gsoc_028db1e2336ef482(uintptr_t arg1);
extern _Bool _wrap_Document_insert_gsoc_028db1e2336ef482(uintptr_t arg1, swig_type_13 arg2);
extern void _wrap_Document_NumberOfDocuments_set_gsoc_028db1e2336ef482(swig_intgo arg1);
extern swig_intgo _wrap_Document_NumberOfDocuments_get_gsoc_028db1e2336ef482(void);
#undef intgo

#line 1 "cgo-generated-wrapper"


#line 1 "cgo-gcc-prolog"
/*
  If x and y are not equal, the type will be invalid
  (have a negative array count) and an inscrutable error will come
  out of the compiler and hopefully mention "name".
*/
#define __cgo_compile_assert_eq(x, y, name) typedef char name[(x-y)*(x-y)*-2+1];

/* Check at compile time that the sizes we use match our expectations. */
#define __cgo_size_assert(t, n) __cgo_compile_assert_eq(sizeof(t), n, _cgo_sizeof_##t##_is_not_##n)

__cgo_size_assert(char, 1)
__cgo_size_assert(short, 2)
__cgo_size_assert(int, 4)
typedef long long __cgo_long_long;
__cgo_size_assert(__cgo_long_long, 8)
__cgo_size_assert(float, 4)
__cgo_size_assert(double, 8)

extern char* _cgo_topofstack(void);

/*
  We use packed structs, but they are always aligned.
  The pragmas and address-of-packed-member are only recognized as warning
  groups in clang 4.0+, so ignore unknown pragmas first.
*/
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wpragmas"
#pragma GCC diagnostic ignored "-Waddress-of-packed-member"

#include <errno.h>
#include <string.h>


#define CGO_NO_SANITIZE_THREAD
#define _cgo_tsan_acquire()
#define _cgo_tsan_release()


#define _cgo_msan_write(addr, sz)

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_ByteVector_add_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
		char p1;
		char __pad9[7];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_wrap_ByteVector_add_gsoc_028db1e2336ef482(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_ByteVector_capacity_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
		swig_type_10 r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_ByteVector_capacity_gsoc_028db1e2336ef482(_cgo_a->p0);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_ByteVector_clear_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_wrap_ByteVector_clear_gsoc_028db1e2336ef482(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_ByteVector_get_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
		swig_intgo p1;
		char r;
		char __pad17[7];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_ByteVector_get_gsoc_028db1e2336ef482(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_ByteVector_isEmpty_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
		_Bool r;
		char __pad9[7];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_ByteVector_isEmpty_gsoc_028db1e2336ef482(_cgo_a->p0);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_ByteVector_reserve_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
		swig_type_11 p1;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_wrap_ByteVector_reserve_gsoc_028db1e2336ef482(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_ByteVector_set_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
		swig_intgo p1;
		char p2;
		char __pad17[7];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_wrap_ByteVector_set_gsoc_028db1e2336ef482(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_ByteVector_size_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
		swig_type_9 r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_ByteVector_size_gsoc_028db1e2336ef482(_cgo_a->p0);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_Database_getId_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
		swig_intgo r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_Database_getId_gsoc_028db1e2336ef482(_cgo_a->p0);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_Database_printId_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_wrap_Database_printId_gsoc_028db1e2336ef482(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_Database_setId_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
		swig_intgo p1;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_wrap_Database_setId_gsoc_028db1e2336ef482(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_Document_NumberOfDocuments_get_gsoc_028db1e2336ef482(void *v)
{
	struct {
		swig_intgo r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_Document_NumberOfDocuments_get_gsoc_028db1e2336ef482();
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_Document_NumberOfDocuments_set_gsoc_028db1e2336ef482(void *v)
{
	struct {
		swig_intgo p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_wrap_Document_NumberOfDocuments_set_gsoc_028db1e2336ef482(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_Document_display_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_wrap_Document_display_gsoc_028db1e2336ef482(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_Document_insert_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
		swig_type_13 p1;
		_Bool r;
		char __pad25[7];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_Document_insert_gsoc_028db1e2336ef482(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_GSOC_CLOSE_get_gsoc_028db1e2336ef482(void *v)
{
	struct {
		swig_intgo r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_GSOC_CLOSE_get_gsoc_028db1e2336ef482();
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_GSOC_OPEN_get_gsoc_028db1e2336ef482(void *v)
{
	struct {
		swig_intgo r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_GSOC_OPEN_get_gsoc_028db1e2336ef482();
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_Stem_applyStem_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
		swig_type_12 p1;
		uintptr_t r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_Stem_applyStem_gsoc_028db1e2336ef482(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_StringVector_add_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
		swig_type_5 p1;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_wrap_StringVector_add_gsoc_028db1e2336ef482(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_StringVector_capacity_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
		swig_type_3 r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_StringVector_capacity_gsoc_028db1e2336ef482(_cgo_a->p0);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_StringVector_clear_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_wrap_StringVector_clear_gsoc_028db1e2336ef482(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_StringVector_get_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
		swig_intgo p1;
		swig_type_6 r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_StringVector_get_gsoc_028db1e2336ef482(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_StringVector_isEmpty_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
		_Bool r;
		char __pad9[7];
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_StringVector_isEmpty_gsoc_028db1e2336ef482(_cgo_a->p0);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_StringVector_reserve_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
		swig_type_4 p1;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_wrap_StringVector_reserve_gsoc_028db1e2336ef482(_cgo_a->p0, _cgo_a->p1);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_StringVector_set_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
		swig_intgo p1;
		swig_type_7 p2;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_wrap_StringVector_set_gsoc_028db1e2336ef482(_cgo_a->p0, _cgo_a->p1, _cgo_a->p2);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_StringVector_size_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
		swig_type_2 r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_StringVector_size_gsoc_028db1e2336ef482(_cgo_a->p0);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_Swig_free_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_wrap_Swig_free_gsoc_028db1e2336ef482(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_Swig_malloc_gsoc_028db1e2336ef482(void *v)
{
	struct {
		swig_intgo p0;
		uintptr_t r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_Swig_malloc_gsoc_028db1e2336ef482(_cgo_a->p0);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_database_func_gsoc_028db1e2336ef482(void *v)
{
	struct {
		char unused;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_wrap_database_func_gsoc_028db1e2336ef482();
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_delete_ByteVector_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_wrap_delete_ByteVector_gsoc_028db1e2336ef482(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_delete_Database_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_wrap_delete_Database_gsoc_028db1e2336ef482(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_delete_Document_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_wrap_delete_Document_gsoc_028db1e2336ef482(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_delete_Stem_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_wrap_delete_Stem_gsoc_028db1e2336ef482(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_delete_StringVector_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t p0;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_wrap_delete_StringVector_gsoc_028db1e2336ef482(_cgo_a->p0);
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_func_stem_gsoc_028db1e2336ef482(void *v)
{
	struct {
		char unused;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	_cgo_tsan_acquire();
	_wrap_func_stem_gsoc_028db1e2336ef482();
	_cgo_tsan_release();
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_new_ByteVector__SWIG_0_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_new_ByteVector__SWIG_0_gsoc_028db1e2336ef482();
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_new_ByteVector__SWIG_1_gsoc_028db1e2336ef482(void *v)
{
	struct {
		swig_type_8 p0;
		uintptr_t r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_new_ByteVector__SWIG_1_gsoc_028db1e2336ef482(_cgo_a->p0);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_new_Database_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_new_Database_gsoc_028db1e2336ef482();
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_new_Document_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_new_Document_gsoc_028db1e2336ef482();
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_new_Stem_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_new_Stem_gsoc_028db1e2336ef482();
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_new_StringVector__SWIG_0_gsoc_028db1e2336ef482(void *v)
{
	struct {
		uintptr_t r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_new_StringVector__SWIG_0_gsoc_028db1e2336ef482();
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

CGO_NO_SANITIZE_THREAD
void
_cgo_18ff444bb9ae_Cfunc__wrap_new_StringVector__SWIG_1_gsoc_028db1e2336ef482(void *v)
{
	struct {
		swig_type_1 p0;
		uintptr_t r;
	} __attribute__((__packed__, __gcc_struct__)) *_cgo_a = v;
	char *_cgo_stktop = _cgo_topofstack();
	__typeof__(_cgo_a->r) _cgo_r;
	_cgo_tsan_acquire();
	_cgo_r = _wrap_new_StringVector__SWIG_1_gsoc_028db1e2336ef482(_cgo_a->p0);
	_cgo_tsan_release();
	_cgo_a = (void*)((char*)_cgo_a + (_cgo_topofstack() - _cgo_stktop));
	_cgo_a->r = _cgo_r;
	_cgo_msan_write(&_cgo_a->r, sizeof(_cgo_a->r));
}

