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
<div id="justify_content_row_flex_start" style="width: 102px; height: 102px; flex-direction: row; justify-content: flex-start;">
  <div style="width: 10px;"></div>
  <div style="width: 10px;"></div>
  <div style="width: 10px;"></div>
</div>

<div id="justify_content_row_flex_end" style="width: 102px; height: 102px; flex-direction: row; justify-content: flex-end;">
  <div style="width: 10px;"></div>
  <div style="width: 10px;"></div>
  <div style="width: 10px;"></div>
</div>

<div id="justify_content_row_center" style="width: 102px; height: 102px; flex-direction: row; justify-content: center;">
  <div style="width: 10px;"></div>
  <div style="width: 10px;"></div>
  <div style="width: 10px;"></div>
</div>

<div id="justify_content_row_space_between" style="width: 102px; height: 102px; flex-direction: row; justify-content: space-between;">
  <div style="width: 10px;"></div>
  <div style="width: 10px;"></div>
  <div style="width: 10px;"></div>
</div>

<div id="justify_content_row_space_around" style="width: 102px; height: 102px; flex-direction: row; justify-content: space-around;">
  <div style="width: 10px;"></div>
  <div style="width: 10px;"></div>
  <div style="width: 10px;"></div>
</div>

<div id="justify_content_column_flex_start" style="width: 102px; height: 102px; justify-content: flex-start;">
  <div style="height: 10px;"></div>
  <div style="heigth: 10px;"></div>
  <div style="height: 10px;"></div>
</div>

<div id="justify_content_column_flex_end" style="width: 102px; height: 102px; justify-content: flex-end;">
  <div style="height: 10px;"></div>
  <div style="height: 10px;"></div>
  <div style="height: 10px;"></div>
</div>

<div id="justify_content_column_center" style="width: 102px; height: 102px; justify-content: center;">
  <div style="height: 10px;"></div>
  <div style="height: 10px;"></div>
  <div style="height: 10px;"></div>
</div>

<div id="justify_content_column_space_between" style="width: 102px; height: 102px; justify-content: space-between;">
  <div style="height: 10px;"></div>
  <div style="height: 10px;"></div>
  <div style="height: 10px;"></div>
</div>

<div id="justify_content_column_space_around" style="width: 102px; height: 102px; justify-content: space-around;">
  <div style="height: 10px;"></div>
  <div style="height: 10px;"></div>
  <div style="height: 10px;"></div>
</div>
 *
 */

#include <CSSLayout/CSSLayout.h>
#include <gtest/gtest.h>

TEST(CSSLayoutTest, justify_content_row_flex_start) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetFlexDirection(root, CSSFlexDirectionRow);
  CSSNodeStyleSetWidth(root, 102);
  CSSNodeStyleSetHeight(root, 102);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);

  const CSSNodeRef root_child1 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child1, 10);
  CSSNodeInsertChild(root, root_child1, 1);

  const CSSNodeRef root_child2 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child2, 10);
  CSSNodeInsertChild(root, root_child2, 2);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(10, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(20, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child2));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(92, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(82, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(72, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child2));
}

TEST(CSSLayoutTest, justify_content_row_flex_end) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetFlexDirection(root, CSSFlexDirectionRow);
  CSSNodeStyleSetJustifyContent(root, CSSJustifyFlexEnd);
  CSSNodeStyleSetWidth(root, 102);
  CSSNodeStyleSetHeight(root, 102);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);

  const CSSNodeRef root_child1 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child1, 10);
  CSSNodeInsertChild(root, root_child1, 1);

  const CSSNodeRef root_child2 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child2, 10);
  CSSNodeInsertChild(root, root_child2, 2);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(72, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(82, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(92, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child2));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(20, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(10, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child2));
}

TEST(CSSLayoutTest, justify_content_row_center) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetFlexDirection(root, CSSFlexDirectionRow);
  CSSNodeStyleSetJustifyContent(root, CSSJustifyCenter);
  CSSNodeStyleSetWidth(root, 102);
  CSSNodeStyleSetHeight(root, 102);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);

  const CSSNodeRef root_child1 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child1, 10);
  CSSNodeInsertChild(root, root_child1, 1);

  const CSSNodeRef root_child2 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child2, 10);
  CSSNodeInsertChild(root, root_child2, 2);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(36, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(46, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(56, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child2));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(56, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(46, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(36, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child2));
}

TEST(CSSLayoutTest, justify_content_row_space_between) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetFlexDirection(root, CSSFlexDirectionRow);
  CSSNodeStyleSetJustifyContent(root, CSSJustifySpaceBetween);
  CSSNodeStyleSetWidth(root, 102);
  CSSNodeStyleSetHeight(root, 102);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);

  const CSSNodeRef root_child1 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child1, 10);
  CSSNodeInsertChild(root, root_child1, 1);

  const CSSNodeRef root_child2 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child2, 10);
  CSSNodeInsertChild(root, root_child2, 2);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(46, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(92, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child2));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(92, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(46, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child2));
}

