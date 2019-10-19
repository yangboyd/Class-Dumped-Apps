//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface CHRSiriShortcutManagerDialogStyle : NSObject
{
    _Bool _adjustsBackgroundColorForDarkThemeElevation;
    UIColor *_backgroundColor;
    UIColor *_titleColor;
    UIColor *_messageColor;
    UIColor *_buttonColor;
}

@property(readonly, nonatomic) _Bool adjustsBackgroundColorForDarkThemeElevation; // @synthesize adjustsBackgroundColorForDarkThemeElevation=_adjustsBackgroundColorForDarkThemeElevation;
@property(readonly, nonatomic) UIColor *buttonColor; // @synthesize buttonColor=_buttonColor;
@property(readonly, nonatomic) UIColor *messageColor; // @synthesize messageColor=_messageColor;
@property(readonly, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)initWithBackgroundColor:(id)arg1 titleColor:(id)arg2 messageColor:(id)arg3 buttonColor:(id)arg4 adjustsBackgroundColorForDarkThemeElevation:(_Bool)arg5;

@end

