//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, ZDKLegacyTheme;

@interface ZDKAppearanceApplicator : NSObject
{
    NSMutableDictionary *_mutableAppearancePalette;
    ZDKLegacyTheme *_currentTheme;
}

+ (_Bool)isDarkTheme;
+ (_Bool)isDarkColor:(id)arg1;
+ (id)currentTheme;
+ (void)applyTheme:(id)arg1;
+ (void)setFont:(id)arg1;
+ (id)objectForKey:(id)arg1;
+ (id)inputFieldTextColor;
+ (void)setInputFieldTextColor:(id)arg1;
+ (id)inputFieldBackgroundColor;
+ (void)setInputFieldBackgroundColor:(id)arg1;
+ (id)separatorColor;
+ (void)setSeparatorColor:(id)arg1;
+ (id)metaTextColor;
+ (void)setMetaTextColor:(id)arg1;
+ (id)secondaryBackgroundColor;
+ (void)setSecondaryBackgroundColor:(id)arg1;
+ (id)emptyBackgroundColor;
+ (void)setEmptyBackgroundColor:(id)arg1;
+ (id)primaryBackgroundColor;
+ (void)setPrimaryBackgroundColor:(id)arg1;
+ (id)primaryTextColor;
+ (void)setPrimaryTextColor:(id)arg1;
+ (id)instance;
+ (void)resetSingelton;
@property(retain, nonatomic) ZDKLegacyTheme *currentTheme; // @synthesize currentTheme=_currentTheme;
@property(retain, nonatomic) NSMutableDictionary *mutableAppearancePalette; // @synthesize mutableAppearancePalette=_mutableAppearancePalette;
- (void).cxx_destruct;
- (id)importCategories;
- (void)setMetaTextFont:(id)arg1;
- (void)setSubtitleFont:(id)arg1;
- (void)setMainFont:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setInputFieldBackgroundColor:(id)arg1;
- (void)setInputFieldTextColor:(id)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setMetaTextColor:(id)arg1;
- (void)setSecondaryBackgroundColor:(id)arg1;
- (void)setEmptyBackgroundColor:(id)arg1;
- (id)createSpinner:(long long)arg1;
- (void)setPrimaryBackgroundColor:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setImageSize;
- (void)setMargins;
- (void)setBooleanProperties;
- (void)setActionSheetStyles;
- (void)setImages;
- (void)setEdgeInsets;
- (void)setCornerRadii;
- (void)setDefaultBorderWidths;
- (id)init;

@end

