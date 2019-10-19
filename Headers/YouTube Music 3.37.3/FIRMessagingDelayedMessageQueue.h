//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer;
@protocol FIRMessagingRmqScanner;

@interface FIRMessagingDelayedMessageQueue : NSObject
{
    int _persistedMessageCount;
    id <FIRMessagingRmqScanner> _rmqScanner;
    CDUnknownBlockType _sendDelayedMessagesHandler;
    long long _scheduledTimeoutMilliseconds;
    long long _lastDBScanTimestampSeconds;
    NSMutableArray *_messages;
    NSTimer *_sendTimer;
}

@property(retain, nonatomic) NSTimer *sendTimer; // @synthesize sendTimer=_sendTimer;
@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(nonatomic) long long lastDBScanTimestampSeconds; // @synthesize lastDBScanTimestampSeconds=_lastDBScanTimestampSeconds;
@property(nonatomic) long long scheduledTimeoutMilliseconds; // @synthesize scheduledTimeoutMilliseconds=_scheduledTimeoutMilliseconds;
@property(nonatomic) int persistedMessageCount; // @synthesize persistedMessageCount=_persistedMessageCount;
@property(readonly, copy, nonatomic) CDUnknownBlockType sendDelayedMessagesHandler; // @synthesize sendDelayedMessagesHandler=_sendDelayedMessagesHandler;
@property(readonly, nonatomic) __weak id <FIRMessagingRmqScanner> rmqScanner; // @synthesize rmqScanner=_rmqScanner;
- (void).cxx_destruct;
- (void)cancelTimeout;
- (void)scheduleTimeoutInMillis:(long long)arg1;
- (long long)calculateTimeoutInMillisWithDelayInSeconds:(int)arg1;
- (_Bool)isTimeoutScheduled;
- (long long)messageCount;
- (void)sendMessages;
- (id)removeDelayedMessages;
- (_Bool)queueMessage:(id)arg1;
- (id)initWithRmqScanner:(id)arg1 sendDelayedMessagesHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

