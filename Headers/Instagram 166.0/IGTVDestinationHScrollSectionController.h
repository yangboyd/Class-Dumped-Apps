//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import <InstagramAppCoreFramework/IGTVDestinationHScrollVideoSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVHScrollLoadingSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVHorizontalChannelListControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVLiveNowHeaderCellDelegate-Protocol.h>

@class IGTVDestinationLoggingContext, IGTVHScrollLoadingViewModel, IGTVHorizontalChannelListController, IGUserSession, NSArray, NSString;
@protocol IGTVDestinationHScrollSectionControllerDelegate;

@interface IGTVDestinationHScrollSectionController : IGListGenericSectionController <IGTVDestinationHScrollVideoSectionControllerDelegate, IGTVHScrollLoadingSectionControllerDelegate, IGTVHorizontalChannelListControllerDelegate, IGTVLiveNowHeaderCellDelegate>
{
    IGUserSession *_userSession;
    IGTVDestinationLoggingContext *_loggingContext;
    IGTVHorizontalChannelListController *_listController;
    NSArray *_loadingViewModels;
    IGTVHScrollLoadingViewModel *_canLoadMoreViewModel;
    id <IGTVDestinationHScrollSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTVDestinationHScrollSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_component;
- (void)liveNowHeaderCellDidTapSeeAllButton:(id)arg1;
- (void)destinationHScrollVideoSectionController:(id)arg1 didTapTrayItem:(id)arg2 withVideoPosition:(id)arg3;
- (void)destinationHScrollVideoSectionController:(id)arg1 didLongPressFeedItem:(id)arg2 withVideoPosition:(id)arg3;
- (void)destinationHScrollVideoSectionController:(id)arg1 didTapFeedItem:(id)arg2 withVideoPosition:(id)arg3;
- (long long)loggingPositionForDestinationHScrollVideoSectionController;
- (struct CGSize)sizeForItemInHScrollLoadingSectionController:(id)arg1;
- (id)horizontalChannelListController:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)horizontalChannelListController:(id)arg1 objectsForFeedItems:(id)arg2 liveItems:(id)arg3 loadingState:(long long)arg4;
- (id)_liveNowHeaderViewModel;
- (id)_headerViewModel;
- (id)_viewModel;
- (id)_channelDataSource;
- (struct UIEdgeInsets)inset;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 loggingContext:(id)arg2 scrollPerfLogger:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

