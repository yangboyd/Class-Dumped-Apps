//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseFeedSectionController.h"

#import "AWEAwemeDetailTableViewControllerDelegate-Protocol.h"

@class NSString;

@interface AWEChallengeDetailFeedSectionController : AWEBaseFeedSectionController <AWEAwemeDetailTableViewControllerDelegate>
{
    long long _lastSelectedItemIndex;
    id _transitionContextProvider;
}

@property(nonatomic) __weak id transitionContextProvider; // @synthesize transitionContextProvider=_transitionContextProvider;
@property(nonatomic) long long lastSelectedItemIndex; // @synthesize lastSelectedItemIndex=_lastSelectedItemIndex;
- (void).cxx_destruct;
- (void)enterLiveRoomWithModel:(id)arg1 challengeID:(id)arg2;
- (void)multiColumnShowVideoAtIndex:(long long)arg1 model:(id)arg2 logExtraInfo:(id)arg3;
- (void)multiColumnDidSelectItemAtIndex:(long long)arg1 model:(id)arg2;
- (void)doubleColumnDidSelectItemAtIndex:(long long)arg1 model:(id)arg2;
- (void)showDetailTableViewController:(id)arg1;
- (id)detailTableViewControllerForDoubleColumnAtIndex:(long long)arg1;
- (void)selectHeaderVideoAtIndex:(long long)arg1;
- (void)detailTableViewController:(id)arg1 scrollDidEndAtIndexPath:(id)arg2 model:(id)arg3;
- (void)viewControllerDidAppear:(_Bool)arg1;
- (void)sectionWillDisplayCell:(id)arg1 index:(long long)arg2 model:(id)arg3;
- (void)configSupplementaryHeaderView:(id)arg1;
- (struct CGSize)sizeForHeaderWithCollectionViewSize:(struct CGSize)arg1;
- (Class)headerViewClass;
- (void)didSelectItemAtIndex:(long long)arg1 model:(id)arg2;
- (void)didBindSectionViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

