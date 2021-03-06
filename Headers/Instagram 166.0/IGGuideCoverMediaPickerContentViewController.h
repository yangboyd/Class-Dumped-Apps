//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGFeedNetworkSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGFeedScrollViewListener-Protocol.h>
#import <InstagramAppCoreFramework/IGGuideProductMediaThumbnailSectionControllerSelectionDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGMediaThumbnailSectionControllerSelectionDelegate-Protocol.h>

@class IGFeedNetworkSource, IGFeedStarterKit, IGUserSession, NSArray, NSString;
@protocol IGGuideCoverMediaPickerContentViewControllerDelegate;

@interface IGGuideCoverMediaPickerContentViewController : IGViewController <IGFeedNetworkSourceDelegate, IGFeedScrollViewListener, IGListAdapterDataSource, IGMediaThumbnailSectionControllerSelectionDelegate, IGGuideProductMediaThumbnailSectionControllerSelectionDelegate>
{
    IGUserSession *_userSession;
    IGFeedNetworkSource *_feedNetworkSource;
    IGFeedStarterKit *_feedStarterKit;
    NSArray *_guideMediaItems;
    id <IGGuideCoverMediaPickerContentViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGGuideCoverMediaPickerContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)guideProductMediaThumbnailSectionController:(id)arg1 didSelectProductImageContent:(id)arg2;
- (void)didSelectFeedItem:(id)arg1 usingForceTouch:(_Bool)arg2;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)_filterListObjects:(id)arg1;
- (id)objectsForListAdapter:(id)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)_fetchMedia;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 feedNetworkSource:(id)arg2 guideMediaItems:(id)arg3;
- (id)initWithUserSession:(id)arg1 guideMediaItems:(id)arg2;
- (id)initWithUserSession:(id)arg1 feedNetworkSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

