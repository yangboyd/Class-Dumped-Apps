//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

#import <Module_Framework/NSLayoutManagerDelegate-Protocol.h>
#import <Module_Framework/YTPageStyling-Protocol.h>

@class NSDictionary, NSNumber, NSString;
@protocol YTEmojiTextViewDelegate;

@interface YTEmojiTextView : UITextView <NSLayoutManagerDelegate, YTPageStyling>
{
    _Bool _adjustLineFragmentRectForCustomEmoji;
    _Bool _inlineEmojiReplacement;
    _Bool _shouldExpand;
    _Bool _skipEmojiReplacement;
    id <YTEmojiTextViewDelegate> _liveChatTextViewDelegate;
    NSDictionary *_placeholderAttributes;
    NSString *_placeholder;
    NSString *_accessibilitySubLabel;
    unsigned long long _emojiCharacterCount;
    NSNumber *_cachedCharacterCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool skipEmojiReplacement; // @synthesize skipEmojiReplacement=_skipEmojiReplacement;
@property(readonly, nonatomic) NSNumber *cachedCharacterCount; // @synthesize cachedCharacterCount=_cachedCharacterCount;
@property(nonatomic) _Bool shouldExpand; // @synthesize shouldExpand=_shouldExpand;
@property(nonatomic) _Bool inlineEmojiReplacement; // @synthesize inlineEmojiReplacement=_inlineEmojiReplacement;
@property(nonatomic) _Bool adjustLineFragmentRectForCustomEmoji; // @synthesize adjustLineFragmentRectForCustomEmoji=_adjustLineFragmentRectForCustomEmoji;
@property(nonatomic) unsigned long long emojiCharacterCount; // @synthesize emojiCharacterCount=_emojiCharacterCount;
@property(copy, nonatomic) NSString *accessibilitySubLabel; // @synthesize accessibilitySubLabel=_accessibilitySubLabel;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSDictionary *placeholderAttributes; // @synthesize placeholderAttributes=_placeholderAttributes;
@property(nonatomic) __weak id <YTEmojiTextViewDelegate> liveChatTextViewDelegate; // @synthesize liveChatTextViewDelegate=_liveChatTextViewDelegate;
- (void)onTextStorageWillProcessEditing:(id)arg1;
- (void)onTextDidChange:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)layoutManager:(id)arg1 shouldSetLineFragmentRect:(inout struct CGRect *)arg2 lineFragmentUsedRect:(inout struct CGRect *)arg3 baselineOffset:(inout double *)arg4 inTextContainer:(id)arg5 forGlyphRange:(struct _NSRange)arg6;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (void)deleteWordsBackwards;
@property(readonly, nonatomic) unsigned long long characterCount;
- (void)insertEmojiShortcut:(id)arg1;
- (void)addEmojiTextAttachment:(id)arg1 forEmoji:(id)arg2;
- (id)accessibilityLabel;
- (void)setTextContainerInset:(struct UIEdgeInsets)arg1;
- (void)setAttributedText:(id)arg1 restoreTextProperties:(_Bool)arg2;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

