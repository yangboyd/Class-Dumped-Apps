//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, SPTFreeTierTasteOnboardingArtistPickerViewModel, SPTFreeTierTasteOnboardingChangeset;

@protocol SPTFreeTierTasteOnboardingArtistPickerViewModelDelegate <NSObject>
- (void)hideCloseButton;
- (void)showCloseButton;
- (void)artistPickerViewModel:(SPTFreeTierTasteOnboardingArtistPickerViewModel *)arg1 requestSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)artistPickerViewModel:(SPTFreeTierTasteOnboardingArtistPickerViewModel *)arg1 updatedItemsWithChangeset:(SPTFreeTierTasteOnboardingChangeset *)arg2;
- (void)artistPickerViewModelWillLoadItems:(SPTFreeTierTasteOnboardingArtistPickerViewModel *)arg1 isFreshData:(_Bool)arg2;
- (void)artistPickerViewModel:(SPTFreeTierTasteOnboardingArtistPickerViewModel *)arg1 isOffline:(_Bool)arg2 isFreshData:(_Bool)arg3;
- (void)artistPickerViewModelDidCancel:(SPTFreeTierTasteOnboardingArtistPickerViewModel *)arg1;
- (void)artistPickerViewModel:(SPTFreeTierTasteOnboardingArtistPickerViewModel *)arg1 didSelectRequiredNumberOfItems:(_Bool)arg2;
- (void)artistPickerViewModelShouldTriggerSecondaryFeedback:(SPTFreeTierTasteOnboardingArtistPickerViewModel *)arg1;
- (void)artistPickerViewModelShouldTriggerPrimaryFeedback:(SPTFreeTierTasteOnboardingArtistPickerViewModel *)arg1;
- (void)artistPickerViewModelDidChangeSelectedItems:(SPTFreeTierTasteOnboardingArtistPickerViewModel *)arg1;
- (void)artistPickerViewModelDidLoadItems:(SPTFreeTierTasteOnboardingArtistPickerViewModel *)arg1;
@end

