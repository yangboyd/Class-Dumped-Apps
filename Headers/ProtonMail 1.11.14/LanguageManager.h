//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LanguageManager : NSObject
{
}

+ (_Bool)isCurrentLanguageRTL;
+ (void)saveLanguageByCode:(id)arg1;
+ (void)saveLanguageByIndex:(long long)arg1;
+ (long long)currentLanguageEnum;
+ (long long)currentLanguageIndex;
+ (id)currentLanguageCode;
+ (id)currentLanguageString;
+ (id)languageStrings;
+ (void)setupCurrentLanguage;

@end

