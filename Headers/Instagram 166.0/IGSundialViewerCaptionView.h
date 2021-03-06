//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import <InstagramAppCoreFramework/IGCoreTextLinkHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGCoreTextNonLinkHandler-Protocol.h>
#import <InstagramAppCoreFramework/UIScrollViewDelegate-Protocol.h>

@class IGCoreTextView, IGStringStyle, IGStyledString, IGSundialViewerCaptionMask, NSString, UIScrollView, UIView;
@protocol IGSundialViewerCaptionViewDelegate;

@interface IGSundialViewerCaptionView : IGPassthroughView <IGCoreTextLinkHandler, IGCoreTextNonLinkHandler, UIScrollViewDelegate>
{
    IGCoreTextView *_collapsedTextView;
    IGCoreTextView *_expandedTextView;
    UIScrollView *_expandedScrollView;
    UIView *_expandedTextContainerView;
    IGSundialViewerCaptionMask *_maskView;
    IGStringStyle *_stringStyle;
    IGStyledString *_originalStyledString;
    double _expandedLabelHeight;
    unsigned long long _translationState;
    _Bool _isTranslationEnabled;
    _Bool _isRedesignEnabled;
    NSString *_text;
    id <IGSundialViewerCaptionViewDelegate> _delegate;
    double _expansionPercentage;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRedesignEnabled; // @synthesize isRedesignEnabled=_isRedesignEnabled;
@property(nonatomic) _Bool isTranslationEnabled; // @synthesize isTranslationEnabled=_isTranslationEnabled;
@property(nonatomic) double expansionPercentage; // @synthesize expansionPercentage=_expansionPercentage;
@property(nonatomic) __weak id <IGSundialViewerCaptionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)_expandedStyledStringWithContraintWidth:(double)arg1;
- (id)_collapsedStyledStringWithContraintWidth:(double)arg1;
- (id)_translationLinkStyledString;
- (id)_expandLinkStyledString;
- (id)_captionStyle;
- (void)_reconfigureMaskLayout;
- (void)scrollViewDidScroll:(id)arg1;
- (void)coreTextViewDidTapOnNonLinkedString:(id)arg1 touchEvent:(unsigned long long)arg2;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
@property(readonly, nonatomic) _Bool isExpandable;
@property(nonatomic) unsigned long long translationState;
@property(readonly, nonatomic) IGStyledString *captionWithTranslationLinkIfExisted;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

