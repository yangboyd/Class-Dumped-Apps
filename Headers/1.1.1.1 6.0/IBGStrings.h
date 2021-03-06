//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSMutableDictionary, NSString;

@interface IBGStrings : NSObject
{
    NSMutableDictionary *_localizedStrings;
    NSBundle *_localizationBundle;
    unsigned long long _localeAlignmentDirection;
}

+ (id)sharedInstance;
+ (void)destory;
@property(nonatomic) unsigned long long localeAlignmentDirection; // @synthesize localeAlignmentDirection=_localeAlignmentDirection;
@property(retain, nonatomic) NSBundle *localizationBundle; // @synthesize localizationBundle=_localizationBundle;
@property(retain, nonatomic) NSMutableDictionary *localizedStrings; // @synthesize localizedStrings=_localizedStrings;
- (void).cxx_destruct;
- (_Bool)isTestTarget;
- (id)keyboardInputMethod;
- (id)localizedStringForKey:(id)arg1;
- (id)localizedStringForKey:(id)arg1 withBundle:(id)arg2;
- (id)editableValueWithDefaultKey:(id)arg1 withBundle:(id)arg2;
- (id)localizationBundleForLocale:(long long)arg1;
@property(readonly, nonatomic) int keyboardAlignment;
@property(readonly, nonatomic) int localeAlignment;
@property(readonly, nonatomic) NSString *appTeam;
@property(readonly, nonatomic) NSString *appName;
- (id)valueForStringWithKey:(id)arg1;
- (id)valueForStringWithKey:(id)arg1 local:(long long)arg2;
- (void)setLocale:(long long)arg1;
- (void)setValue:(id)arg1 forStringWithKey:(id)arg2;
- (id)init;

@end

