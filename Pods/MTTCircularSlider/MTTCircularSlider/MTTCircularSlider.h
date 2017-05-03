//
//  MTTCircularSlider.h
//  MTTCircularSliderDome
//
//  Created by Lin on 16/2/26.
//  Copyright © 2016年 MTT. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, MTTCircularSliderStyle) {
    MTTCircularSliderStyleDefault = 1, //默认样式
    MTTCircularSliderStyleImage = 2, //图片样式
    MTTCircularSliderStyleNone = 0, //无样式
};

@interface MTTCircularSlider : UIControl

#pragma mark -UI Attribute
/**
 *  控件样式,默认:MTTCircularSliderStyleDefault
 */
@property (nonatomic) MTTCircularSliderStyle sliderStyle;
/**
 *  设置是否循环滑动,默认:NO
 */
@property (nonatomic, getter=isCirculate) BOOL circulate;

#pragma mark -MTTCircularSliderStyleDefault
/**
 *  圆圈宽度,默认:20
 */
@property (nonatomic) CGFloat lineWidth;
/**
 *  已选中进度颜色,默认:red:0.04 green:0.41 blue:1
 */
@property (nonatomic, strong) UIColor* selectColor;
/**
 *  未选中进度颜色,默认:red:0.71 green:0.71 blue:0.71
 */
@property (nonatomic, strong) UIColor* unselectColor;
/**
 *  指示器颜色,默认:whiteColor
 */
@property (nonatomic, strong) UIColor* indicatorColor;
/**
 *  内边距,默认:10
 */
@property (nonatomic) CGFloat contextPadding;

#pragma mark -MTTCircularSliderStyleImage
/**
 *  已选中进度图片
 */
@property (nonatomic, strong) UIImage* selectImage;
/**
 *  已选中进度图片
 */
@property (nonatomic, strong) UIImage* unselectImage;
/**
 *  指示器图片
 */
@property (nonatomic, strong) UIImage* indicatorImage;

#pragma mark -Angle
/**
 *  当前角度,默认:0
 */
@property (nonatomic) NSInteger angle;
/**
 *  最大角度,默认:360
 */
@property (nonatomic) NSInteger maxAngle;
/**
 *  最小角度,默认:0
 */
@property (nonatomic) NSInteger minAngle;

#pragma mark -Value
/**
 *  当前数值,默认:0
 */
@property (nonatomic) CGFloat value;
/**
 *  最小数值,默认:0
 */
@property (nonatomic) CGFloat minValue;
/**
 *  最大数值,默认:1
 */
@property (nonatomic) CGFloat maxValue;

@end
