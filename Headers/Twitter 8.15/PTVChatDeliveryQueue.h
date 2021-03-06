//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSTimer, PTVMessage;
@protocol PTVChatDeliveryQueueDelegate;

@interface PTVChatDeliveryQueue : NSObject
{
    PTVChatDeliveryQueue *_weakSelf;
    NSDate *_heartRateLimitBeginDate;
    long long _heartsReceivedDuringRateLimitPeriod;
    NSDate *_giftHeartRateLimitBeginDate;
    long long _giftHeartsReceivedDuringRateLimitPeriod;
    PTVMessage *_broadcastEndedMessage;
    NSMutableArray *_eventualChatAndShareMessageQueue;
    NSMutableArray *_immediateChatAndShareMessageQueue;
    NSMutableArray *_heartMessageQueue;
    NSMutableArray *_otherMessageQueue;
    double _tweakedQueueProcessingInterval;
    _Bool _ignoreImmediateChatQueueLimits;
    _Bool _shouldDeliverImmediateMessage;
    id <PTVChatDeliveryQueueDelegate> _chatDeliveryQueueDelegate;
    NSTimer *_queueProcessingTimer;
}

@property(nonatomic) _Bool shouldDeliverImmediateMessage; // @synthesize shouldDeliverImmediateMessage=_shouldDeliverImmediateMessage;
@property(retain, nonatomic) NSTimer *queueProcessingTimer; // @synthesize queueProcessingTimer=_queueProcessingTimer;
@property(nonatomic) __weak id <PTVChatDeliveryQueueDelegate> chatDeliveryQueueDelegate; // @synthesize chatDeliveryQueueDelegate=_chatDeliveryQueueDelegate;
@property(nonatomic) _Bool ignoreImmediateChatQueueLimits; // @synthesize ignoreImmediateChatQueueLimits=_ignoreImmediateChatQueueLimits;
- (void).cxx_destruct;
- (unsigned long long)getIndexForMessage:(id)arg1 inQueue:(id)arg2;
- (void)emptyChatDeliveryQueue;
- (void)stopChatDelivery;
- (void)startChatDeliveryIfNeeded;
- (_Bool)unloadBroadcastEndedMessageImmediatelyFromQueue;
- (void)otherMessageQueueDeliveryBlock;
- (void)heartMessageQueueDeliveryBlock;
- (void)immediateChatMessageQueueDeliveryBlock;
- (void)eventualChatMessageQueueDeliveryBlock;
- (void)messageMuted:(id)arg1;
- (void)addMessage:(id)arg1 toQueue:(id)arg2;
- (void)addMessage:(id)arg1 toFrontQueue:(id)arg2;
- (void)addNewMessageToAppropriateQueue:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

