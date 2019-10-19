//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCaption-Protocol.h"
#import "SCPreviewAlignableView-Protocol.h"

@class NSAttributedString, NSMutableDictionary, NSString, SCCaptionControlledView, SCDynamicCaptionStyle, SCPreviewCaptionTextView, UIColor, UIView;
@protocol SCCaptionDelegate;

@interface SCCaptionDefaultTextView : NSObject <SCCaption, SCPreviewAlignableView>
{
    NSAttributedString *_attributedTextInBigText;
    _Bool _isLagunaMedia;
    _Bool _shouldEnableUserTagging;
    double _captionFontSize;
    double _circleRadius;
    _Bool _isAnimating;
    SCDynamicCaptionStyle *_captionStyle;
    UIColor *_pickedColor;
    _Bool _colorChanged;
    long long _userTaggingStartIndex;
    long long _source;
    long long _alignment;
    long long _captionExitSource;
    NSMutableDictionary *_taggedUsers;
    UIView *_captionCarouselContainerView;
    _Bool _editing;
    long long uniqueId;
    id <SCCaptionDelegate> _delegate;
    SCCaptionControlledView *_containerView;
    double _lastVertical;
    SCPreviewCaptionTextView *_textView;
    double _keyboardHeight;
    struct UIEdgeInsets _edgeMargins;
    struct CGRect _superviewBounds;
    struct CGRect _superviewContentBounds;
}

@property(nonatomic) struct CGRect superviewContentBounds; // @synthesize superviewContentBounds=_superviewContentBounds;
@property(nonatomic) struct CGRect superviewBounds; // @synthesize superviewBounds=_superviewBounds;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) SCPreviewCaptionTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) double lastVertical; // @synthesize lastVertical=_lastVertical;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) SCCaptionControlledView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) struct UIEdgeInsets edgeMargins; // @synthesize edgeMargins=_edgeMargins;
@property(nonatomic) __weak id <SCCaptionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long uniqueId; // @synthesize uniqueId;
- (void).cxx_destruct;
- (id)deletableView;
- (void)updateAnchorState:(id)arg1;
- (_Bool)shouldProcessGesture:(id)arg1;
- (struct CGRect)alignableContentRect;
- (id)alignableTouchControlView;
- (id)state;
- (id)shareLoggingParameters;
- (void)_adjustKeyboardAnimationSpeed:(CDUnknownBlockType)arg1;
- (void)_adjustAnimationsSpeedForView:(id)arg1 withSpeed:(double)arg2;
- (struct CGRect)screenshotFrame;
- (id)screenshotImageView;
- (void)viewDidLayoutSubviewsWithSuperviewBounds:(struct CGRect)arg1 superviewContentBounds:(struct CGRect)arg2;
- (void)resizeForViewing;
- (void)resizeForEditing;
- (void)_resetLayout;
- (struct CGRect)textViewFrame;
- (struct CGRect)containerViewFrame;
- (struct CGRect)_captionCarouselContainerViewFrame;
- (struct CGRect)_textViewFrameForAnimation;
- (struct CGRect)_containerViewFrameForAnimation;
- (double)adjustedYOffsetForContentBounds:(double)arg1 textViewHeight:(double)arg2;
- (id)attributedText;
- (long long)captionExitSource;
- (void)setCaptionExitSource:(long long)arg1;
- (id)pickedColor;
- (void)colorChanged:(id)arg1;
- (_Bool)textFrameContainsGesture:(id)arg1;
- (void)rotation:(id)arg1;
- (void)pinch:(id)arg1;
- (void)pan:(id)arg1;
- (void)tap:(id)arg1;
- (void)didStopEditingAnimated:(_Bool)arg1;
- (void)prepareToStopEditing;
- (void)didStartEditingAnimated:(_Bool)arg1;
- (void)prepareToStartEditing;
- (void)stopEditingAnimated:(_Bool)arg1;
- (void)startEditingAnimated:(_Bool)arg1;
- (void)deleteEditingTaggingUser;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (long long)contentMargin;
- (long long)contentWidth;
- (long long)maxTextWidth;
- (void)setCaptionStyle:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextFromTagging:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (_Bool)captionPresent;
- (_Bool)isFullscreen;
- (void)addTaggedUsers:(id)arg1;
- (void)addTaggedUser:(id)arg1;
- (id)usernamesForTagging;
- (id)searchableNameForFriendFiltering;
- (id)captionStyle;
- (id)text;
- (_Bool)isHidden;
- (id)editingTextView;
- (void)inputKeyboardWillChangeFrame:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)configureTextViewBasedOnEditMode;
- (id)view;
- (void)tearDownAndRemoveFromSuperview;
- (void)_setTextTransformWithLastTransform:(long long)arg1;
- (void)dealloc;
- (void)initializeViewsWithState:(id)arg1;
- (void)setAlignment;
- (void)setAlignment:(long long)arg1;
- (long long)alignment;
- (id)initWithState:(id)arg1 delegate:(id)arg2 isLagunaMedia:(_Bool)arg3 shouldEnableUserTagging:(_Bool)arg4 shouldEnableDynamicCaption:(_Bool)arg5 initialTransform:(struct CGAffineTransform)arg6 originalContentBounds:(struct CGRect)arg7 captionCarouselContainerView:(id)arg8 superviewBounds:(struct CGRect)arg9 superviewContentBounds:(struct CGRect)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

