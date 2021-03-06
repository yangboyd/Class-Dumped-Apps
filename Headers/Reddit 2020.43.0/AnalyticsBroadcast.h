//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSString;

@interface AnalyticsBroadcast : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _unique_watchersIsSet;
    _Bool _max_concurrent_watchersIsSet;
    _Bool _duration_msIsSet;
    _Bool _time_remaining_msIsSet;
    _Bool _time_added_msIsSet;
    _Bool _stream_stateIsSet;
    _Bool _heartbeat_length_msIsSet;
    _Bool _concurrent_user_countIsSet;
    _Bool _current_hard_limitIsSet;
    _Bool _user_karmaIsSet;
    _Bool _current_karma_limitIsSet;
    _Bool _user_account_ageIsSet;
    _Bool _current_age_limitIsSet;
    long long _unique_watchers;
    long long _max_concurrent_watchers;
    long long _duration_ms;
    long long _time_remaining_ms;
    long long _time_added_ms;
    NSString *_stream_state;
    long long _heartbeat_length_ms;
    long long _concurrent_user_count;
    long long _current_hard_limit;
    long long _user_karma;
    long long _current_karma_limit;
    long long _user_account_age;
    long long _current_age_limit;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool current_age_limitIsSet; // @synthesize current_age_limitIsSet=_current_age_limitIsSet;
@property(nonatomic) long long current_age_limit; // @synthesize current_age_limit=_current_age_limit;
@property(nonatomic) _Bool user_account_ageIsSet; // @synthesize user_account_ageIsSet=_user_account_ageIsSet;
@property(nonatomic) long long user_account_age; // @synthesize user_account_age=_user_account_age;
@property(nonatomic) _Bool current_karma_limitIsSet; // @synthesize current_karma_limitIsSet=_current_karma_limitIsSet;
@property(nonatomic) long long current_karma_limit; // @synthesize current_karma_limit=_current_karma_limit;
@property(nonatomic) _Bool user_karmaIsSet; // @synthesize user_karmaIsSet=_user_karmaIsSet;
@property(nonatomic) long long user_karma; // @synthesize user_karma=_user_karma;
@property(nonatomic) _Bool current_hard_limitIsSet; // @synthesize current_hard_limitIsSet=_current_hard_limitIsSet;
@property(nonatomic) long long current_hard_limit; // @synthesize current_hard_limit=_current_hard_limit;
@property(nonatomic) _Bool concurrent_user_countIsSet; // @synthesize concurrent_user_countIsSet=_concurrent_user_countIsSet;
@property(nonatomic) long long concurrent_user_count; // @synthesize concurrent_user_count=_concurrent_user_count;
@property(nonatomic) _Bool heartbeat_length_msIsSet; // @synthesize heartbeat_length_msIsSet=_heartbeat_length_msIsSet;
@property(nonatomic) long long heartbeat_length_ms; // @synthesize heartbeat_length_ms=_heartbeat_length_ms;
@property(nonatomic) _Bool stream_stateIsSet; // @synthesize stream_stateIsSet=_stream_stateIsSet;
@property(copy, nonatomic) NSString *stream_state; // @synthesize stream_state=_stream_state;
@property(nonatomic) _Bool time_added_msIsSet; // @synthesize time_added_msIsSet=_time_added_msIsSet;
@property(nonatomic) long long time_added_ms; // @synthesize time_added_ms=_time_added_ms;
@property(nonatomic) _Bool time_remaining_msIsSet; // @synthesize time_remaining_msIsSet=_time_remaining_msIsSet;
@property(nonatomic) long long time_remaining_ms; // @synthesize time_remaining_ms=_time_remaining_ms;
@property(nonatomic) _Bool duration_msIsSet; // @synthesize duration_msIsSet=_duration_msIsSet;
@property(nonatomic) long long duration_ms; // @synthesize duration_ms=_duration_ms;
@property(nonatomic) _Bool max_concurrent_watchersIsSet; // @synthesize max_concurrent_watchersIsSet=_max_concurrent_watchersIsSet;
@property(nonatomic) long long max_concurrent_watchers; // @synthesize max_concurrent_watchers=_max_concurrent_watchers;
@property(nonatomic) _Bool unique_watchersIsSet; // @synthesize unique_watchersIsSet=_unique_watchersIsSet;
@property(nonatomic) long long unique_watchers; // @synthesize unique_watchers=_unique_watchers;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetCurrent_age_limit;
- (void)unsetUser_account_age;
- (void)unsetCurrent_karma_limit;
- (void)unsetUser_karma;
- (void)unsetCurrent_hard_limit;
- (void)unsetConcurrent_user_count;
- (void)unsetHeartbeat_length_ms;
- (void)unsetStream_state;
- (void)unsetTime_added_ms;
- (void)unsetTime_remaining_ms;
- (void)unsetDuration_ms;
- (void)unsetMax_concurrent_watchers;
- (void)unsetUnique_watchers;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnique_watchers:(long long)arg1 max_concurrent_watchers:(long long)arg2 duration_ms:(long long)arg3 time_remaining_ms:(long long)arg4 time_added_ms:(long long)arg5 stream_state:(id)arg6 heartbeat_length_ms:(long long)arg7 concurrent_user_count:(long long)arg8 current_hard_limit:(long long)arg9 user_karma:(long long)arg10 current_karma_limit:(long long)arg11 user_account_age:(long long)arg12 current_age_limit:(long long)arg13;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

