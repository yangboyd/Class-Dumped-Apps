//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDKApprovalRequestContext, GDKRequestApprovalsState, NSArray, NSObject;
@protocol OS_dispatch_queue;

@protocol GDKApprovalRequestAction <NSObject>
@property(readonly, nonatomic) GDKApprovalRequestContext *requestContext;
- (void)performActionWithState:(GDKRequestApprovalsState *)arg1 reviewerEmails:(NSArray *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(GDKApproval *, NSError *))arg4;
@end

