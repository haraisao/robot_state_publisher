/*
 * Cross platform macros.
 *
 */
#ifndef ROBOT_STATE_PUBLISHER__DECL_H_
#define ROBOT_STATE_PUBLISHER__DECL_H_

#include <ros/macros.h>

#ifdef ROS_BUILD_SHARED_LIBS  // ros is being built around shared libraries
  #ifdef robot_state_publisher_EXPORTS  // we are building a shared lib/dll
    #define ROBOT_STATE_PUBLISHER_DECL ROS_HELPER_EXPORT
  #else  // we are using shared lib/dll
    #define ROBOT_STATE_PUBLISHER_DECL ROS_HELPER_IMPORT
  #endif
#else  // ros is being built around static libraries
  #define ROBOT_STATE_PUBLISHER_DECL
#endif

#endif