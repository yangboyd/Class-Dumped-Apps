//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMCollectionViewController.h"

#import "GOOErrorContentViewObjectDelegate-Protocol.h"
#import "GOONavigationCustomization-Protocol.h"
#import "UDCClearcutLoggingPerformer-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class GOOLoadingContentViewObject, GOONavigationStyle, NSArray, NSSet, NSString, UDCAttributedLabelDelegate, UDCLocationSettingHandler, UDCOverviewModel, UIScrollView, UIView;
@protocol UDCClearcutHelper, UDCOptions;

@interface UDCOverviewViewController : QTMCollectionViewController <GOOErrorContentViewObjectDelegate, GOONavigationCustomization, UDCClearcutLoggingPerformer, UICollectionViewDelegate>
{
    UDCOverviewModel *_UDCModel;
    id <UDCOptions> _options;
    UDCLocationSettingHandler *_locationSettingHandler;
    NSArray *_settingConfigs;
    UDCAttributedLabelDelegate *_labelDelegate;
    GOOLoadingContentViewObject *_loadingContentViewObject;
    id <UDCClearcutHelper> _clearcutHelper;
    int _clearcutEventFlowID;
    _Bool _shouldLogScreenDisplayed;
}

@property(readonly, nonatomic) int clearcutEventFlowID; // @synthesize clearcutEventFlowID=_clearcutEventFlowID;
@property(readonly, nonatomic) id <UDCClearcutHelper> clearcutHelper; // @synthesize clearcutHelper=_clearcutHelper;
- (void).cxx_destruct;
- (void)showDetailsViewForSetting:(id)arg1;
- (void)updateModelWithSectionedArray:(id)arg1;
- (void)showOverview:(id)arg1;
- (void)showError:(id)arg1;
- (void)showLoadingContent;
- (void)tryAgainButtonWasTappedForObject:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)collectionView:(id)arg1 inkTouchStyleAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (unsigned long long)collectionView:(id)arg1 footerStyleForSection:(long long)arg2;
- (unsigned long long)collectionView:(id)arg1 cellDividerStyleInsetsForSection:(long long)arg2;
@property(readonly, nonatomic) GOONavigationStyle *navigationStyle;
- (long long)preferredStatusBarStyle;
- (void)updateUIFromModel;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)modelDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *navigationBannerView;
@property(readonly, nonatomic) UIView *navigationCustomHeaderBackgroundView;
@property(readonly, nonatomic) struct UIEdgeInsets navigationPrimaryScrollInsets;
@property(readonly, nonatomic) UIScrollView *navigationPrimaryScrollView;
@property(readonly, nonatomic) NSSet *navigationSecondaryScrollViews;
@property(readonly) Class superclass;

@end

