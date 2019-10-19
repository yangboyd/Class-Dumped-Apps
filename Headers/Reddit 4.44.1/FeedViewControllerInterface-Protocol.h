//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FeedPostHlsVideoViewDelegate-Protocol.h"
#import "FeedPresentable-Protocol.h"
#import "FeedSortOptionControllerDelegate-Protocol.h"
#import "FeedWebViewControllerDelegate-Protocol.h"
#import "FlairSelectionSourceViewProtocol-Protocol.h"
#import "FloatingHeaderCallbackProtocol-Protocol.h"
#import "HeaderBarViewDelegate-Protocol.h"
#import "NSObject-Protocol.h"
#import "PagedTabControllerProtocol-Protocol.h"
#import "PostModerateActionSheetDelegate-Protocol.h"
#import "RUIActionSheetViewControllerDelegate-Protocol.h"

@class CarouselDelegator, FeedNavigator, UICollectionView, UIScrollView;
@protocol FeedScrollEventObserver;

@protocol FeedViewControllerInterface <NSObject, FeedPresentable, HeaderBarViewDelegate, FeedSortOptionControllerDelegate, FeedWebViewControllerDelegate, PostModerateActionSheetDelegate, PagedTabControllerProtocol, RUIActionSheetViewControllerDelegate, FeedPostHlsVideoViewDelegate, FlairSelectionSourceViewProtocol, FloatingHeaderCallbackProtocol>
@property(readonly, nonatomic) UIScrollView *majorContentScrollView;
@property(nonatomic) __weak id <FeedScrollEventObserver> scrollEventObserver;
@property(readonly, nonatomic) UICollectionView *feedCollectionView;
@property(readonly, nonatomic) CarouselDelegator *carouselDelegator;
@property(readonly, nonatomic) FeedNavigator *navigator;
@end

