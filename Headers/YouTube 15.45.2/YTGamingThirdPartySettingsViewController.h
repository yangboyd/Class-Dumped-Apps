//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTStyledViewController.h>

#import "YTEntityStoreObserver-Protocol.h"
#import "YTGAccountLinkChangeObserver-Protocol.h"
#import "YTPageStyleProvider-Protocol.h"

@class NSMutableDictionary, NSString, YTCollectionViewController, YTISettingCategoryCollectionRenderer, YTSettingsSectionController;

@interface YTGamingThirdPartySettingsViewController : YTStyledViewController <YTGAccountLinkChangeObserver, YTEntityStoreObserver, YTPageStyleProvider>
{
    YTCollectionViewController *_collectionViewController;
    YTISettingCategoryCollectionRenderer *_collectionRenderer;
    YTSettingsSectionController *_sectionController;
    NSMutableDictionary *_thirdPartySettingRenderers;
}

+ (id)providerFromThirdPartySetting:(id)arg1;
- (void).cxx_destruct;
- (void)didUpdateKey:(id)arg1 inEntityStore:(id)arg2 withUpdateType:(unsigned long long)arg3 previousEntity:(id)arg4 entity:(id)arg5;
- (void)didUpdateAccountLinkStatus:(_Bool)arg1 forService:(id)arg2;
@property(readonly, nonatomic) long long pageStyle;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

