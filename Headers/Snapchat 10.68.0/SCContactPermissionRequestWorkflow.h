//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContactPermissionRequestPageDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString;
@protocol SCContactPermissionRequestRouter, SCContactPermissionRequestWorkflowDelegate;

@interface SCContactPermissionRequestWorkflow : NSObject <SCTraceEnabled, SCContactPermissionRequestPageDelegate>
{
    id <SCContactPermissionRequestRouter> _router;
    id <SCContactPermissionRequestWorkflowDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)contactPermissionPageCompletedWithPermissionGranted:(_Bool)arg1;
- (void)contactPermissionPageSkipped;
- (void)beginWorkflow;
- (id)initWithRouter:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

