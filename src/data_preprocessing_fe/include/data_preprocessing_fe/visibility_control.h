#ifndef data_preprocessing_fe__VISIBILITY_CONTROL_H_
#define data_preprocessing_fe__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define data_preprocessing_fe_EXPORT __attribute__ ((dllexport))
    #define data_preprocessing_fe_IMPORT __attribute__ ((dllimport))
  #else
    #define data_preprocessing_fe_EXPORT __declspec(dllexport)
    #define data_preprocessing_fe_IMPORT __declspec(dllimport)
  #endif
  #ifdef data_preprocessing_fe_BUILDING_LIBRARY
    #define data_preprocessing_fe_PUBLIC data_preprocessing_fe_EXPORT
  #else
    #define data_preprocessing_fe_PUBLIC data_preprocessing_fe_IMPORT
  #endif
  #define data_preprocessing_fe_PUBLIC_TYPE data_preprocessing_fe_PUBLIC
  #define data_preprocessing_fe_LOCAL
#else
  #define data_preprocessing_fe_EXPORT __attribute__ ((visibility("default")))
  #define data_preprocessing_fe_IMPORT
  #if __GNUC__ >= 4
    #define data_preprocessing_fe_PUBLIC __attribute__ ((visibility("default")))
    #define data_preprocessing_fe_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define data_preprocessing_fe_PUBLIC
    #define data_preprocessing_fe_LOCAL
  #endif
  #define data_preprocessing_fe_PUBLIC_TYPE
#endif
#endif  // data_preprocessing_fe__VISIBILITY_CONTROL_H_
// Generated 21-Mar-2025 16:08:58
