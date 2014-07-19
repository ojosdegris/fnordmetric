/**
 * This file is part of the "FnordMetric" project
 *   Copyright (c) 2014 Paul Asmuth, Google Inc.
 *
 * Licensed under the MIT license (see LICENSE).
 */
#include "axisdefinition.h"

namespace fnordmetric {
namespace ui {

AxisDefinition::AxisDefinition(kPosition axis_position) :
    position_(axis_position) {}

void AxisDefinition::addTick(double tick_position) {
  ticks_.push_back(tick_position);
}

void AxisDefinition::addLabel(
    double label_position,
    const std::string& label_text) {
  labels_.emplace_back(label_position, label_text);
}

AxisDefinition::kPosition AxisDefinition::getPosition() const {
  return position_;
}

bool AxisDefinition::hasTitle() const {
  return title_.length() > 0;
}

}
}
