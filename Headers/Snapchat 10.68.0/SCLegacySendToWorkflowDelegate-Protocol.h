//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCLegacySendToScope, SCLegacySendToSelection;

@protocol SCLegacySendToWorkflowDelegate <NSObject>
- (void)legacySendToScopeWantsToSend:(SCLegacySendToScope *)arg1 sendToSelection:(SCLegacySendToSelection *)arg2;
- (void)legacySendToScopeDidDismiss:(SCLegacySendToScope *)arg1 restorationToken:(id)arg2;
- (void)legacySendToScopeWantsToDismiss:(SCLegacySendToScope *)arg1 restorationToken:(id)arg2;
@end

