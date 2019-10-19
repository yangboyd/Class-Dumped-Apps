//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HTTPBatchRequestTaskDelegateProtocol-Protocol.h"
#import "NFUIPostPlayControllerProtocol-Protocol.h"

@class InteractiveDataModel, NFUIPlayerControlsRefreshViewController, NFUIPlayerViewController, NSString, PostPlayViewModel, UIActivityIndicatorView;
@protocol NFUIPostPlayDelegate><NFIPostPlayDelegate;

@interface NFIPostPlayViewController : UIViewController <HTTPBatchRequestTaskDelegateProtocol, NFUIPostPlayControllerProtocol>
{
    id <NFUIPostPlayDelegate><NFIPostPlayDelegate> _delegate;
    PostPlayViewModel *_model;
    NFUIPlayerViewController *_playerViewController;
    NFUIPlayerControlsRefreshViewController *_playerControlsViewController;
    InteractiveDataModel *_interactiveDataModel;
    UIActivityIndicatorView *_loadingIndicator;
    UIViewController *_childViewController;
}

@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) InteractiveDataModel *interactiveDataModel; // @synthesize interactiveDataModel=_interactiveDataModel;
@property(nonatomic) __weak NFUIPlayerControlsRefreshViewController *playerControlsViewController; // @synthesize playerControlsViewController=_playerControlsViewController;
@property(nonatomic) __weak NFUIPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(retain, nonatomic) PostPlayViewModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <NFUIPostPlayDelegate><NFIPostPlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)batchRequestAllTasksDidFinish:(id)arg1;
- (void)batchRequest:(id)arg1 taskDidFinish:(id)arg2;
- (void)showDefaultPostPlay;
- (void)dismissWithPlaybackRequest:(id)arg1;
- (void)didSelectPostPlayItem:(id)arg1;
- (id)viewController;
- (void)playbackDidEnd;
- (void)configureWithModel:(id)arg1;
- (void)presentPostPlayViewController:(id)arg1;
- (id)assetsAwaitingLoad;
- (void)configureWithDataModel:(id)arg1;
- (id)initWithVideoId:(id)arg1 interactiveDataModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

