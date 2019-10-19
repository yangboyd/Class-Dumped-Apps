//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString, SCCaptionBigTextPlusView, SCPreviewCaptionContainerView, SCPreviewCaptionToolBarButtonItem, SCPreviewTooltipBalloon, UIGestureRecognizer, UIImage, UIView;
@protocol SCCaption, SCCaptionMultiSnapDelegate, SCPreviewCaptionFeatureDelegate;

@protocol SCPreviewFeatureCaption
@property(retain, nonatomic) SCPreviewTooltipBalloon *trackingCaptionTooltipBalloon;
@property(readonly, nonatomic) SCPreviewCaptionContainerView *trackingCaptionsContainerView;
@property(readonly, nonatomic) SCPreviewCaptionContainerView *staticCaptionsContainerView;
@property(nonatomic) __weak id <SCCaptionMultiSnapDelegate> multiSnapDelegate;
@property(nonatomic) __weak id <SCPreviewCaptionFeatureDelegate> delegate;
- (NSString *)captionScales;
- (NSString *)staticCaptionPositions;
- (long long)captionStyleLoadingTime;
- (_Bool)captionToolIsOpened;
- (NSString *)logCaptionStyleList;
- (void)removeTrackingCaptionTooltip;
- (UIImage *)staticScreenshot;
- (long long)trackingCaptionCount;
- (long long)staticCaptionCount;
- (long long)captionCount;
- (NSArray *)captionsState;
- (NSArray *)videoTrackedImagesWithCroppingAspectRatio:(double)arg1;
- (NSString *)allCaptionTexts;
- (void)captionButtonPressed;
- (void)deleteCaption:(id <SCCaption>)arg1;
- (SCCaptionBigTextPlusView *)captionOfTrackableView:(UIView *)arg1;
- (id <SCCaption>)captionWithGesture:(UIGestureRecognizer *)arg1;
- (NSArray *)allStaticCaptions;
- (NSArray *)allCaptions;
- (id <SCCaption>)currentEditingCaption;
- (void)viewDidLayoutSubviewsWithSuperviewBounds:(struct CGRect)arg1 superviewContentBounds:(struct CGRect)arg2;
- (void)setCaptionsWithState:(NSArray *)arg1 shouldLoadStyles:(_Bool)arg2;
- (void)updateForCaptionItem:(_Bool)arg1;
- (SCPreviewCaptionToolBarButtonItem *)createCaptionToolBarButtonItemWithTarget:(id)arg1 selector:(SEL)arg2;
@end

