//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIColor;

@interface _TtC10CoreStyles12CoreTextView : UITextView
{
    // Error parsing type: , name: placeholder
    // Error parsing type: , name: placeholderColor
    // Error parsing type: , name: placeHolderLabel
    // Error parsing type: , name: $__lazy_storage_$_accessoryToolbar
    // Error parsing type: , name: previousUIResponder
    // Error parsing type: , name: nextUIResponder
    // Error parsing type: , name: showAccessoryToolbar
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)textChangedWithNotification:(id)arg1;
@property(nonatomic, copy) NSString *text;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
@property(nonatomic) _Bool showAccessoryToolbar; // @synthesize showAccessoryToolbar;
@property(nonatomic, retain) UIColor *placeholderColor; // @synthesize placeholderColor;
@property(nonatomic, copy) NSString *placeholder;

@end

