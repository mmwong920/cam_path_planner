// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tritonai_roi_interface:msg/AddressBook.idl
// generated code does not contain a copyright notice
#include "tritonai_roi_interface/msg/detail/address_book__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `x_list`
// Member `y_list`
// Member `z_list`
// Member `class_list`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
tritonai_roi_interface__msg__AddressBook__init(tritonai_roi_interface__msg__AddressBook * msg)
{
  if (!msg) {
    return false;
  }
  // x_list
  if (!rosidl_runtime_c__float__Sequence__init(&msg->x_list, 0)) {
    tritonai_roi_interface__msg__AddressBook__fini(msg);
    return false;
  }
  // y_list
  if (!rosidl_runtime_c__float__Sequence__init(&msg->y_list, 0)) {
    tritonai_roi_interface__msg__AddressBook__fini(msg);
    return false;
  }
  // z_list
  if (!rosidl_runtime_c__float__Sequence__init(&msg->z_list, 0)) {
    tritonai_roi_interface__msg__AddressBook__fini(msg);
    return false;
  }
  // class_list
  if (!rosidl_runtime_c__int8__Sequence__init(&msg->class_list, 0)) {
    tritonai_roi_interface__msg__AddressBook__fini(msg);
    return false;
  }
  return true;
}

void
tritonai_roi_interface__msg__AddressBook__fini(tritonai_roi_interface__msg__AddressBook * msg)
{
  if (!msg) {
    return;
  }
  // x_list
  rosidl_runtime_c__float__Sequence__fini(&msg->x_list);
  // y_list
  rosidl_runtime_c__float__Sequence__fini(&msg->y_list);
  // z_list
  rosidl_runtime_c__float__Sequence__fini(&msg->z_list);
  // class_list
  rosidl_runtime_c__int8__Sequence__fini(&msg->class_list);
}

bool
tritonai_roi_interface__msg__AddressBook__are_equal(const tritonai_roi_interface__msg__AddressBook * lhs, const tritonai_roi_interface__msg__AddressBook * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x_list
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->x_list), &(rhs->x_list)))
  {
    return false;
  }
  // y_list
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->y_list), &(rhs->y_list)))
  {
    return false;
  }
  // z_list
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->z_list), &(rhs->z_list)))
  {
    return false;
  }
  // class_list
  if (!rosidl_runtime_c__int8__Sequence__are_equal(
      &(lhs->class_list), &(rhs->class_list)))
  {
    return false;
  }
  return true;
}

bool
tritonai_roi_interface__msg__AddressBook__copy(
  const tritonai_roi_interface__msg__AddressBook * input,
  tritonai_roi_interface__msg__AddressBook * output)
{
  if (!input || !output) {
    return false;
  }
  // x_list
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->x_list), &(output->x_list)))
  {
    return false;
  }
  // y_list
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->y_list), &(output->y_list)))
  {
    return false;
  }
  // z_list
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->z_list), &(output->z_list)))
  {
    return false;
  }
  // class_list
  if (!rosidl_runtime_c__int8__Sequence__copy(
      &(input->class_list), &(output->class_list)))
  {
    return false;
  }
  return true;
}

tritonai_roi_interface__msg__AddressBook *
tritonai_roi_interface__msg__AddressBook__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tritonai_roi_interface__msg__AddressBook * msg = (tritonai_roi_interface__msg__AddressBook *)allocator.allocate(sizeof(tritonai_roi_interface__msg__AddressBook), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tritonai_roi_interface__msg__AddressBook));
  bool success = tritonai_roi_interface__msg__AddressBook__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tritonai_roi_interface__msg__AddressBook__destroy(tritonai_roi_interface__msg__AddressBook * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tritonai_roi_interface__msg__AddressBook__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tritonai_roi_interface__msg__AddressBook__Sequence__init(tritonai_roi_interface__msg__AddressBook__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tritonai_roi_interface__msg__AddressBook * data = NULL;

  if (size) {
    data = (tritonai_roi_interface__msg__AddressBook *)allocator.zero_allocate(size, sizeof(tritonai_roi_interface__msg__AddressBook), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tritonai_roi_interface__msg__AddressBook__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tritonai_roi_interface__msg__AddressBook__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tritonai_roi_interface__msg__AddressBook__Sequence__fini(tritonai_roi_interface__msg__AddressBook__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tritonai_roi_interface__msg__AddressBook__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tritonai_roi_interface__msg__AddressBook__Sequence *
tritonai_roi_interface__msg__AddressBook__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tritonai_roi_interface__msg__AddressBook__Sequence * array = (tritonai_roi_interface__msg__AddressBook__Sequence *)allocator.allocate(sizeof(tritonai_roi_interface__msg__AddressBook__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tritonai_roi_interface__msg__AddressBook__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tritonai_roi_interface__msg__AddressBook__Sequence__destroy(tritonai_roi_interface__msg__AddressBook__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tritonai_roi_interface__msg__AddressBook__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tritonai_roi_interface__msg__AddressBook__Sequence__are_equal(const tritonai_roi_interface__msg__AddressBook__Sequence * lhs, const tritonai_roi_interface__msg__AddressBook__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tritonai_roi_interface__msg__AddressBook__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tritonai_roi_interface__msg__AddressBook__Sequence__copy(
  const tritonai_roi_interface__msg__AddressBook__Sequence * input,
  tritonai_roi_interface__msg__AddressBook__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tritonai_roi_interface__msg__AddressBook);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tritonai_roi_interface__msg__AddressBook * data =
      (tritonai_roi_interface__msg__AddressBook *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tritonai_roi_interface__msg__AddressBook__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tritonai_roi_interface__msg__AddressBook__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tritonai_roi_interface__msg__AddressBook__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
