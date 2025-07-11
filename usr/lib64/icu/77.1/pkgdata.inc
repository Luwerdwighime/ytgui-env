GENCCODE_ASSEMBLY_TYPE=-a gcc
SO=so
SOBJ=so
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.77.1
COMPILE=aarch64-unknown-linux-gnu-gcc -D_REENTRANT  -DU_HAVE_ELF_H=1 -DU_HAVE_STRTOD_L=1 -DU_HAVE_XLOCALE_H=0  -DU_DISABLE_RENAMING=1 -DU_ALL_IMPLEMENTATION -DU_ATTRIBUTE_DEPRECATED= -O2 -pipe -mtune=native -std=c11 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -c
LIBFLAGS=-I/usr/include -DPIC -fPIC
GENLIB=aarch64-unknown-linux-gnu-gcc -O2 -pipe -mtune=native -std=c11 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -Wl,-O1 -Wl,--as-needed -Wl,-z,pack-relative-relocs  -shared -Wl,-Bsymbolic
LDICUDTFLAGS=
LD_SONAME=-Wl,-soname -Wl,
RPATH_FLAGS=
BIR_LDFLAGS=-Wl,-Bsymbolic
AR=aarch64-unknown-linux-gnu-ar
ARFLAGS=r
RANLIB=aarch64-unknown-linux-gnu-ranlib
INSTALL_CMD=/usr/lib/portage/python3.13/ebuild-helpers/xattr/install -c
