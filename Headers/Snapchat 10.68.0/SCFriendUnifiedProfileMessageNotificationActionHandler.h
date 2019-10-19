//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCNotificationStatusCompletionDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCNotificationStatusActionHandler, UIViewController;
@protocol SCFriendUnifiedProfileMessageNotificationActionHandlerDelegate;

@interface SCFriendUnifiedProfileMessageNotificationActionHandler : NSObject <SCNotificationStatusCompletionDelegate, SCTraceEnabled, SCActionHandling>
{
    SCNotificationStatusActionHandler *_notificationStatusActionHandler;
    UIViewController *_presentingViewController;
    id <SCFriendUnifiedProfileMessageNotificationActionHandlerDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SCFriendUnifiedProfileMessageNotificationActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)didChangeNotificationStatusWithSuccess:(_Bool)arg1 isDotNotDisturb:(_Bool)arg2;
- (void)didStartChangeNotificationStatus:(_Bool)arg1;
- (void)_updateMessageNotification:(_Bool)arg1;
- (id)_messageNotificationAlertController;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUsername:(id)arg1 conversationId:(id)arg2 source:(long long)arg3 requestManager:(id)arg4 presentingViewController:(id)arg5 delegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

