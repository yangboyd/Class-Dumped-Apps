//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SCABlizzardConfig : NSObject <NSCopying, NSCoding>
{
    _Bool _lowPriorityThreadEnabled;
    NSNumber *_minTimeBetweenSessions;
    NSArray *_blacklistedEvents;
    NSArray *_logQueueDefinitions;
    NSDictionary *_qosToLogQueueNameMap;
    NSNumber *_minPerUserSamplingRate;
    NSString *_version;
    NSNumber *_appApplicationForegroundLogInitialDelay;
    NSNumber *_appApplicationForegroundLogInterval;
}

+ (id)BLIZZARD_DEFAULT_BLACKLISTED_EVENTS;
+ (id)BLIZZARD_TIER0_EVENTS;
+ (id)BLIZZARD_TIER0_EVENTS_WITHOUT_SESSION;
+ (id)BLIZZARD_INTERNAL_EVENTS;
@property(readonly, copy, nonatomic) NSNumber *appApplicationForegroundLogInterval; // @synthesize appApplicationForegroundLogInterval=_appApplicationForegroundLogInterval;
@property(readonly, copy, nonatomic) NSNumber *appApplicationForegroundLogInitialDelay; // @synthesize appApplicationForegroundLogInitialDelay=_appApplicationForegroundLogInitialDelay;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSNumber *minPerUserSamplingRate; // @synthesize minPerUserSamplingRate=_minPerUserSamplingRate;
@property(readonly, copy, nonatomic) NSDictionary *qosToLogQueueNameMap; // @synthesize qosToLogQueueNameMap=_qosToLogQueueNameMap;
@property(readonly, copy, nonatomic) NSArray *logQueueDefinitions; // @synthesize logQueueDefinitions=_logQueueDefinitions;
@property(readonly, copy, nonatomic) NSArray *blacklistedEvents; // @synthesize blacklistedEvents=_blacklistedEvents;
@property(readonly, nonatomic) _Bool lowPriorityThreadEnabled; // @synthesize lowPriorityThreadEnabled=_lowPriorityThreadEnabled;
@property(readonly, copy, nonatomic) NSNumber *minTimeBetweenSessions; // @synthesize minTimeBetweenSessions=_minTimeBetweenSessions;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMinTimeBetweenSessions:(id)arg1 lowPriorityThreadEnabled:(_Bool)arg2 blacklistedEvents:(id)arg3 logQueueDefinitions:(id)arg4 qosToLogQueueNameMap:(id)arg5 minPerUserSamplingRate:(id)arg6 version:(id)arg7 appApplicationForegroundLogInitialDelay:(id)arg8 appApplicationForegroundLogInterval:(id)arg9;
- (id)initWithCoder:(id)arg1;
- (id)getLogQueueNamesFromQos:(long long)arg1;
- (id)initWithDefaults;
- (id)initWithJSONDictionary:(id)arg1;
- (id)jsonDictionary;

@end

