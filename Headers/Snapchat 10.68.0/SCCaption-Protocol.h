//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTouchControllable-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class Friend, NSArray, NSAttributedString, NSDictionary, NSString, SCCaptionControlledView, SCCaptionState, SCDynamicCaptionStyle, UIColor, UIGestureRecognizer, UIImage, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITextView, UIView;
@protocol SCCaptionDelegate;

@protocol SCCaption <SCTouchControllable, UITextViewDelegate>
@property(nonatomic) long long uniqueId;
- (NSDictionary *)shareLoggingParameters;
- (void)deleteEditingTaggingUser;
- (long long)captionExitSource;
- (void)setCaptionExitSource:(long long)arg1;
- (void)addTaggedUsers:(NSArray *)arg1;
- (void)addTaggedUser:(Friend *)arg1;
- (struct CGRect)screenshotFrame;
- (UIImage *)screenshotImageView;
- (void)viewDidLayoutSubviewsWithSuperviewBounds:(struct CGRect)arg1 superviewContentBounds:(struct CGRect)arg2;
- (_Bool)textFrameContainsGesture:(UIGestureRecognizer *)arg1;
- (void)tap:(UIGestureRecognizer *)arg1;
- (UITextView *)editingTextView;
- (void)setHidden:(_Bool)arg1;
- (void)setCaptionStyle:(SCDynamicCaptionStyle *)arg1;
- (void)setText:(NSString *)arg1;
- (void)setTextFromTagging:(NSString *)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)stopEditingAnimated:(_Bool)arg1;
- (void)startEditingAnimated:(_Bool)arg1;
- (_Bool)isFullscreen;
- (_Bool)isHidden;
- (double)keyboardHeight;
- (NSArray *)usernamesForTagging;
- (NSString *)searchableNameForFriendFiltering;
- (UIColor *)pickedColor;
- (SCDynamicCaptionStyle *)captionStyle;
- (NSString *)text;
- (_Bool)isEditing;
- (void)tearDownAndRemoveFromSuperview;
- (SCCaptionControlledView *)view;
- (long long)alignment;
- (SCCaptionState *)state;
- (id)initWithState:(SCCaptionState *)arg1 delegate:(id <SCCaptionDelegate>)arg2 isLagunaMedia:(_Bool)arg3 shouldEnableUserTagging:(_Bool)arg4 shouldEnableDynamicCaption:(_Bool)arg5 initialTransform:(struct CGAffineTransform)arg6 originalContentBounds:(struct CGRect)arg7 captionCarouselContainerView:(UIView *)arg8 superviewBounds:(struct CGRect)arg9 superviewContentBounds:(struct CGRect)arg10;

@optional
- (void)setContainerViewTransform:(struct CGAffineTransform)arg1 pauseTransform:(_Bool)arg2;
- (NSAttributedString *)attributedText;
- (void)colorChanged:(UIColor *)arg1;
- (void)rotation:(UIRotationGestureRecognizer *)arg1;
- (void)pinch:(UIPinchGestureRecognizer *)arg1;
@end

