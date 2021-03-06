//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAPageableItemView.h>

#import <Core/WAEditableImageEditingViewDelegate-Protocol.h>
#import <Core/WAEditableImageScrollViewEditingDelegate-Protocol.h>

@class NSString, UIView, WAEditableImageEditingView, WAEditableImageScrollView, WAMultiSendMediaItem;

@interface WAEditableItemView : WAPageableItemView <WAEditableImageEditingViewDelegate, WAEditableImageScrollViewEditingDelegate>
{
    _Bool _suppressEditingViewItemChanges;
    WAMultiSendMediaItem *_mediaItem;
    _Bool _allowsRotationOperation;
    WAEditableImageScrollView *_previewScrollView;
    WAEditableImageEditingView *_editingView;
    UIView *_previewInterfaceView;
}

@property(readonly, nonatomic) UIView *previewInterfaceView; // @synthesize previewInterfaceView=_previewInterfaceView;
@property(readonly, nonatomic) WAEditableImageEditingView *editingView; // @synthesize editingView=_editingView;
@property(readonly, nonatomic) WAEditableImageScrollView *previewScrollView; // @synthesize previewScrollView=_previewScrollView;
@property(nonatomic) _Bool allowsRotationOperation; // @synthesize allowsRotationOperation=_allowsRotationOperation;
- (void).cxx_destruct;
- (id)editableImageEditingViewContainingViewController:(id)arg1;
- (void)editableImageEditingViewDidRequestSend:(id)arg1;
- (void)editableImageEditingViewDidRequestEndCropping:(id)arg1;
- (void)editableImageEditingViewDidEndDeferringRendering:(id)arg1;
- (void)editableImageEditingViewDidBeginDeferringRendering:(id)arg1;
- (void)editableImageScrollViewDidReceiveSingleTap:(id)arg1;
- (void)editableImageScrollViewDidEndUserScrolling:(id)arg1;
- (void)editableImageScrollViewDidScroll:(id)arg1;
- (void)editableImageScrollViewDidBeginUserScrolling:(id)arg1;
- (void)editableImageScrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)editableImageScrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)paintCanvasView;
- (void)resetViewState;
- (void)setViewState:(id)arg1;
- (id)viewState;
- (_Bool)isFullyZoomedOut;
- (void)cropToVisibleRegion;
- (_Bool)canCropToVisibleRegion;
- (void)didChangeMediaItemCrop;
- (void)setCropping:(_Bool)arg1;
- (void)prepareToCancelCropping;
- (_Bool)itemViewAllowsPanGestureAtPoint:(struct CGPoint)arg1;
- (void)configureWithItem:(id)arg1;
- (void)generateEditingViewIfNeeded;
- (id)containerView;
- (id)contentView;
- (void)prepareForReuse;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (struct CGRect)accessibilityFrame;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

