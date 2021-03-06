//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectComposerAttachmentViewSpec, IGDirectComposerButtonGroupConfig, NSString, UIColor;

@interface IGDirectComposerLayoutSpec : NSObject
{
    _Bool _placeholderGradientTruncationViewVisible;
    IGDirectComposerAttachmentViewSpec *_attachmentViewSpec;
    IGDirectComposerButtonGroupConfig *_leftButtonGroup;
    IGDirectComposerButtonGroupConfig *_leftOvalInsetButtonGroup;
    IGDirectComposerButtonGroupConfig *_rightOvalInsetButtonGroup;
    IGDirectComposerButtonGroupConfig *_rightButtonGroup;
    UIColor *_activeCaretTintColor;
    NSString *_placeholderText;
    NSString *_placeholderAccessibilityText;
    long long _placeholderLineBreakMode;
    struct UIEdgeInsets _ovalInset;
    struct UIEdgeInsets _composerInsets;
}

+ (id)_threadComposerSearchLayoutSpecWithAttachmentViewSpec:(id)arg1 composerSearchMode:(long long)arg2 ovalInset:(struct UIEdgeInsets)arg3 composerInsets:(struct UIEdgeInsets)arg4;
+ (id)threadComposerOneLineSearchLayoutSpecWithAttachmentViewSpec:(id)arg1 composerSearchMode:(long long)arg2;
+ (id)threadComposerQuotedReplyLayoutWithAttachmentViewSpec:(id)arg1 gradientImageGenerator:(id)arg2 backgroundGradientHeight:(double)arg3 composerTheme:(id)arg4;
+ (id)threadComposerOneLineTextComposingLayoutSpecWithAttachmentViewSpec:(id)arg1 standardBusinessQuickRepliesEnabled:(_Bool)arg2 upgradeBusinessQuickRepliesEnabled:(_Bool)arg3 selfieStickerUpsellEnabled:(_Bool)arg4 gradientImageGenerator:(id)arg5 backgroundGradientHeight:(double)arg6 composerTheme:(id)arg7 experimentSet:(id)arg8 launcherSet:(id)arg9;
+ (id)threadComposerOneLineCollapsedLayoutSpecWithAttachmentViewSpec:(id)arg1 stickersEnabled:(_Bool)arg2 plusButtonEnabled:(_Bool)arg3 businessDirectQuickRepliesEnabled:(_Bool)arg4 gradientImageGenerator:(id)arg5 backgroundGradientHeight:(double)arg6 composerTheme:(id)arg7 experimentSet:(id)arg8 launcherSet:(id)arg9;
+ (id)threadComposerOneLineExpandedLayoutSpecWithAttachmentViewSpec:(id)arg1 stickersEnabled:(_Bool)arg2 directGifsInThreadExposeIsEnabled:(_Bool)arg3 isSmallScreenDevice:(_Bool)arg4 gradientImageGenerator:(id)arg5 backgroundGradientHeight:(double)arg6 composerTheme:(id)arg7 experimentSet:(id)arg8 launcherSet:(id)arg9;
@property(readonly, nonatomic) _Bool placeholderGradientTruncationViewVisible; // @synthesize placeholderGradientTruncationViewVisible=_placeholderGradientTruncationViewVisible;
@property(readonly, nonatomic) long long placeholderLineBreakMode; // @synthesize placeholderLineBreakMode=_placeholderLineBreakMode;
@property(readonly, nonatomic) NSString *placeholderAccessibilityText; // @synthesize placeholderAccessibilityText=_placeholderAccessibilityText;
@property(readonly, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(readonly, nonatomic) UIColor *activeCaretTintColor; // @synthesize activeCaretTintColor=_activeCaretTintColor;
@property(readonly, nonatomic) struct UIEdgeInsets composerInsets; // @synthesize composerInsets=_composerInsets;
@property(readonly, nonatomic) struct UIEdgeInsets ovalInset; // @synthesize ovalInset=_ovalInset;
@property(readonly, nonatomic) IGDirectComposerButtonGroupConfig *rightButtonGroup; // @synthesize rightButtonGroup=_rightButtonGroup;
@property(readonly, nonatomic) IGDirectComposerButtonGroupConfig *rightOvalInsetButtonGroup; // @synthesize rightOvalInsetButtonGroup=_rightOvalInsetButtonGroup;
@property(readonly, nonatomic) IGDirectComposerButtonGroupConfig *leftOvalInsetButtonGroup; // @synthesize leftOvalInsetButtonGroup=_leftOvalInsetButtonGroup;
@property(readonly, nonatomic) IGDirectComposerButtonGroupConfig *leftButtonGroup; // @synthesize leftButtonGroup=_leftButtonGroup;
@property(readonly, nonatomic) IGDirectComposerAttachmentViewSpec *attachmentViewSpec; // @synthesize attachmentViewSpec=_attachmentViewSpec;
- (void).cxx_destruct;
- (id)initWithAttachmentViewSpec:(id)arg1 leftButtonGroup:(id)arg2 leftOvalInsetButtonGroup:(id)arg3 rightOvalInsetButtonGroup:(id)arg4 rightButtonGroup:(id)arg5 ovalInset:(struct UIEdgeInsets)arg6 composerInsets:(struct UIEdgeInsets)arg7 activeCaretTintColor:(id)arg8 placeholderText:(id)arg9 placeholderAccessibilityText:(id)arg10 placeholderLineBreakMode:(long long)arg11 placeholderGradientTruncationViewVisible:(_Bool)arg12;

@end

