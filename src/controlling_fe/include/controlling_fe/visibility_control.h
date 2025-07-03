#ifndef FGC__VISIBILITY_CONTROL_H_
#define FGC__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define FGC_EXPORT __attribute__ ((dllexport))
    #define FGC_IMPORT __attribute__ ((dllimport))
  #else
    #define FGC_EXPORT __declspec(dllexport)
    #define FGC_IMPORT __declspec(dllimport)
  #endif
  #ifdef FGC_BUILDING_LIBRARY
    #define FGC_PUBLIC FGC_EXPORT
  #else
    #define FGC_PUBLIC FGC_IMPORT
  #endif
  #define FGC_PUBLIC_TYPE FGC_PUBLIC
  #define FGC_LOCAL
#else
  #define FGC_EXPORT __attribute__ ((visibility("default")))
  #define FGC_IMPORT
  #if __GNUC__ >= 4
    #define FGC_PUBLIC __attribute__ ((visibility("default")))
    #define FGC_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define FGC_PUBLIC
    #define FGC_LOCAL
  #endif
  #define FGC_PUBLIC_TYPE
#endif
#endif  // FGC__VISIBILITY_CONTROL_H_
// Generated 30-Mar-2025 15:55:18
 