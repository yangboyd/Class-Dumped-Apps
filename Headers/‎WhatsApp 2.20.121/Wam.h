//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface Wam : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (_Bool)shouldSubmitEventAfterSamplingWithCode:(int)arg1 weight:(out int *)arg2;
- (void)logSerializedEvent:(int)arg1 weight:(int)arg2 channel:(int)arg3 serializedEvent:(id)arg4;
- (void)logEvent:(int)arg1 weight:(int)arg2 eventObject:(id)arg3;
- (void)setAttributeToNull:(int)arg1;
- (void)setAttribute:(int)arg1 stringValue:(id)arg2;
- (void)setAttribute:(int)arg1 numericValue:(double)arg2;
- (void)sentAckToChannel:(int)arg1;
- (void)sentAck;
- (id)getDataForChannel:(int)arg1;
- (id)getData;
- (_Bool)forceRotateBuffer;
- (_Bool)hasDataToSendForChannel:(int)arg1;
- (_Bool)hasDataToSend;
- (void)writeScheduled;
- (void)write;
- (id)initWithConfig:(struct wam_config *)arg1;

@end

