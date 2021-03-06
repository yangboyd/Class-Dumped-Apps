//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTCollectionViewScrollObserver-Protocol.h"

@class GIMMe, NSString, YTCollectionViewController, YTIndexPathVisibility, YTVideoToHorizontalCardListCellController;

@interface YTFeedActionBarViewExpanderController : NSObject <YTCollectionViewScrollObserver>
{
    YTCollectionViewController *_viewController;
    YTIndexPathVisibility *_indexPathVisibility;
    YTVideoToHorizontalCardListCellController *_controllerForCellShowingFeedActionBar;
    _Bool _autoOpenEnabled;
    _Bool _swipeOpenEnabled;
    _Bool _attachedObserver;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool attachedObserver; // @synthesize attachedObserver=_attachedObserver;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)topMostVisibleCellController;
- (void)revealAndHideFeedActionBarViews;
- (void)collectionViewControllerDidEndScrollingAnimation:(id)arg1;
- (void)collectionViewControllerDidScrollToTop:(id)arg1;
- (void)collectionViewControllerDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)collectionViewControllerDidEndDecelerating:(id)arg1;
- (void)attachObserver;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

