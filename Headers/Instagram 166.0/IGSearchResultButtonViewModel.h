//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSString;

@interface IGSearchResultButtonViewModel : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_textStyle_title;
    long long _textStyle_style;
    _Bool _textStyle_isTappable;
    NSString *_textWithDestructiveButtonStyle_title;
    long long _textWithDestructiveButtonStyle_style;
    _Bool _textWithDestructiveButtonStyle_isTappable;
}

+ (id)textWithDestructiveButtonStyleWithTitle:(id)arg1 style:(long long)arg2 isTappable:(_Bool)arg3;
+ (id)textStyleWithTitle:(id)arg1 style:(long long)arg2 isTappable:(_Bool)arg3;
+ (id)noButton;
+ (id)hideStyle;
- (void).cxx_destruct;
- (void)matchNoButton:(CDUnknownBlockType)arg1 hideStyle:(CDUnknownBlockType)arg2 textStyle:(CDUnknownBlockType)arg3 textWithDestructiveButtonStyle:(CDUnknownBlockType)arg4;
- (_Bool)matchBooleanNoButton:(CDUnknownBlockType)arg1 hideStyle:(CDUnknownBlockType)arg2 textStyle:(CDUnknownBlockType)arg3 textWithDestructiveButtonStyle:(CDUnknownBlockType)arg4;

@end

