//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADJBackoffStrategy : NSObject
{
    double _minRange;
    double _maxRange;
    long long _minRetries;
    double _maxWait;
    double _secondMultiplier;
}

+ (id)backoffStrategyWithType:(long long)arg1;
@property(nonatomic) double secondMultiplier; // @synthesize secondMultiplier=_secondMultiplier;
@property(nonatomic) double maxWait; // @synthesize maxWait=_maxWait;
@property(nonatomic) long long minRetries; // @synthesize minRetries=_minRetries;
@property(nonatomic) double maxRange; // @synthesize maxRange=_maxRange;
@property(nonatomic) double minRange; // @synthesize minRange=_minRange;
- (void)saveStrategy:(long long)arg1 secondMultiplier:(double)arg2 maxWait:(double)arg3 minRange:(double)arg4 maxRange:(double)arg5;
- (id)initWithType:(long long)arg1;

@end

