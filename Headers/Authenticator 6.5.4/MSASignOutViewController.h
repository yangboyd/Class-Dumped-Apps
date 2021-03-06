//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

#import "MSAViewController-Protocol.h"

@class NSString;
@protocol MSAViewControllerTelemetryDelegate;

@interface MSASignOutViewController : UIAlertController <MSAViewController>
{
    id <MSAViewControllerTelemetryDelegate> _telemetryDelegate;
}

+ (id)signOutViewControllerForAccount:(id)arg1 message:(id)arg2 cancelAction:(CDUnknownBlockType)arg3 appAction:(CDUnknownBlockType)arg4 deviceAction:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property __weak id <MSAViewControllerTelemetryDelegate> telemetryDelegate; // @synthesize telemetryDelegate=_telemetryDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) CDUnknownBlockType finishedBlock;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

