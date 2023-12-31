// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from costom_msg:msg/WheelSpeedsStamped.idl
// generated code does not contain a copyright notice
#include "costom_msg/msg/detail/wheel_speeds_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
costom_msg__msg__WheelSpeedsStamped__init(costom_msg__msg__WheelSpeedsStamped * msg)
{
  if (!msg) {
    return false;
  }
  // speeds
  return true;
}

void
costom_msg__msg__WheelSpeedsStamped__fini(costom_msg__msg__WheelSpeedsStamped * msg)
{
  if (!msg) {
    return;
  }
  // speeds
}

bool
costom_msg__msg__WheelSpeedsStamped__are_equal(const costom_msg__msg__WheelSpeedsStamped * lhs, const costom_msg__msg__WheelSpeedsStamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // speeds
  if (lhs->speeds != rhs->speeds) {
    return false;
  }
  return true;
}

bool
costom_msg__msg__WheelSpeedsStamped__copy(
  const costom_msg__msg__WheelSpeedsStamped * input,
  costom_msg__msg__WheelSpeedsStamped * output)
{
  if (!input || !output) {
    return false;
  }
  // speeds
  output->speeds = input->speeds;
  return true;
}

costom_msg__msg__WheelSpeedsStamped *
costom_msg__msg__WheelSpeedsStamped__create()
{
  costom_msg__msg__WheelSpeedsStamped * msg = (costom_msg__msg__WheelSpeedsStamped *)malloc(sizeof(costom_msg__msg__WheelSpeedsStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(costom_msg__msg__WheelSpeedsStamped));
  bool success = costom_msg__msg__WheelSpeedsStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
costom_msg__msg__WheelSpeedsStamped__destroy(costom_msg__msg__WheelSpeedsStamped * msg)
{
  if (msg) {
    costom_msg__msg__WheelSpeedsStamped__fini(msg);
  }
  free(msg);
}


bool
costom_msg__msg__WheelSpeedsStamped__Sequence__init(costom_msg__msg__WheelSpeedsStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  costom_msg__msg__WheelSpeedsStamped * data = NULL;
  if (size) {
    data = (costom_msg__msg__WheelSpeedsStamped *)calloc(size, sizeof(costom_msg__msg__WheelSpeedsStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = costom_msg__msg__WheelSpeedsStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        costom_msg__msg__WheelSpeedsStamped__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
costom_msg__msg__WheelSpeedsStamped__Sequence__fini(costom_msg__msg__WheelSpeedsStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      costom_msg__msg__WheelSpeedsStamped__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

costom_msg__msg__WheelSpeedsStamped__Sequence *
costom_msg__msg__WheelSpeedsStamped__Sequence__create(size_t size)
{
  costom_msg__msg__WheelSpeedsStamped__Sequence * array = (costom_msg__msg__WheelSpeedsStamped__Sequence *)malloc(sizeof(costom_msg__msg__WheelSpeedsStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = costom_msg__msg__WheelSpeedsStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
costom_msg__msg__WheelSpeedsStamped__Sequence__destroy(costom_msg__msg__WheelSpeedsStamped__Sequence * array)
{
  if (array) {
    costom_msg__msg__WheelSpeedsStamped__Sequence__fini(array);
  }
  free(array);
}

bool
costom_msg__msg__WheelSpeedsStamped__Sequence__are_equal(const costom_msg__msg__WheelSpeedsStamped__Sequence * lhs, const costom_msg__msg__WheelSpeedsStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!costom_msg__msg__WheelSpeedsStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
costom_msg__msg__WheelSpeedsStamped__Sequence__copy(
  const costom_msg__msg__WheelSpeedsStamped__Sequence * input,
  costom_msg__msg__WheelSpeedsStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(costom_msg__msg__WheelSpeedsStamped);
    costom_msg__msg__WheelSpeedsStamped * data =
      (costom_msg__msg__WheelSpeedsStamped *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!costom_msg__msg__WheelSpeedsStamped__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          costom_msg__msg__WheelSpeedsStamped__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!costom_msg__msg__WheelSpeedsStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
