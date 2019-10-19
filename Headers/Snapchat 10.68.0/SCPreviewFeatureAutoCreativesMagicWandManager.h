//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCAutoCreativeManager-Protocol.h"

@class NSArray, NSString, SCExperimentManager, SCGeoFilter, SCPreviewConfiguration, SCQueuePerformer;
@protocol SCAutoCreativeMediaDelegate, SCAutoCreativeUIDelegate;

@interface SCPreviewFeatureAutoCreativesMagicWandManager : SCFeature <SCAutoCreativeManager>
{
    SCGeoFilter *_selectedCreative;
    double _selectedCreativeScore;
    id <SCAutoCreativeUIDelegate> _uiManager;
    SCPreviewConfiguration *_configuration;
    SCQueuePerformer *_performer;
    NSArray *_iOSApplicableFilters;
    SCExperimentManager *_experimentManager;
    id <SCAutoCreativeMediaDelegate> _mediaDelegate;
}

@property(nonatomic) __weak id <SCAutoCreativeMediaDelegate> mediaDelegate; // @synthesize mediaDelegate=_mediaDelegate;
- (void).cxx_destruct;
- (void)autoCreativeUIDelegate:(id)arg1 didDrawUIForCreativeFilter:(id)arg2;
- (void)startImageClassification:(id)arg1;
- (_Bool)iOSMediaFiltersApplicable;
- (id)selectedFilter;
- (_Bool)_isPreferredFilter:(id)arg1 score:(double)arg2;
- (void)autoCreativeFilterBecameReady:(id)arg1 score:(double)arg2;
- (_Bool)_isApplicableOrderedCarouselFilter:(id)arg1;
- (_Bool)_isApplicableVisualContextFilter:(id)arg1;
- (_Bool)_isApplicableSegmentationFilter:(id)arg1;
- (void)blockAutoCreative;
- (_Bool)shouldSelectAutoCreativeFilter:(id)arg1;
- (void)configureWithView:(id)arg1;
- (id)initWithUIManager:(id)arg1 configuration:(id)arg2 experimentManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

