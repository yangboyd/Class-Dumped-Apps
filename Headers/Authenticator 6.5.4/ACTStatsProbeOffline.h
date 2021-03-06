//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AriaObjC/ACTIStatsProbeDelegate-Protocol.h>

@class NSString;
@protocol ACTIEventBaseDelegate;

@interface ACTStatsProbeOffline : NSObject <ACTIStatsProbeDelegate>
{
    id <ACTIEventBaseDelegate> _delegate;
}

@property(retain, nonatomic) id <ACTIEventBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)intakeReceiveEventSize:(long long)arg1 logReason:(id)arg2 component:(id)arg3;
- (void)intakeReceiveEvent:(id)arg1 size:(long long)arg2 logReason:(id)arg3 component:(id)arg4;
- (void)intakeDeleteMultiple:(id)arg1 logReason:(id)arg2 component:(id)arg3;
- (void)intakeLoadMultiple:(id)arg1 logReason:(id)arg2 component:(id)arg3;
- (void)intakeRequeueMultiple:(id)arg1 requeueReason:(id)arg2 logReason:(id)arg3 component:(id)arg4;
- (void)intakeRetryMultiple:(id)arg1 retryReason:(id)arg2 logReason:(id)arg3 component:(id)arg4;
- (void)intakeSentMultiple:(id)arg1 component:(id)arg2 data:(id)arg3;
- (void)intakeSave:(id)arg1 component:(id)arg2;
- (void)intakeRejectMultiple:(id)arg1 rejectReason:(int)arg2 logReason:(id)arg3 component:(id)arg4;
- (void)intakeReject:(id)arg1 rejectReason:(int)arg2 logReason:(id)arg3 component:(id)arg4;
- (void)intakeOverflow:(id)arg1 overflowReason:(int)arg2 logReason:(id)arg3 component:(id)arg4;
- (void)intakeDropMultiple:(id)arg1 dropReason:(int)arg2 logReason:(id)arg3 component:(id)arg4 statusCode:(long long)arg5;
- (void)intakeDrop:(id)arg1 dropReason:(int)arg2 logReason:(id)arg3 component:(id)arg4 statusCode:(long long)arg5;
- (void)intakeDropTenant:(id)arg1 priority:(int)arg2 dropReason:(int)arg3 logReason:(id)arg4 component:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

