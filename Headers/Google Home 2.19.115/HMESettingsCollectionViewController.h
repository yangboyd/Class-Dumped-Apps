//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMEAppBarCollectionViewController.h"

@class HMESettingsSeparatorLayout;

@interface HMESettingsCollectionViewController : HMEAppBarCollectionViewController
{
    HMESettingsSeparatorLayout *_settingsLayout;
}

@property(readonly, nonatomic) HMESettingsSeparatorLayout *settingsLayout; // @synthesize settingsLayout=_settingsLayout;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 cellHeightAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)viewDidLoad;
- (id)init;

@end

