//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeatureSnapCropImpl.h"

#import "SCCropOverlayViewListener-Protocol.h"

@class NSString;
@protocol SCPreviewLogging;

@interface SCFeatureSnapCropInteractionsImpl : SCFeatureSnapCropImpl <SCCropOverlayViewListener>
{
    _Bool _croppingStateChanged;
    _Bool _activated;
    id <SCPreviewLogging> _previewLogger;
}

- (void).cxx_destruct;
- (unsigned long long)didTapPreviewContainerView:(id)arg1;
- (void)croppingDidFillScreen:(id)arg1;
- (void)croppingDidShowTeachingTooltip:(id)arg1;
- (void)croppingWillDeactivate:(id)arg1;
- (void)croppingDidFinishTransform:(id)arg1;
- (void)croppingDidChangeTransform:(id)arg1;
- (struct CGSize)preferredImageSizeForMediaSize:(struct CGSize)arg1 maxImageSize:(struct CGSize)arg2;
- (long long)cropAwareMediaOrientation;
- (struct CGRect)boundsForBorderOverlayView:(id)arg1;
- (_Bool)deactiveCropping;
- (_Bool)activeCroppingWithListener:(id)arg1 animated:(_Bool)arg2;
- (id)currentCroppingState;
- (id)computeCroppingState:(id)arg1 containerView:(id)arg2 contentScaleFactor:(double)arg3 contentAspectFitSize:(struct CGSize)arg4;
- (id)createOverlayViewWithFrame:(struct CGRect)arg1;
- (id)createIdentityCroppingState:(struct CGSize)arg1 containerView:(id)arg2 contentScaleFactor:(double)arg3;
- (id)createCropToolBarButtonItemWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)configureWithView:(id)arg1;
- (id)initWithUserSession:(id)arg1 previewConfiguration:(id)arg2 previewLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

