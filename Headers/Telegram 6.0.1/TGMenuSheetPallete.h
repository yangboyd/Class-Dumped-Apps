//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIImage;

@interface TGMenuSheetPallete : NSObject
{
    _Bool _isDark;
    UIColor *_backgroundColor;
    UIColor *_selectionColor;
    UIColor *_separatorColor;
    UIColor *_accentColor;
    UIColor *_destructiveColor;
    UIColor *_textColor;
    UIColor *_secondaryTextColor;
    UIColor *_spinnerColor;
    UIColor *_badgeTextColor;
    UIImage *_badgeImage;
    UIImage *_cornersImage;
}

+ (id)palleteWithDark:(_Bool)arg1 backgroundColor:(id)arg2 selectionColor:(id)arg3 separatorColor:(id)arg4 accentColor:(id)arg5 destructiveColor:(id)arg6 textColor:(id)arg7 secondaryTextColor:(id)arg8 spinnerColor:(id)arg9 badgeTextColor:(id)arg10 badgeImage:(id)arg11 cornersImage:(id)arg12;
@property(readonly, nonatomic) UIImage *cornersImage; // @synthesize cornersImage=_cornersImage;
@property(readonly, nonatomic) UIImage *badgeImage; // @synthesize badgeImage=_badgeImage;
@property(readonly, nonatomic) UIColor *badgeTextColor; // @synthesize badgeTextColor=_badgeTextColor;
@property(readonly, nonatomic) UIColor *spinnerColor; // @synthesize spinnerColor=_spinnerColor;
@property(readonly, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) UIColor *destructiveColor; // @synthesize destructiveColor=_destructiveColor;
@property(readonly, nonatomic) UIColor *accentColor; // @synthesize accentColor=_accentColor;
@property(readonly, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(readonly, nonatomic) UIColor *selectionColor; // @synthesize selectionColor=_selectionColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) _Bool isDark; // @synthesize isDark=_isDark;
- (void).cxx_destruct;

@end

