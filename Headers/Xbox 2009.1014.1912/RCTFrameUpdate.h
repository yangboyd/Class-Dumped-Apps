//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RCTFrameUpdate : NSObject
{
    double _timestamp;
    double _deltaTime;
}

@property(readonly, nonatomic) double deltaTime; // @synthesize deltaTime=_deltaTime;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithDisplayLink:(id)arg1;
- (id)init;

@end

