//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFUIAnimationControllerProtocol-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NFUIBillboardPreviewsEntity, NFUIBillboardPreviewsListViewModel, NFUIBillboardPreviewsOverlayView, NFUIGradientView, NFUITitleTreatmentView, NSString, UIImage, UIView;

@interface NFUIBillboardPreviewsAnimationController : NSObject <NFUIAnimationControllerProtocol, UIViewControllerTransitioningDelegate>
{
    _Bool _reverse;
    _Bool _disableTitleTreatmentAnimation;
    double _duration;
    UIView *_overlayView;
    NFUITitleTreatmentView *_sourceTitleTreatmentView;
    UIImage *_sourceTitleTreatmentImage;
    NFUIGradientView *_sourceBottomGradientView;
    NFUIBillboardPreviewsOverlayView *_sourceOverlayView;
    NFUIBillboardPreviewsEntity *_sourceEntity;
    NFUIBillboardPreviewsListViewModel *_sourceListModel;
    long long _sourceCurrentIndex;
    NFUITitleTreatmentView *_titleTreatmentView;
    NFUIBillboardPreviewsEntity *_sourceBillboardPreviewsEntity;
    NFUIBillboardPreviewsOverlayView *_infoOverlayView;
    NFUIBillboardPreviewsOverlayView *_sourceInfoOverlayView;
    NFUIGradientView *_bottomGradient;
    struct CGRect _sourceTitleTreatmentRect;
    struct CGRect _sourceBottomGradientRect;
    struct CGRect _sourceOverlayViewRect;
}

@property(retain, nonatomic) NFUIGradientView *bottomGradient; // @synthesize bottomGradient=_bottomGradient;
@property(nonatomic) __weak NFUIBillboardPreviewsOverlayView *sourceInfoOverlayView; // @synthesize sourceInfoOverlayView=_sourceInfoOverlayView;
@property(retain, nonatomic) NFUIBillboardPreviewsOverlayView *infoOverlayView; // @synthesize infoOverlayView=_infoOverlayView;
@property(nonatomic) __weak NFUIBillboardPreviewsEntity *sourceBillboardPreviewsEntity; // @synthesize sourceBillboardPreviewsEntity=_sourceBillboardPreviewsEntity;
@property(retain, nonatomic) NFUITitleTreatmentView *titleTreatmentView; // @synthesize titleTreatmentView=_titleTreatmentView;
@property(nonatomic) long long sourceCurrentIndex; // @synthesize sourceCurrentIndex=_sourceCurrentIndex;
@property(nonatomic) __weak NFUIBillboardPreviewsListViewModel *sourceListModel; // @synthesize sourceListModel=_sourceListModel;
@property(nonatomic) __weak NFUIBillboardPreviewsEntity *sourceEntity; // @synthesize sourceEntity=_sourceEntity;
@property(nonatomic) struct CGRect sourceOverlayViewRect; // @synthesize sourceOverlayViewRect=_sourceOverlayViewRect;
@property(nonatomic) __weak NFUIBillboardPreviewsOverlayView *sourceOverlayView; // @synthesize sourceOverlayView=_sourceOverlayView;
@property(nonatomic) struct CGRect sourceBottomGradientRect; // @synthesize sourceBottomGradientRect=_sourceBottomGradientRect;
@property(nonatomic) __weak NFUIGradientView *sourceBottomGradientView; // @synthesize sourceBottomGradientView=_sourceBottomGradientView;
@property(nonatomic) _Bool disableTitleTreatmentAnimation; // @synthesize disableTitleTreatmentAnimation=_disableTitleTreatmentAnimation;
@property(nonatomic) struct CGRect sourceTitleTreatmentRect; // @synthesize sourceTitleTreatmentRect=_sourceTitleTreatmentRect;
@property(retain, nonatomic) UIImage *sourceTitleTreatmentImage; // @synthesize sourceTitleTreatmentImage=_sourceTitleTreatmentImage;
@property(nonatomic) __weak NFUITitleTreatmentView *sourceTitleTreatmentView; // @synthesize sourceTitleTreatmentView=_sourceTitleTreatmentView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool reverse; // @synthesize reverse=_reverse;
- (void).cxx_destruct;
- (void)resetTransitionViews;
- (void)initTransitionViewsWithVC:(id)arg1 containerView:(id)arg2;
- (void)animateToFinalFrame:(struct CGRect)arg1 reverse:(_Bool)arg2;
- (void)performSlideTransitionToDismissPreview:(id)arg1;
- (void)performTransitionToDismissPreview:(id)arg1;
- (void)performTransitionToShowPreview:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

