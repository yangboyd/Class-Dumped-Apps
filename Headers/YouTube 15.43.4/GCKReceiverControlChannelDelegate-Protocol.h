//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class GCKApplicationStatus, GCKError, GCKReceiverControlChannel, GCKReceiverStatus, NSDictionary;

@protocol GCKReceiverControlChannelDelegate <NSObject>
- (void)receiverControlChannel:(GCKReceiverControlChannel *)arg1 didReceiveAppAvailability:(NSDictionary *)arg2 requestID:(long long)arg3;
- (void)receiverControlChannel:(GCKReceiverControlChannel *)arg1 didReceiveReceiverStatus:(GCKReceiverStatus *)arg2 applicationStatus:(GCKApplicationStatus *)arg3 requestID:(long long)arg4;
- (void)receiverControlChannel:(GCKReceiverControlChannel *)arg1 didReplaceRequestWithID:(long long)arg2;
- (void)receiverControlChannel:(GCKReceiverControlChannel *)arg1 requestDidFailWithID:(long long)arg2 error:(GCKError *)arg3;
- (void)receiverControlChannelDidStopApplication:(GCKReceiverControlChannel *)arg1;
- (void)receiverControlChannel:(GCKReceiverControlChannel *)arg1 didFailToLaunchApplicationWithError:(GCKError *)arg2;
- (void)receiverControlChannel:(GCKReceiverControlChannel *)arg1 didLaunchApplication:(GCKApplicationStatus *)arg2;
@end

