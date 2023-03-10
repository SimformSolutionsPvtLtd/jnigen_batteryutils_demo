// Autogenerated by jnigen. DO NOT EDIT!

#include <stdint.h>
#include "dartjni.h"
#include "jni.h"

thread_local JNIEnv* jniEnv;
JniContext jni;

JniContext (*context_getter)(void);
JNIEnv* (*env_getter)(void);

void setJniGetters(JniContext (*cg)(void), JNIEnv* (*eg)(void)) {
  context_getter = cg;
  env_getter = eg;
}

// com.battery.utils.BatteryUtils
jclass _c_BatteryUtils = NULL;

jmethodID _m_BatteryUtils__ctor = NULL;
FFI_PLUGIN_EXPORT
JniResult BatteryUtils__ctor(jobject activity) {
  load_env();
  load_class_gr(&_c_BatteryUtils, "com/battery/utils/BatteryUtils");
  if (_c_BatteryUtils == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_BatteryUtils, &_m_BatteryUtils__ctor, "<init>",
              "(Landroid/app/Activity;)V");
  if (_m_BatteryUtils__ctor == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  jobject _result = (*jniEnv)->NewObject(jniEnv, _c_BatteryUtils,
                                         _m_BatteryUtils__ctor, activity);
  return (JniResult){.result = {.l = to_global_ref(_result)},
                     .exception = check_exception()};
}

jmethodID _m_BatteryUtils__getBatteryStatus = NULL;
FFI_PLUGIN_EXPORT
JniResult BatteryUtils__getBatteryStatus(jobject self_) {
  load_env();
  load_class_gr(&_c_BatteryUtils, "com/battery/utils/BatteryUtils");
  if (_c_BatteryUtils == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  load_method(_c_BatteryUtils, &_m_BatteryUtils__getBatteryStatus,
              "getBatteryStatus", "()I");
  if (_m_BatteryUtils__getBatteryStatus == NULL)
    return (JniResult){.result = {.j = 0}, .exception = check_exception()};
  int32_t _result = (*jniEnv)->CallIntMethod(jniEnv, self_,
                                             _m_BatteryUtils__getBatteryStatus);
  return (JniResult){.result = {.i = _result}, .exception = check_exception()};
}
