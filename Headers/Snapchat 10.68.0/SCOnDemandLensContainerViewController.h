//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCOnDemandGeofilterCreativeStudioViewDelegate-Protocol.h"
#import "SCOnDemandLensAllTimeHitsTemplateDataStoreProtocolListener-Protocol.h"
#import "SCOnDemandLensViewControllerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, SCGrowingButton, SCOnDemandLensCreativeStudioViewController, SCOnDemandLensTemplateModel, UIView;
@protocol SCOnDemandGeofilterSessionProtocol, SCOnDemandLensViewControllerProtocol;

@interface SCOnDemandLensContainerViewController : UIViewController <SCOnDemandGeofilterCreativeStudioViewDelegate, SCOnDemandLensViewControllerDelegate, SCOnDemandLensAllTimeHitsTemplateDataStoreProtocolListener>
{
    id <SCOnDemandGeofilterSessionProtocol> _geofilterSession;
    SCGrowingButton *_dismissButton;
    UIView *_carouselContainer;
    UIViewController<SCOnDemandLensViewControllerProtocol> *_lensCustomizationViewController;
    SCOnDemandLensCreativeStudioViewController *_creativeStudioViewController;
    SCOnDemandLensTemplateModel *_lensTemplateModel;
    _Bool _reviewMode;
    NSMutableDictionary *_lensIdToTemplateIndexDict;
    NSString *_appliedLensIdForCreativeStudio;
    unsigned long long _mode;
}

@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)_updateTemplateCategoryForCreativeStudio;
- (void)_buildTemplateListForAllTimeHitsCategory;
- (void)_buildTemplatesIndicesForLensIds;
- (long long)_indexOfTemplateByLensId:(id)arg1;
- (void)allTimeHitsTemplateDataStore:(id)arg1 didUpdateSelectedAllTimeHitsTemplates:(id)arg2;
- (void)onDemandLensViewController:(id)arg1 didApplyObjectWithId:(id)arg2;
- (void)onDemandLensViewController:(id)arg1 didSelectObjectWithId:(id)arg2;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)shouldPopToRootViewController;
- (void)creativeStudioEditingCompleted;
- (void)creativeStudioDismissed;
- (void)_dismiss;
- (_Bool)isVisible;
- (void)_updateUIBasedOnModeAnimated:(_Bool)arg1;
- (void)setMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithOnDemandLensTemplateModel:(id)arg1 geofilterSession:(id)arg2 reviewMode:(_Bool)arg3;
- (id)initWithOnDemandLensTemplateModel:(id)arg1 geofilterSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