TEST(CSSLayoutTest, justify_content_row_space_around) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetFlexDirection(root, CSSFlexDirectionRow);
  CSSNodeStyleSetJustifyContent(root, CSSJustifySpaceAround);
  CSSNodeStyleSetWidth(root, 102);
  CSSNodeStyleSetHeight(root, 102);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);

  const CSSNodeRef root_child1 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child1, 10);
  CSSNodeInsertChild(root, root_child1, 1);

  const CSSNodeRef root_child2 = CSSNodeNew();
  CSSNodeStyleSetWidth(root_child2, 10);
  CSSNodeInsertChild(root, root_child2, 2);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(12, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(46, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(80, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child2));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(80, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(46, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(12, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root_child2));
}

TEST(CSSLayoutTest, justify_content_column_flex_start) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetWidth(root, 102);
  CSSNodeStyleSetHeight(root, 102);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetHeight(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);

  const CSSNodeRef root_child1 = CSSNodeNew();
  CSSNodeInsertChild(root, root_child1, 1);

  const CSSNodeRef root_child2 = CSSNodeNew();
  CSSNodeStyleSetHeight(root_child2, 10);
  CSSNodeInsertChild(root, root_child2, 2);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(0, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child2));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(0, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child2));
}

TEST(CSSLayoutTest, justify_content_column_flex_end) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetJustifyContent(root, CSSJustifyFlexEnd);
  CSSNodeStyleSetWidth(root, 102);
  CSSNodeStyleSetHeight(root, 102);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetHeight(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);

  const CSSNodeRef root_child1 = CSSNodeNew();
  CSSNodeStyleSetHeight(root_child1, 10);
  CSSNodeInsertChild(root, root_child1, 1);

  const CSSNodeRef root_child2 = CSSNodeNew();
  CSSNodeStyleSetHeight(root_child2, 10);
  CSSNodeInsertChild(root, root_child2, 2);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(72, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(82, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(92, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child2));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(72, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(82, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(92, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child2));
}

TEST(CSSLayoutTest, justify_content_column_center) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetJustifyContent(root, CSSJustifyCenter);
  CSSNodeStyleSetWidth(root, 102);
  CSSNodeStyleSetHeight(root, 102);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetHeight(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);

  const CSSNodeRef root_child1 = CSSNodeNew();
  CSSNodeStyleSetHeight(root_child1, 10);
  CSSNodeInsertChild(root, root_child1, 1);

  const CSSNodeRef root_child2 = CSSNodeNew();
  CSSNodeStyleSetHeight(root_child2, 10);
  CSSNodeInsertChild(root, root_child2, 2);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(36, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(46, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(56, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child2));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(36, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(46, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(56, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child2));
}

TEST(CSSLayoutTest, justify_content_column_space_between) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetJustifyContent(root, CSSJustifySpaceBetween);
  CSSNodeStyleSetWidth(root, 102);
  CSSNodeStyleSetHeight(root, 102);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetHeight(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);

  const CSSNodeRef root_child1 = CSSNodeNew();
  CSSNodeStyleSetHeight(root_child1, 10);
  CSSNodeInsertChild(root, root_child1, 1);

  const CSSNodeRef root_child2 = CSSNodeNew();
  CSSNodeStyleSetHeight(root_child2, 10);
  CSSNodeInsertChild(root, root_child2, 2);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(46, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(92, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child2));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(46, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(92, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child2));
}

TEST(CSSLayoutTest, justify_content_column_space_around) {
  const CSSNodeRef root = CSSNodeNew();
  CSSNodeStyleSetJustifyContent(root, CSSJustifySpaceAround);
  CSSNodeStyleSetWidth(root, 102);
  CSSNodeStyleSetHeight(root, 102);

  const CSSNodeRef root_child0 = CSSNodeNew();
  CSSNodeStyleSetHeight(root_child0, 10);
  CSSNodeInsertChild(root, root_child0, 0);

  const CSSNodeRef root_child1 = CSSNodeNew();
  CSSNodeStyleSetHeight(root_child1, 10);
  CSSNodeInsertChild(root, root_child1, 1);

  const CSSNodeRef root_child2 = CSSNodeNew();
  CSSNodeStyleSetHeight(root_child2, 10);
  CSSNodeInsertChild(root, root_child2, 2);
  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionLTR);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(12, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(46, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(80, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child2));

  CSSNodeCalculateLayout(root, CSSUndefined, CSSUndefined, CSSDirectionRTL);

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root));
  ASSERT_EQ(0, CSSNodeLayoutGetTop(root));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root));
  ASSERT_EQ(102, CSSNodeLayoutGetHeight(root));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child0));
  ASSERT_EQ(12, CSSNodeLayoutGetTop(root_child0));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child0));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child0));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child1));
  ASSERT_EQ(46, CSSNodeLayoutGetTop(root_child1));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child1));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child1));

  ASSERT_EQ(0, CSSNodeLayoutGetLeft(root_child2));
  ASSERT_EQ(80, CSSNodeLayoutGetTop(root_child2));
  ASSERT_EQ(102, CSSNodeLayoutGetWidth(root_child2));
  ASSERT_EQ(10, CSSNodeLayoutGetHeight(root_child2));
}
