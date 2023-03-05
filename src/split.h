//
// Created by Иван Назаров on 05.03.2023.
//
#pragma once

#include "core_structs.h"
#include <string>

void splitTrack(const Track& srcTrack, Track& splittedTrack, double delta,  const std::string& metric = "euclidean");