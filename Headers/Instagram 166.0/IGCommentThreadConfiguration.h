//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IGCommentExternalComposerProvider;

@interface IGCommentThreadConfiguration : NSObject
{
    _Bool _showKeyboard;
    _Bool _permalinkEnabled;
    _Bool _useInnerReplyingToBanner;
    _Bool _loadFeedItemAsynchronously;
    _Bool _disableEmojiPicker;
    _Bool _isEmojiPickerInitiallyHidden;
    _Bool _isReadOnly;
    _Bool _isCloseButtonHiddenWhenPresentedModally;
    long long _entryPoint;
    NSString *_sourceAnalyticsModule;
    long long _captionOption;
    id <IGCommentExternalComposerProvider> _externalComposerProvider;
    long long _commentActionPresentationStyle;
    long long _fullMediaHeaderBehavior;
    long long _likeButtonPosition;
    NSString *_previewCommentID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *previewCommentID; // @synthesize previewCommentID=_previewCommentID;
@property(readonly, nonatomic) _Bool isCloseButtonHiddenWhenPresentedModally; // @synthesize isCloseButtonHiddenWhenPresentedModally=_isCloseButtonHiddenWhenPresentedModally;
@property(readonly, nonatomic) _Bool isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property(readonly, nonatomic) _Bool isEmojiPickerInitiallyHidden; // @synthesize isEmojiPickerInitiallyHidden=_isEmojiPickerInitiallyHidden;
@property(readonly, nonatomic) _Bool disableEmojiPicker; // @synthesize disableEmojiPicker=_disableEmojiPicker;
@property(readonly, nonatomic) long long likeButtonPosition; // @synthesize likeButtonPosition=_likeButtonPosition;
@property(readonly, nonatomic) _Bool loadFeedItemAsynchronously; // @synthesize loadFeedItemAsynchronously=_loadFeedItemAsynchronously;
@property(readonly, nonatomic) long long fullMediaHeaderBehavior; // @synthesize fullMediaHeaderBehavior=_fullMediaHeaderBehavior;
@property(readonly, nonatomic) long long commentActionPresentationStyle; // @synthesize commentActionPresentationStyle=_commentActionPresentationStyle;
@property(readonly, nonatomic) __weak id <IGCommentExternalComposerProvider> externalComposerProvider; // @synthesize externalComposerProvider=_externalComposerProvider;
@property(readonly, nonatomic) _Bool useInnerReplyingToBanner; // @synthesize useInnerReplyingToBanner=_useInnerReplyingToBanner;
@property(readonly, nonatomic) long long captionOption; // @synthesize captionOption=_captionOption;
@property(readonly, nonatomic) _Bool permalinkEnabled; // @synthesize permalinkEnabled=_permalinkEnabled;
@property(readonly, copy, nonatomic) NSString *sourceAnalyticsModule; // @synthesize sourceAnalyticsModule=_sourceAnalyticsModule;
@property(readonly, nonatomic) _Bool showKeyboard; // @synthesize showKeyboard=_showKeyboard;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
- (id)targetCommentID;
- (id)copyWithTargetCommentID:(id)arg1;
- (id)initAsReadOnlyWithCommentThreadEntryPoint:(long long)arg1 previewCommentID:(id)arg2 sourceAnalyticsModule:(id)arg3 captionOption:(long long)arg4 commentActionPresentationStyle:(long long)arg5 fullMediaHeaderBehavior:(long long)arg6 likeButtonPosition:(long long)arg7;
- (id)initWithCommentThreadEntryPoint:(long long)arg1 previewCommentID:(id)arg2 showKeyboard:(_Bool)arg3 sourceAnalyticsModule:(id)arg4 permalinkEnabled:(_Bool)arg5 captionOption:(long long)arg6 useInnerReplyingToBanner:(_Bool)arg7 externalComposerProvider:(id)arg8 commentActionPresentationStyle:(long long)arg9 fullMediaHeaderBehavior:(long long)arg10 loadFeedItemAsynchronously:(_Bool)arg11 likeButtonPosition:(long long)arg12 disableEmojiPicker:(_Bool)arg13 isEmojiPickerInitiallyHidden:(_Bool)arg14 isCloseButtonHiddenWhenPresentedModally:(_Bool)arg15;

@end

