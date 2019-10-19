//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCAddFriendsTakeoverActionHandlerDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSArray, NSString, SCAddFriendsQuickAddLogger, SCAddFriendsTakeoverActionHandler, SCAddFriendsTakeoverV2View, SCPreferences, UIImage;
@protocol SCAddFriendsTakeOverCollectionViewMutating, SCAddFriendsTakeOverWorkflowDelegate, SCImageDownloading;

@interface SCAddFriendsTakeoverV2ViewController : UIViewController <SCAddFriendsTakeoverActionHandlerDelegate, SCTraceEnabled>
{
    NSArray *_snapchatters;
    SCPreferences *_takeoverPreferences;
    SCAddFriendsTakeoverActionHandler *_actionHandler;
    SCAddFriendsTakeoverV2View *_takeroverView;
    id <SCImageDownloading> _imageDownloader;
    unsigned long long _snapchatterIndex;
    SCAddFriendsQuickAddLogger *_logger;
    id <SCAddFriendsTakeOverWorkflowDelegate> _workflowDelegate;
    id <SCAddFriendsTakeOverCollectionViewMutating> _collectionViewMutator;
    UIImage *_confettiImage;
}

- (void).cxx_destruct;
- (void)_markFriendRequestAsSeen:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_presentFirstFriendRequest;
- (void)_presentNextFriendsRequestOrDismiss;
- (void)_swipeInCarouselView;
- (void)didHandleDoneAction;
- (void)didHandleIgnoreAction;
- (void)didHandleAddAction;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSnapchatters:(id)arg1 imageDownloader:(id)arg2 takeoverPreference:(id)arg3 quickAddLogger:(id)arg4 actionHandler:(id)arg5 workflowDelegate:(id)arg6 collectionViewMutator:(id)arg7 confettiImage:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

