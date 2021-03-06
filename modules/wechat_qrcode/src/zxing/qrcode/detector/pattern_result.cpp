// This file is part of OpenCV project.
// It is subject to the license terms in the LICENSE file found in the top-level directory
// of this distribution and at http://opencv.org/license.html.
//
// Tencent is pleased to support the open source community by making WeChat QRCode available.
// Copyright (C) 2020 THL A29 Limited, a Tencent company. All rights reserved.
//
// Modified from ZXing. Copyright ZXing authors.
// Licensed under the Apache License, Version 2.0 (the "License").
#include "zxing/qrcode/detector/pattern_result.hpp"

// VC++
using namespace std;
using namespace zxing;
using namespace qrcode;

using std::abs;
using zxing::Ref;
using zxing::ResultPoint;
using zxing::qrcode::FinderPattern;
using zxing::qrcode::FinderPatternInfo;
using zxing::qrcode::PatternResult;

PatternResult::PatternResult(Ref<FinderPatternInfo> info) {
    finderPatternInfo = info;
    possibleAlignmentPatterns.clear();
}

void PatternResult::setConfirmedAlignmentPattern(int index) {
    if (index >= int(possibleAlignmentPatterns.size())) return;
    confirmedAlignmentPattern = possibleAlignmentPatterns[index];
}
