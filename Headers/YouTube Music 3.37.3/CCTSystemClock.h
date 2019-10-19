//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CCTClockProtocol-Protocol.h"

@class NSString;

@interface CCTSystemClock : NSObject <CCTClockProtocol>
{
    long long _cachedBootTimeMilliseconds;
}

+ (long long)extractBootTimeMilliseconds;
+ (id)systemClock;
@property(nonatomic) long long cachedBootTimeMilliseconds; // @synthesize cachedBootTimeMilliseconds=_cachedBootTimeMilliseconds;
- (void)timeZoneDidChange:(id)arg1;
- (void)handleSignificantTimeChange:(id)arg1;
- (void)scheduleAfterTimeInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)now;
- (double)elapsedTimeSince:(id)arg1;
- (long long)timezoneOffsetSeconds;
- (long long)uptimeMilliseconds;
- (long long)bootTimeMilliseconds;
- (long long)currentTimeMilliseconds;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

