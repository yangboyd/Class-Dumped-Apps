//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTAdsSettingsBaseViewController.h"

@class GIMMe, YTCollectionViewController, YTScrollsToTopCoordinator;

@interface YTForceInDisplayAdsMenuViewController : YTAdsSettingsBaseViewController
{
    YTCollectionViewController *_collectionViewController;
    YTScrollsToTopCoordinator *_scrollsToTopCoordinator;
    _Bool _useBackButton;
}

+ (id)arrayOfStringsWithString:(id)arg1;
- (void).cxx_destruct;
- (void)didPressClose;
- (_Bool)onIDFA;
- (_Bool)onForcedViralCampaignID;
- (_Bool)onForcedViralAdResponseURL;
- (_Bool)onForcedPyvAdGroupID;
- (_Bool)onCustomMastheadKeyword;
- (_Bool)onCustomHomepageAdTagURL;
- (_Bool)onForcedHomepageAdType;
- (void)showSettingsPickerWithNavTitle:(id)arg1 pickerSectionTitle:(id)arg2 items:(id)arg3 selectedItemIndex:(unsigned long long)arg4 selectBlock:(CDUnknownBlockType)arg5;
- (void)showSettingsTextFieldWithNavTitle:(id)arg1 textTitle:(id)arg2 text:(id)arg3 textChangeBlock:(CDUnknownBlockType)arg4;
- (id)collectionViewController;
- (void)viewDidLoad;
- (void)loadView;
- (void)pushViewController:(id)arg1;
- (id)initWithScrollsToTopCoordinator:(id)arg1 parentResponder:(id)arg2 useBackButton:(_Bool)arg3;

// Remaining properties
@property(nonatomic) __weak GIMMe *gimme;

@end

