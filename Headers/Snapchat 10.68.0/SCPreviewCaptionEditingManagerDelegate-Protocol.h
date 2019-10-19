//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCCaptionState, SCDynamicCaptionStyle, SCPreviewCaptionEditingManager, UIColor, UIGestureRecognizer;
@protocol SCCaption;

@protocol SCPreviewCaptionEditingManagerDelegate <NSObject>
- (void)previewCaptionEditingManagerCarouselAlignmentToggled:(SCPreviewCaptionEditingManager *)arg1;
- (void)previewCaptionEditingManagerResetEditingCaption:(SCPreviewCaptionEditingManager *)arg1;
- (void)previewCaptionEditingManagerDidSwipeOnCaption:(SCPreviewCaptionEditingManager *)arg1;
- (void)previewCaptionEditingManager:(SCPreviewCaptionEditingManager *)arg1 didUpdateColor:(UIColor *)arg2 isHidden:(_Bool)arg3;
- (void)previewCaptionEditingManagerStartedEditingCaption:(SCPreviewCaptionEditingManager *)arg1 captionStyle:(SCDynamicCaptionStyle *)arg2;
- (void)previewCaptionEditingManager:(SCPreviewCaptionEditingManager *)arg1 stoppedEditingCaption:(id <SCCaption>)arg2 withState:(SCCaptionState *)arg3 withNewCaptionAdded:(_Bool)arg4 withCaptionDeleted:(_Bool)arg5;
- (void)previewCaptionEditingManager:(SCPreviewCaptionEditingManager *)arg1 didChangeStaticCaption:(id <SCCaption>)arg2;
- (id <SCCaption>)previewCaptionEditingManager:(SCPreviewCaptionEditingManager *)arg1 getCaptionWithGesture:(UIGestureRecognizer *)arg2;
- (void)previewCaptionEditingManager:(SCPreviewCaptionEditingManager *)arg1 didDeleteCaption:(id <SCCaption>)arg2;
- (void)previewCaptionEditingManager:(SCPreviewCaptionEditingManager *)arg1 didAddNewCaption:(id <SCCaption>)arg2;
- (void)previewCaptionEditingManagerDidPrepareCaptionEditing:(SCPreviewCaptionEditingManager *)arg1;
- (void)previewCaptionEditingManagerWillStartEditingCaption:(SCPreviewCaptionEditingManager *)arg1 fromOpenAction:(NSString *)arg2;
- (void)previewCaptionEditingManagerWillConstructCaptionCarousel:(SCPreviewCaptionEditingManager *)arg1;
- (_Bool)previewCaptionEditingManagerCanStartEditingCaption:(SCPreviewCaptionEditingManager *)arg1;
@end

