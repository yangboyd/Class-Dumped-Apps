//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAReceiveMessage : SCAUserTrackedEvent
{
}

- (void)setStepLatenciesMs:(id)arg1;
- (void)setReceiveMessageTotalLatencyMs:(long long)arg1;
- (void)setReceiveMessageStatus:(long long)arg1;
- (void)setReceiveMessageStartTimestamp:(long long)arg1;
- (void)setReceiveMessageEndTimestamp:(long long)arg1;
- (void)setReceiveMessageAttemptId:(id)arg1;
- (void)setMessageType:(id)arg1;
- (void)setMessageReceiptType:(long long)arg1;
- (void)setMessageId:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setIsGroupConversation:(_Bool)arg1;
- (void)setFailedStep:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)xLogObjectInfo;

@end

