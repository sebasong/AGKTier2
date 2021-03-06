#ifndef __DETECTOR_RESULT_H__
#define __DETECTOR_RESULT_H__

/*
 *  DetectorResult.h
 *  zxing
 *
 *  Copyright 2010 ZXing authors All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <vector>
#include <common/Counted.h>
#include <common/Array.h>
#include <common/BitMatrix.h>
#include <ResultPoint.h>
#include <common/PerspectiveTransform.h>

namespace zxing {

class DetectorResult : public Counted {
private:
  Ref<BitMatrix> bits_;
  std::vector<Ref<ResultPoint> > points_;
  Ref<PerspectiveTransform> transform_;

public:
  DetectorResult(Ref<BitMatrix> bits, std::vector<Ref<ResultPoint> > points, Ref<PerspectiveTransform> transform);
  Ref<BitMatrix> getBits();
  std::vector<Ref<ResultPoint> > getPoints();
  Ref<PerspectiveTransform> getTransform();
};
}

#endif // __DETECTOR_RESULT_H__
