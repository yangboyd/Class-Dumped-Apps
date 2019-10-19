//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCLensRequestSettings : NSObject
{
    long long _priority;
    long long _fallbackPriority;
    long long _fetchPolicy;
    NSString *_trackingId;
    NSString *_trackingType;
    NSString *_trackingMediaType;
}

@property(readonly, nonatomic) NSString *trackingMediaType; // @synthesize trackingMediaType=_trackingMediaType;
@property(readonly, nonatomic) NSString *trackingType; // @synthesize trackingType=_trackingType;
@property(readonly, nonatomic) NSString *trackingId; // @synthesize trackingId=_trackingId;
@property(readonly, nonatomic) long long fetchPolicy; // @synthesize fetchPolicy=_fetchPolicy;
@property(readonly, nonatomic) long long fallbackPriority; // @synthesize fallbackPriority=_fallbackPriority;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
- (void).cxx_destruct;
- (id)stringFromFetchPolicy:(long long)arg1;
- (id)stringFromPriority:(long long)arg1;
- (id)description;
- (id)initWithPriority:(long long)arg1 fallbackPriority:(long long)arg2 fetchPolicy:(long long)arg3 trackingId:(id)arg4 trackingType:(id)arg5 trackingMediaType:(id)arg6;

@end

