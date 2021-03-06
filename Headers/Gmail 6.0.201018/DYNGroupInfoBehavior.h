//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNGroupInfoSubscriptionDirectMessageCreationListener-Protocol.h"
#import "DYNGroupInfoSubscriptionServiceListener-Protocol.h"
#import "DYNIconTextButtonViewDelegate-Protocol.h"
#import "DYNStreamBehavior-Protocol.h"

@class NSString;
@protocol DYNStream;

@interface DYNGroupInfoBehavior : NSObject <DYNGroupInfoSubscriptionServiceListener, DYNGroupInfoSubscriptionDirectMessageCreationListener, DYNIconTextButtonViewDelegate, DYNStreamBehavior>
{
    id <DYNStream> _stream;
}

- (void).cxx_destruct;
- (id)userIdForCurrentAccountUserWithAccountID:(id)arg1;
- (id)userIDsFromUsers:(id)arg1;
- (id)creatingDirectMessageIDsFromState:(id)arg1;
- (void)subscribeToGroupCreationWithState:(id)arg1 accountID:(id)arg2;
- (void)onFetchGroupInfoFailureWithError:(id)arg1;
- (void)subscribeToGroupWithID:(id)arg1 accountID:(id)arg2;
- (void)presentRetryView;
- (void)popToRootViewControllerAndShowErrorWithMessageID:(int)arg1;
- (id)localizedRemovedFromGroupMessageWithGroupName:(id)arg1;
- (void)subscribeToGroupIfNecessaryWithState:(id)arg1;
- (void)exitPreviewIfAppropriateInStream:(id)arg1 withState:(id)arg2;
- (_Bool)didPopStream:(id)arg1 withState:(id)arg2;
- (void)directMessageCreatedWithID:(id)arg1 userIDs:(id)arg2;
- (void)groupEncounteredError:(id)arg1 forGroupID:(id)arg2;
- (void)groupJoinedWithID:(id)arg1;
- (void)membershipRemovedForGroupWithID:(id)arg1;
- (void)groupInfoUpdated:(id)arg1 forGroupID:(id)arg2;
- (void)iconTextButtonViewButtonTapped;
- (void)finalizeWithStreamState:(id)arg1;
- (void)handleEventsInStream:(id)arg1 withState:(id)arg2 oldState:(id)arg3;
- (void)initializeWithStream:(id)arg1 state:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

