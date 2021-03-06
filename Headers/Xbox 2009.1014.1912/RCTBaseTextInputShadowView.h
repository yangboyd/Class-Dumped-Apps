//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTBaseTextShadowView.h"

@class NSAttributedString, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, RCTBridge;

@interface RCTBaseTextInputShadowView : RCTBaseTextShadowView
{
    RCTBridge *_bridge;
    NSAttributedString *_previousAttributedText;
    _Bool _needsUpdateView;
    NSAttributedString *_localAttributedText;
    struct CGSize _previousContentSize;
    NSString *_text;
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    NSString *_placeholder;
    long long _maximumNumberOfLines;
    CDUnknownBlockType _onContentSizeChange;
}

@property(copy, nonatomic) CDUnknownBlockType onContentSizeChange; // @synthesize onContentSizeChange=_onContentSizeChange;
@property(nonatomic) long long maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (double)lastBaselineForSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFitsMinimumSize:(struct CGSize)arg1 maximumSize:(struct CGSize)arg2;
- (id)measurableAttributedText;
- (void)uiManagerWillPerformMounting;
@property(copy, nonatomic) NSString *text;
- (void)invalidateContentSize;
- (void)dirtyLayout;
- (void)setLocalData:(id)arg1;
- (void)layoutSubviewsWithContext:(struct RCTLayoutContext)arg1;
- (void)didSetProps:(id)arg1;
- (_Bool)isYogaLeafNode;
- (id)initWithBridge:(id)arg1;

@end

