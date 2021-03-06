//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDictionary, NSLocale, NSNotificationCenter, NSString, NSUserDefaults;

@interface FBDateFormatCache : NSObject
{
    NSString *_cacheKey;
    NSDictionary *_formats;
    struct mutex _formatsMutex;
    NSNotificationCenter *_notificationCenter;
    NSLocale *_locale;
    NSCalendar *_calendar;
    NSUserDefaults *_userDefaults;
}

+ (id)sharedCache;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateFormatsIfNeeded;
- (void)_onCalendarChanged:(id)arg1;
- (void)_updateFormatsWithDictionary:(id)arg1;
- (void)_updateAllFormats;
- (id)formatForTemplate:(id)arg1;
- (void)addTemplates:(id)arg1;
- (id)initWithNotificationCenter:(id)arg1 locale:(id)arg2 calendar:(id)arg3 userDefaults:(id)arg4;

@end

