// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from target_state_pkg:msg/TargetState.idl
// generated code does not contain a copyright notice
#include "target_state_pkg/msg/detail/target_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
target_state_pkg__msg__TargetState__init(target_state_pkg__msg__TargetState * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
target_state_pkg__msg__TargetState__fini(target_state_pkg__msg__TargetState * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
target_state_pkg__msg__TargetState__are_equal(const target_state_pkg__msg__TargetState * lhs, const target_state_pkg__msg__TargetState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
target_state_pkg__msg__TargetState__copy(
  const target_state_pkg__msg__TargetState * input,
  target_state_pkg__msg__TargetState * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

target_state_pkg__msg__TargetState *
target_state_pkg__msg__TargetState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  target_state_pkg__msg__TargetState * msg = (target_state_pkg__msg__TargetState *)allocator.allocate(sizeof(target_state_pkg__msg__TargetState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(target_state_pkg__msg__TargetState));
  bool success = target_state_pkg__msg__TargetState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
target_state_pkg__msg__TargetState__destroy(target_state_pkg__msg__TargetState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    target_state_pkg__msg__TargetState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
target_state_pkg__msg__TargetState__Sequence__init(target_state_pkg__msg__TargetState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  target_state_pkg__msg__TargetState * data = NULL;

  if (size) {
    data = (target_state_pkg__msg__TargetState *)allocator.zero_allocate(size, sizeof(target_state_pkg__msg__TargetState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = target_state_pkg__msg__TargetState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        target_state_pkg__msg__TargetState__fini(&data[i - 1]);
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
target_state_pkg__msg__TargetState__Sequence__fini(target_state_pkg__msg__TargetState__Sequence * array)
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
      target_state_pkg__msg__TargetState__fini(&array->data[i]);
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

target_state_pkg__msg__TargetState__Sequence *
target_state_pkg__msg__TargetState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  target_state_pkg__msg__TargetState__Sequence * array = (target_state_pkg__msg__TargetState__Sequence *)allocator.allocate(sizeof(target_state_pkg__msg__TargetState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = target_state_pkg__msg__TargetState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
target_state_pkg__msg__TargetState__Sequence__destroy(target_state_pkg__msg__TargetState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    target_state_pkg__msg__TargetState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
target_state_pkg__msg__TargetState__Sequence__are_equal(const target_state_pkg__msg__TargetState__Sequence * lhs, const target_state_pkg__msg__TargetState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!target_state_pkg__msg__TargetState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
target_state_pkg__msg__TargetState__Sequence__copy(
  const target_state_pkg__msg__TargetState__Sequence * input,
  target_state_pkg__msg__TargetState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(target_state_pkg__msg__TargetState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    target_state_pkg__msg__TargetState * data =
      (target_state_pkg__msg__TargetState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!target_state_pkg__msg__TargetState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          target_state_pkg__msg__TargetState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!target_state_pkg__msg__TargetState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
