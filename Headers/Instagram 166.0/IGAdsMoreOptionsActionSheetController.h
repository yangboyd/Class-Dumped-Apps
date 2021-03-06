//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAdsMoreOptionsActionsContainerViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGPartialModalSheetListener-Protocol.h>

@class IGAdsMoreOptionsActionModel, IGAdsMoreOptionsActionReasonModel, IGPartialModalSheetViewController, IGUserSession, NSString;
@protocol IGAdsMoreOptionsActionSheetControllerDelegate;

@interface IGAdsMoreOptionsActionSheetController : NSObject <IGAdsMoreOptionsActionsContainerViewControllerDelegate, IGPartialModalSheetListener>
{
    IGUserSession *_userSession;
    IGPartialModalSheetViewController *_partialModalSheetViewController;
    IGAdsMoreOptionsActionModel *_currentAction;
    IGAdsMoreOptionsActionReasonModel *_currentReasons;
    id <IGAdsMoreOptionsActionSheetControllerDelegate> _delegate;
    long long _actionStep;
}

- (void).cxx_destruct;
@property(nonatomic) long long actionStep; // @synthesize actionStep=_actionStep;
@property(nonatomic) __weak id <IGAdsMoreOptionsActionSheetControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)adsMoreOptionsContainerViewController:(id)arg1 didSelectAdsAction:(id)arg2;
- (void)adsMoreOptionsContainerViewController:(id)arg1 didSelectReason:(id)arg2 adsAction:(id)arg3;
- (void)adsMoreOptionsContainerViewController:(id)arg1 shouldPopToHeight:(double)arg2;
- (void)adsMoreOptionsContainerViewController:(id)arg1 willNavToStep:(long long)arg2;
- (void)presentMoreOptionsActionSheetWithActionTypes:(id)arg1 fromViewController:(id)arg2 analyticsModule:(id)arg3;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

