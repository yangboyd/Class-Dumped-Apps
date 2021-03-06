//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIClipsModuleCell.h"

@class NFUIClipsPlayerViewController, NFUIFocusDimOverlay;

@interface NFUIClipsSingleItemCell : NFUIClipsModuleCell
{
    NFUIClipsPlayerViewController *_playerController;
    NFUIFocusDimOverlay *_focusOverlay;
}

+ (id)viewModelForListModel:(id)arg1 withIndexPath:(id)arg2;
+ (id)reuseIdentifier;
+ (_Bool)shouldReturnClassForType:(id)arg1 withModel:(id)arg2;
+ (void)load;
@property(retain, nonatomic) NFUIFocusDimOverlay *focusOverlay; // @synthesize focusOverlay=_focusOverlay;
@property(retain, nonatomic) NFUIClipsPlayerViewController *playerController; // @synthesize playerController=_playerController;
- (void).cxx_destruct;
- (void)initializeVisibleCellsAfterTransitionIncludeSelf:(_Bool)arg1;
- (void)performInitialSetupActivelyScrolling:(_Bool)arg1;
- (void)setFocusThresholdValue:(double)arg1;
- (double)focusThresholdValue;
- (void)setIsFocused:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isFocused;
- (void)stopPlayersIfNeededForPaths:(id)arg1;
- (void)notifyCellThatWillStopDisplayingForPaths:(id)arg1;
- (id)pathsForVisibleCells;
- (void)setCellsInactiveExceptCurrentCellIfNeeded;
- (void)stopPlayersForAllCellsIfNeeded;
- (void)visibleInfoForViewInScrollView:(id)arg1;
- (void)cellDidEndDisplaying:(id)arg1;
- (void)setDelegateViewController:(id)arg1;
- (struct CGSize)calculatedSize:(struct CGSize)arg1 withModel:(id)arg2 withCollectionView:(id)arg3;
- (void)modifyPlayer;
- (void)setupFocusOverlay;
- (id)initWithFrame:(struct CGRect)arg1;

@end

