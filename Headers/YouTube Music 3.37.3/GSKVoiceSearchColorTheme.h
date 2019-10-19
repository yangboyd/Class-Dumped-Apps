//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface GSKVoiceSearchColorTheme : NSObject
{
    UIColor *_backgroundColor;
    UIColor *_buttonTintColor;
    UIColor *_stablePrefixColor;
    UIColor *_unstableSuffixColor;
    UIColor *_languageSelectorCellBackgroundColor;
    UIColor *_languageSelectorTextColor;
}

+ (id)defaultDarkTheme;
+ (id)defaultLightTheme;
+ (id)defaultColorThemeForUserInterfaceStyle:(long long)arg1;
@property(retain, nonatomic) UIColor *languageSelectorTextColor; // @synthesize languageSelectorTextColor=_languageSelectorTextColor;
@property(retain, nonatomic) UIColor *languageSelectorCellBackgroundColor; // @synthesize languageSelectorCellBackgroundColor=_languageSelectorCellBackgroundColor;
@property(retain, nonatomic) UIColor *unstableSuffixColor; // @synthesize unstableSuffixColor=_unstableSuffixColor;
@property(retain, nonatomic) UIColor *stablePrefixColor; // @synthesize stablePrefixColor=_stablePrefixColor;
@property(retain, nonatomic) UIColor *buttonTintColor; // @synthesize buttonTintColor=_buttonTintColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

