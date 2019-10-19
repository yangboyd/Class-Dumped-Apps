//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTDrivingMotionRecorderConfiguration : NSObject
{
    long long _sensors;
    double _interval;
    double _duration;
}

+ (id)motionManagerDefaultRecorderConfiguration;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;
@property(readonly, nonatomic) long long sensors; // @synthesize sensors=_sensors;
- (id)initWithSensors:(long long)arg1 interval:(double)arg2 duration:(double)arg3;

@end

