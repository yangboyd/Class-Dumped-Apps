//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCModalContainerViewController.h"

#import "SCGroupInviteEventProfileContentViewControllerDelegate-Protocol.h"

@class NSString;
@protocol SCGroupInviteSwipeUpViewControllerDelegate;

@interface SCGroupInviteSwipeUpViewController : SCModalContainerViewController <SCGroupInviteEventProfileContentViewControllerDelegate>
{
    id <SCGroupInviteSwipeUpViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCGroupInviteSwipeUpViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)groupInviteEventProfileContentViewController:(id)arg1 wantsToLogContextMenuActionMetric:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithGroupId:(id)arg1 inviteId:(id)arg2 legacyGroupInviteId:(id)arg3 dependencies:(id)arg4 actionHandler:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

