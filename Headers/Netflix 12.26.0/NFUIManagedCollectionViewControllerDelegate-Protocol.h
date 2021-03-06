//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUICellSelectionProtocol-Protocol.h"
#import "NSObject-Protocol.h"

@class NFUICollectionViewCellManager, NSIndexPath, NSString, NavigationBarAppearanceManager, UIScrollView;

@protocol NFUIManagedCollectionViewControllerDelegate <NSObject, NFUICellSelectionProtocol>

@optional
- (double)minimumLineSpacingForSection:(long long)arg1;
- (double)minimumInterItemSpacingForSection:(long long)arg1;
@property(nonatomic, retain) NFUICollectionViewCellManager *cellManager;
@property(nonatomic, retain) NavigationBarAppearanceManager *navBarManager;
- (void)didTransitionCellAtIndexPathToFullScreen:(id)arg1 forIndexPath:(NSIndexPath *)arg2;
- (void)willChangeCellStateForFullScreenTransition:(id)arg1 forIndexPath:(NSIndexPath *)arg2;
- (void)willTransitionCellAtIndexPathToFullScreen:(id)arg1 forIndexPath:(NSIndexPath *)arg2;
- (id)prepareToTransitionCellAtIndexPathToFullScreen:(id)arg1 forIndexPath:(NSIndexPath *)arg2;
- (void)cellDidCalculateSizeWithModel:(id)arg1 forIndexPath:(NSIndexPath *)arg2 withCalculatedSize:(struct CGSize)arg3;
- (void)cellWillCalculateSizeWithModel:(id)arg1 forIndexPath:(NSIndexPath *)arg2;
- (void)cellDidEndDisplaying:(id)arg1 forIndexPath:(NSIndexPath *)arg2 forKind:(NSString *)arg3;
- (void)cellWillEndDisplaying:(id)arg1 forIndexPath:(NSIndexPath *)arg2 forKind:(NSString *)arg3;
- (void)cellDidDisplay:(id)arg1 forIndexPath:(NSIndexPath *)arg2 forKind:(NSString *)arg3;
- (void)cellWillDisplay:(id)arg1 forIndexPath:(NSIndexPath *)arg2 forKind:(NSString *)arg3;
- (void)cellDidSetViewModel:(id)arg1 forIndexPath:(NSIndexPath *)arg2;
- (void)cellWillSetViewModel:(id)arg1 forIndexPath:(NSIndexPath *)arg2;
- (void)cellDidDequeueForModel:(id)arg1 forIndexPath:(NSIndexPath *)arg2 withCell:(id)arg3;
- (void)cellWillDequeueForModel:(id)arg1 forIndexPath:(NSIndexPath *)arg2;
- (void)presentationTrackingTriggerFromScroll;
- (void)didScrollEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)didScrollEndDecelerating:(UIScrollView *)arg1;
- (void)didScrollBeginDragging:(UIScrollView *)arg1;
- (void)didScroll:(UIScrollView *)arg1;
- (void)didDeselectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (struct UIEdgeInsets)insetsForSection:(long long)arg1;
- (id)modelForIndexPath:(NSIndexPath *)arg1 forKind:(NSString *)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
@end

