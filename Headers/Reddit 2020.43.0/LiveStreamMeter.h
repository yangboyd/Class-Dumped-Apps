//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/NSCopying-Protocol.h>

@interface LiveStreamMeter : NSObject <NSCopying>
{
    float _energy;
    double _broadcastTime;
    double _remainingTime;
    double _baselineTimeLimit;
}

@property(readonly, nonatomic) float energy; // @synthesize energy=_energy;
@property(readonly, nonatomic) double baselineTimeLimit; // @synthesize baselineTimeLimit=_baselineTimeLimit;
@property(readonly, nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property(readonly, nonatomic) double broadcastTime; // @synthesize broadcastTime=_broadcastTime;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGraphQLData:(id)arg1;
- (id)initWithBroadcastTime:(double)arg1 remainingTime:(double)arg2 baselineTimeLimit:(double)arg3 energy:(float)arg4;

@end

