//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASMResourceKey;

@interface ASMHeartbeat : NSObject
{
    int _currentHeartbeatTime;
    int _nextHeartbeatTime;
    ASMResourceKey *_screenKey;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int nextHeartbeatTime; // @synthesize nextHeartbeatTime=_nextHeartbeatTime;
@property(readonly, nonatomic) int currentHeartbeatTime; // @synthesize currentHeartbeatTime=_currentHeartbeatTime;
@property(readonly, nonatomic) ASMResourceKey *screenKey; // @synthesize screenKey=_screenKey;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithScreenKey:(id)arg1 currentHeartbeatTime:(int)arg2;
- (id)initWithScreenKey:(id)arg1 currentHeartbeatTime:(int)arg2 nextHeartbeatTime:(int)arg3;

@end

