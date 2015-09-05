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

enum ViewState { NORMAL, HIGHLIGHT, ERROR, DISABLED };

@class AutoResizeTextView, MDTextField;

@protocol MDTextFieldDelegate <NSObject>

@optional

- (void)textFieldDidChange:(MDTextField *)textField;

- (BOOL)textFieldShouldBeginEditing:
    (MDTextField *)textField; // return NO to disallow editing.
- (void)textFieldDidBeginEditing:
    (MDTextField *)textField; // became first responder
- (BOOL)textFieldShouldEndEditing:
    (MDTextField *)textField; // return YES to allow editing to stop and to
                              // resign first responder status. NO to
                              // disallow the editing session to end
- (void)textFieldDidEndEditing:(MDTextField *)textField; // may be called if
                                                         // forced even if
                                                         // shouldEndEditing
                                                         // returns NO (e.g.
                                                         // view removed from
                                                         // window) or
                                                         // endEditing:YES
                                                         // called

- (BOOL)textField:(MDTextField *)textField
    shouldChangeCharactersInRange:(NSRange)range
                replacementString:
                    (NSString *)string; // return NO to not change text

//- (BOOL)textFieldShouldClear:(MDTextField *)textField;               // called
// when clear button pressed. return NO to ignore (no notifications)
- (BOOL)textFieldShouldReturn:
    (MDTextField *)
        textField; // called when 'return' key pressed. return NO to ignore.

@end


@interface MDTextField : UIControl

@property(nonatomic)  NSString *hint;
@property(nonatomic)  NSString *label;
@property(nonatomic)  BOOL floatingLabel;
@property(nonatomic)  BOOL highlightLabel;
@property(nonatomic)  NSString *errorMessage;
@property(nonatomic)  int maxCharacterCount;

@property(nonatomic)  UIColor *normalColor;
@property(nonatomic)  UIColor *highlightColor;
@property(nonatomic)  UIColor *errorColor;
@property(nonatomic)  UIColor *disabledColor;
@property(nonatomic)  UIColor *textColor;
@property(nonatomic)  UIColor *hintColor;

@property(nonatomic, getter=isEnabled)  BOOL enabled;
@property(nonatomic)  BOOL autoComplete;
@property(nonatomic)  BOOL singleLine;
@property(nonatomic)  BOOL fullWidth;
@property(nonatomic)  int minVisibleLines;
@property(nonatomic)  int maxVisibleLines;
@property(nonatomic)  NSString *text;
@property(nonatomic)  BOOL secureTextEntry;

@property(nonatomic) UIReturnKeyType returnKeyType;
@property(nonatomic) UIKeyboardType keyboardType;

@property(nonatomic) BOOL hasError;
@property(nonatomic) UIFont *labelsFont;
@property(nonatomic) UIFont *inputTextFont;
@property(nonatomic) NSLayoutConstraint *textViewHeightConstraint;
@property(nonatomic) NSArray *suggestionsDictionary;

@property(nonatomic, weak) id<MDTextFieldDelegate> delegate;

@end
