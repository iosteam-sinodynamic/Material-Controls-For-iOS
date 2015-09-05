// The MIT License (MIT)
//
// Copyright (c) 2015 FPT Software
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <UIKit/UIKit.h>
#define kMDAnimationDuration .2f


@interface MDSlider : UIControl

@property(nonatomic)  float value;
@property(nonatomic)  float maximumValue;
@property(nonatomic)  float minimumValue;
@property(nonatomic)  UIColor *thumbOnColor;
@property(nonatomic)  UIColor *trackOnColor;
@property(nonatomic)  UIColor *thumbOffColor;
@property(nonatomic)  UIColor *trackOffColor;
@property(nonatomic)  UIColor *disabledColor;
@property(nonatomic)  UIColor *tickMarksColor;
@property(nonatomic)  UIImage *leftImage;
@property(nonatomic)  UIImage *rightImage;
@property(nonatomic, getter=isEnabled)  BOOL enabled;
@property(nonatomic)  float step;
@property(nonatomic)  BOOL enabledValueLabel;
@property(nonatomic)  NSUInteger precision;

@end
