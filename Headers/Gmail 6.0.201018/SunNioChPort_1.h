//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SunNioChPort_PollableChannel-Protocol.h"

@class NSString;
@protocol JavaNioChannelsChannel;

@interface SunNioChPort_1 : NSObject <SunNioChPort_PollableChannel>
{
    id <JavaNioChannelsChannel> val$channel_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)close;
- (void)onEventWithInt:(int)arg1 withBoolean:(_Bool)arg2;
- (id)initWithJavaNioChannelsChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

