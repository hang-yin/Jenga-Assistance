// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from plan_execute_interface:srv/GoHere.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "plan_execute_interface/srv/detail/go_here__rosidl_typesupport_introspection_c.h"
#include "plan_execute_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "plan_execute_interface/srv/detail/go_here__functions.h"
#include "plan_execute_interface/srv/detail/go_here__struct.h"


// Include directives for member types
// Member `start_pose`
// Member `goal_pose`
#include "geometry_msgs/msg/pose.h"
// Member `start_pose`
// Member `goal_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__GoHere_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plan_execute_interface__srv__GoHere_Request__init(message_memory);
}

void plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__GoHere_Request_fini_function(void * message_memory)
{
  plan_execute_interface__srv__GoHere_Request__fini(message_memory);
}

size_t plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__size_function__GoHere_Request__start_pose(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__get_const_function__GoHere_Request__start_pose(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__get_function__GoHere_Request__start_pose(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__fetch_function__GoHere_Request__start_pose(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__get_const_function__GoHere_Request__start_pose(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__assign_function__GoHere_Request__start_pose(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__get_function__GoHere_Request__start_pose(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__resize_function__GoHere_Request__start_pose(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__GoHere_Request_message_member_array[3] = {
  {
    "start_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plan_execute_interface__srv__GoHere_Request, start_pose),  // bytes offset in struct
    NULL,  // default value
    plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__size_function__GoHere_Request__start_pose,  // size() function pointer
    plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__get_const_function__GoHere_Request__start_pose,  // get_const(index) function pointer
    plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__get_function__GoHere_Request__start_pose,  // get(index) function pointer
    plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__fetch_function__GoHere_Request__start_pose,  // fetch(index, &value) function pointer
    plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__assign_function__GoHere_Request__start_pose,  // assign(index, value) function pointer
    plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__resize_function__GoHere_Request__start_pose  // resize(index) function pointer
  },
  {
    "goal_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plan_execute_interface__srv__GoHere_Request, goal_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "execute",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plan_execute_interface__srv__GoHere_Request, execute),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__GoHere_Request_message_members = {
  "plan_execute_interface__srv",  // message namespace
  "GoHere_Request",  // message name
  3,  // number of fields
  sizeof(plan_execute_interface__srv__GoHere_Request),
  plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__GoHere_Request_message_member_array,  // message members
  plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__GoHere_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__GoHere_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__GoHere_Request_message_type_support_handle = {
  0,
  &plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__GoHere_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plan_execute_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plan_execute_interface, srv, GoHere_Request)() {
  plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__GoHere_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__GoHere_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__GoHere_Request_message_type_support_handle.typesupport_identifier) {
    plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__GoHere_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &plan_execute_interface__srv__GoHere_Request__rosidl_typesupport_introspection_c__GoHere_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "plan_execute_interface/srv/detail/go_here__rosidl_typesupport_introspection_c.h"
// already included above
// #include "plan_execute_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "plan_execute_interface/srv/detail/go_here__functions.h"
// already included above
// #include "plan_execute_interface/srv/detail/go_here__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void plan_execute_interface__srv__GoHere_Response__rosidl_typesupport_introspection_c__GoHere_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  plan_execute_interface__srv__GoHere_Response__init(message_memory);
}

void plan_execute_interface__srv__GoHere_Response__rosidl_typesupport_introspection_c__GoHere_Response_fini_function(void * message_memory)
{
  plan_execute_interface__srv__GoHere_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember plan_execute_interface__srv__GoHere_Response__rosidl_typesupport_introspection_c__GoHere_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(plan_execute_interface__srv__GoHere_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers plan_execute_interface__srv__GoHere_Response__rosidl_typesupport_introspection_c__GoHere_Response_message_members = {
  "plan_execute_interface__srv",  // message namespace
  "GoHere_Response",  // message name
  1,  // number of fields
  sizeof(plan_execute_interface__srv__GoHere_Response),
  plan_execute_interface__srv__GoHere_Response__rosidl_typesupport_introspection_c__GoHere_Response_message_member_array,  // message members
  plan_execute_interface__srv__GoHere_Response__rosidl_typesupport_introspection_c__GoHere_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  plan_execute_interface__srv__GoHere_Response__rosidl_typesupport_introspection_c__GoHere_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t plan_execute_interface__srv__GoHere_Response__rosidl_typesupport_introspection_c__GoHere_Response_message_type_support_handle = {
  0,
  &plan_execute_interface__srv__GoHere_Response__rosidl_typesupport_introspection_c__GoHere_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plan_execute_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plan_execute_interface, srv, GoHere_Response)() {
  if (!plan_execute_interface__srv__GoHere_Response__rosidl_typesupport_introspection_c__GoHere_Response_message_type_support_handle.typesupport_identifier) {
    plan_execute_interface__srv__GoHere_Response__rosidl_typesupport_introspection_c__GoHere_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &plan_execute_interface__srv__GoHere_Response__rosidl_typesupport_introspection_c__GoHere_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "plan_execute_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "plan_execute_interface/srv/detail/go_here__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers plan_execute_interface__srv__detail__go_here__rosidl_typesupport_introspection_c__GoHere_service_members = {
  "plan_execute_interface__srv",  // service namespace
  "GoHere",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // plan_execute_interface__srv__detail__go_here__rosidl_typesupport_introspection_c__GoHere_Request_message_type_support_handle,
  NULL  // response message
  // plan_execute_interface__srv__detail__go_here__rosidl_typesupport_introspection_c__GoHere_Response_message_type_support_handle
};

static rosidl_service_type_support_t plan_execute_interface__srv__detail__go_here__rosidl_typesupport_introspection_c__GoHere_service_type_support_handle = {
  0,
  &plan_execute_interface__srv__detail__go_here__rosidl_typesupport_introspection_c__GoHere_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plan_execute_interface, srv, GoHere_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plan_execute_interface, srv, GoHere_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_plan_execute_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plan_execute_interface, srv, GoHere)() {
  if (!plan_execute_interface__srv__detail__go_here__rosidl_typesupport_introspection_c__GoHere_service_type_support_handle.typesupport_identifier) {
    plan_execute_interface__srv__detail__go_here__rosidl_typesupport_introspection_c__GoHere_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)plan_execute_interface__srv__detail__go_here__rosidl_typesupport_introspection_c__GoHere_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plan_execute_interface, srv, GoHere_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, plan_execute_interface, srv, GoHere_Response)()->data;
  }

  return &plan_execute_interface__srv__detail__go_here__rosidl_typesupport_introspection_c__GoHere_service_type_support_handle;
}
