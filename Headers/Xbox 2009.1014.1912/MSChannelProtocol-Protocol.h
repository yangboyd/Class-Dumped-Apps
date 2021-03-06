//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSEnable-Protocol.h"
#import "NSObject-Protocol.h"

@protocol MSChannelDelegate, NSObject;

@protocol MSChannelProtocol <NSObject, MSEnable>
- (void)resumeWithIdentifyingObject:(id <NSObject>)arg1;
- (void)pauseWithIdentifyingObject:(id <NSObject>)arg1;
- (void)removeDelegate:(id <MSChannelDelegate>)arg1;
- (void)addDelegate:(id <MSChannelDelegate>)arg1;
@end

