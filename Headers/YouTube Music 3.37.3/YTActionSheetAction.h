//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString, UIButton, UIImage;

@interface YTActionSheetAction : NSObject <NSCopying>
{
    _Bool _shouldDismissOnAction;
    NSString *_title;
    long long _style;
    UIImage *_iconImage;
    NSString *_accessibilityIdentifier;
    CDUnknownBlockType _handler;
    UIButton *_button;
    NSData *_trackingParams;
}

+ (id)actionWithButton:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)actionWithTitle:(id)arg1 iconImage:(id)arg2 style:(long long)arg3 accessibilityIdentifier:(id)arg4 handler:(CDUnknownBlockType)arg5;
+ (id)actionWithTitle:(id)arg1 iconImage:(id)arg2 style:(long long)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)actionWithButton:(id)arg1 title:(id)arg2 iconImage:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)actionWithTitle:(id)arg1 currentValue:(id)arg2 iconImage:(id)arg3 accessibilityIdentifier:(id)arg4 handler:(CDUnknownBlockType)arg5;
+ (id)actionWithTitle:(id)arg1 iconImage:(id)arg2 badge:(id)arg3 accessibilityIdentifier:(id)arg4 handler:(CDUnknownBlockType)arg5;
+ (id)actionWithTitle:(id)arg1 subtitle:(id)arg2 iconImage:(id)arg3 accessibilityIdentifier:(id)arg4 handler:(CDUnknownBlockType)arg5;
+ (id)actionWithTitle:(id)arg1 subtitle:(id)arg2 iconImage:(id)arg3 handler:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSData *trackingParams; // @synthesize trackingParams=_trackingParams;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) _Bool shouldDismissOnAction; // @synthesize shouldDismissOnAction=_shouldDismissOnAction;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 iconImage:(id)arg2 button:(id)arg3 style:(long long)arg4 accessibilityIdentifier:(id)arg5 handler:(CDUnknownBlockType)arg6;

@end

