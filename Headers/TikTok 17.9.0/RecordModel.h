//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RecordModel : NSObject
{
    double _duration;
    double _lastTime;
    long long _lastState;
}

@property(nonatomic) long long lastState; // @synthesize lastState=_lastState;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)initWithTime:(double)arg1;

@end

