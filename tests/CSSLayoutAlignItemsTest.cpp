/**
 * Copyright (c) 2014-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

/**
 * @Generated by gentest/gentest.sh with the following input
 *
<div id="align_items_stretch" style="width: 100px; height: 100px;">
  <div style="height: 10px;"></div>
</div>

<div id="align_items_center" style="width: 100px; height: 100px; align-items: center;">
  <div style="height: 10px; width: 10px;"></div>
</div>

<div id="align_items_flex_start" style="width: 100px; height: 100px; align-items: flex-start;">
  <div style="height: 10px; width: 10px;"></div>
</div>

<div id="align_items_flex_end" style="width: 100px; height: 100px; align-items: flex-end;">
  <div style="height: 10px; width: 10px;"></div>
</div>
 *
 */

#include <CSSLayout/CSSLayout.h>
#include <gtest/gtest.h>

TEST(CSSLayoutTest, align_items_stretch) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetHeight(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(100, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(100, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));
}

TEST(CSSLayoutTest, align_items_center) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetAlignItems(root, CSSAlignCenter);
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child0, 10);
  CSSNodeStyleSetHeight(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(45, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(45, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));
}

TEST(CSSLayoutTest, align_items_flex_start) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetAlignItems(root, CSSAlignFlexStart);
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child0, 10);
  CSSNodeStyleSetHeight(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(90, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));
}

TEST(CSSLayoutTest, align_items_flex_end) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetAlignItems(root, CSSAlignFlexEnd);
  CSSNodeStyleSetWidth(root, 100);
  CSSNodeStyleSetHeight(root, 100);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child0, 10);
  CSSNodeStyleSetHeight(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(90, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(100, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(100, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));
}
