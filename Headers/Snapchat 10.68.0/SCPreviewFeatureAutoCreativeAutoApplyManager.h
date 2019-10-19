//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCAutoCreativeManager-Protocol.h"

@class NSString, SCGeoFilter;
@protocol SCAutoCreativeMediaDelegate, SCAutoCreativeUIDelegate;

@interface SCPreviewFeatureAutoCreativeAutoApplyManager : SCFeature <SCAutoCreativeManager>
{
    SCGeoFilter *_selectedCreative;
    double _selectedCreativeScore;
    id <SCAutoCreativeUIDelegate> _uiManager;
    id <SCAutoCreativeMediaDelegate> mediaDelegate;
}

@property(nonatomic) __weak id <SCAutoCreativeMediaDelegate> mediaDelegate; // @synthesize mediaDelegate;
- (void).cxx_destruct;
- (_Bool)iOSMediaFiltersApplicable;
- (void)blockAutoCreative;
- (void)startImageClassification:(id)arg1;
- (void)autoCreativeUIDelegate:(id)arg1 didDrawUIForCreativeFilter:(id)arg2;
- (id)selectedFilter;
- (void)autoCreativeFilterBecameReady:(id)arg1 score:(double)arg2;
- (_Bool)shouldSelectAutoCreativeFilter:(id)arg1;
- (void)configureWithView:(id)arg1;
- (id)initWithUIManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

