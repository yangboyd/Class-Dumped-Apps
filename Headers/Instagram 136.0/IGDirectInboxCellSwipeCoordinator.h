//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDirectInboxCellSwipeCoordinatorType-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectInboxThreadSectionControllerSwipeDelegate-Protocol.h>

@class IGDirectInboxThreadCellViewModel, NSString;
@protocol IGDirectInboxCellSwipeCoordinatorDelegate;

@interface IGDirectInboxCellSwipeCoordinator : NSObject <IGDirectInboxCellSwipeCoordinatorType, IGDirectInboxThreadSectionControllerSwipeDelegate>
{
    IGDirectInboxThreadCellViewModel *_viewModelSwipedOpen;
    id <IGDirectInboxCellSwipeCoordinatorDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDirectInboxCellSwipeCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)inboxThreadSectionController:(id)arg1 didBeginPanningWithViewModel:(id)arg2;
- (void)inboxThreadSectionController:(id)arg1 didSwipeOpen:(_Bool)arg2 viewModel:(id)arg3;
- (void)clearSwipedOpen;
- (_Bool)isSwipedOpen:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

