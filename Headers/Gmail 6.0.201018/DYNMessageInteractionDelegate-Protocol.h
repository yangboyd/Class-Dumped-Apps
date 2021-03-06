//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JAddOnsFormAction, NSDictionary;
@protocol DYNMessage, DYNUserId;

@protocol DYNMessageInteractionDelegate <NSObject>
- (void)messageTappedButtonInCMLCardForMessage:(id <DYNMessage>)arg1 formAction:(JAddOnsFormAction *)arg2;
- (void)messageLoadedLocalAnnotation:(id <DYNMessage>)arg1;
- (void)messageReceivedLongPress:(id <DYNMessage>)arg1;
- (void)messageReceivedDoubleTap:(id <DYNMessage>)arg1;
- (void)message:(id <DYNMessage>)arg1 receivedTapWithAttributes:(NSDictionary *)arg2;
- (void)messageReceivedTap:(id <DYNMessage>)arg1 forUserId:(id <DYNUserId>)arg2;
- (void)messageReceivedTap:(id <DYNMessage>)arg1;
@end

