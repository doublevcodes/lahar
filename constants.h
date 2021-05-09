
#ifndef LAHAR_CONSTANTS_H
#define LAHAR_CONSTANTS_H

/* Functions */
std::string construct_information_string();

/* Lahar constants */
#define LAHAR_VERSION "0.0.1a1"

/* Operating system */
#if defined(_AIX) || defined(__TOS_AIX__)
#define OS "aix"
#elif defined(__ANDROID__)
#define OS "android"
#elif defined(UTS)
#define OS "amdahl_uts"
#elif defined(AMIGA) || defined(__amigaos__)
#define OS "amiga"
#elif defined(aegis)
#define OS "apollo_aegis"
#elif defined(apollo)
#define OS "apollo"
#elif defined(__BEOS__)
#define OS "be_os"
#elif defined(__bg__) || defined(__THW_BLUEGENE__)
#define OS "blue_gene"
#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
#if defined(__GLIBC__)
#define OS "gnu_kfreebsd"
#else
#define OS "free_bsd"
#endif
#elif defined(__NetBSD__)
#define OS "net_bsd"
#elif defined(__OpenBSD__)
#define OS "open_bsd"
#elif defined(__bsdi__)
#define OS "bsdi"
#elif defined(__DragonFly__)
#define OS "dragon_fly"
#elif defined(_SYSTYPE_BSD)
#define OS "bsd"
#elif defined(__convex__)
#define OS "convex"
#elif defined(__CYGWIN__)
#define OS "cygwin"
#elif defined(DGUX) || defined(__DGUX__) || defined(__dgux__)
#define OS "dg_ux"
#elif defined(_SEQUENT_) || defined(sequent)
#define OS "dynix_ptx"
#elif defined(__ECOS)
#define OS "ecos"
#elif defined(__EMX__)
#define OS "emx"
#elif defined(__GNU__) || defined(__gnu_hurd__)
#define OS "gnu_hurd"
#elif defined(__gnu_linux__)
#define OS "gnu_linux"
#elif defined(__hiuxmpp)
#define OS "hi_ux_mpp"
#elif defined(hpux) || defined(_hpux) || defined(__hpux)
#define OS "hp_ux"
#elif defined(__OS400__)
#define OS "ibm_os_400"
#elif defined(__INTEGRITY)
#define OS "integrity"
#elif defined(__INTERIX)
#define OS "interix"
#elif defined(sgi) || defined(__sgi)
#define OS "irix"
#elif defined(linux) || defined(__linux) || defined(__linux__)
#define OS "linux"
#elif defined(__Lynx__)
#define OS "lynx"
#elif defined(Macintosh) || defined(macintosh)
#define OS "mac_os_9"
#elif defined(__APPLE__) && defined(__MACH__)
#define OS "mac_os_x"
#elif defined(__OS9000) || defined(_OSK)
#define OS "microware9"
#elif defined(__minix)
#define OS "minix"
#elif defined(__MORPHOS__)
#define OS "morph"
#elif defined(mpeix) || defined(__mpexl)
#define OS "mpe_ix"
#elif defined(MSDOS) || defined(_MSDOS) || defined(__MSDOS__) || defined(__DOS__)
#define OS "msdos"
#elif defined(__TANDEM)
#define OS "nonstop"
#elif defined(__nucleus__)
#define OS "nucleus_rtos"
#elif defined(OS2) || defined(_OS2) || defined(__OS2__) || defined(__TOS_OS2__)
#define OS "os2"
#elif defined(__palmos__)
#define OS "palm"
#elif defined(EPLAN9)
#define OS "plan9"
#elif defined(pyr)
#define OS "pyramid"
#elif defined(__QNX__) || defined(__QNXNTO__)
#define OS "qnx"
#elif defined(sinux)
#define OS "rel_unix"
#elif defined(M_I386) || defined(M_XENIX) || defined(_SCO_DS)
#define OS "sco_openserver"
#elif defined(sun) || defined(__sun)
#define OS "solaris"
#elif defined(__VOS__)
#define OS "stratus_vos"
#elif defined(__sysv__) || defined(__svr4__) || defined(__SVR4) || defined(_SYSTYPE_SVR4)
#elif defined(__SYLLABLE__)
#define OS "syllable"
#elif defined(__SYMBIAN32__)
#define OS "symbian"
#elif defined(__osf) || defined(__osf__)
#define OS "tru64"
#elif defined(ultrix) || defined(__ultrix) || defined(__ultrix__) || (defined(unix) && defined(vax))
#define OS "ultrix"
#elif defined(_UNICOS)
#define OS "unicos"
#elif defined(_CRAY) || defined(__crayx1)
#define OS "unicos_mp"
#elif defined(__unix__) || defined(__unix)
#define OS "unix"
#elif defined(sco) || defined(_UNIXWARE7)
#define OS "unixware"
#elif defined(_UWIN)
#define OS "u_win"
#elif defined(VMS) || defined(__VMS)
#define OS "vms"
#elif defined(__vxworks) || defined(__VXWORKS__)
#define OS "vxworks"
#elif defined(_WIN16) || defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) || defined(__TOS_WIN__) || defined(__WINDOWS__)
#define OS "windows"
#elif defined(_WIN32_WCE)
#define OS "windows_ce"
#elif defined(_WINDU_SOURCE)
#define OS "wind_U"
#elif defined(__MVS__) || defined(__HOS_MVS__) || defined(__TOS_MVS__)
#define OS "z_os"
#endif

#endif //LAHAR_CONSTANTS_H
