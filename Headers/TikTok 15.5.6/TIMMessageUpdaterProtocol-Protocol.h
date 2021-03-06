//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol TIMMessageUpdaterProtocol <NSObject>
- (void)requestAllMessageProperty;
- (void)requestAllFailedMessageProperty;
- (void)modifyPropertyItemsForMessage:(NSString *)arg1 inConversation:(NSString *)arg2 modifyProperties:(NSArray *)arg3 force:(_Bool)arg4;
- (void)recallMessage:(NSString *)arg1 inConversation:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
@end

