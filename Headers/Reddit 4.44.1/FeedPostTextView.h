//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

#import "ContentImageViewDelegate-Protocol.h"
#import "ObjectObserverProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class BaseTextView, FeedPostOptions, FeedPostThumbnailView, NSString, Post, UIGestureRecognizer;
@protocol FeedPostTextViewDelegate;

@interface FeedPostTextView : BaseView <UIGestureRecognizerDelegate, ObjectObserverProtocol, ContentImageViewDelegate, UITextViewDelegate>
{
    _Bool _shouldApplyStyling;
    id <FeedPostTextViewDelegate> _delegate;
    UIGestureRecognizer *_recognizer;
    Post *_post;
    BaseTextView *_textView;
    FeedPostThumbnailView *_thumbnailImageView;
    FeedPostOptions *_options;
}

+ (struct CGSize)thumbnailSize;
+ (struct UIEdgeInsets)thumbnailPadding;
+ (struct CGSize)thumbnailSizeWithPadding;
+ (_Bool)shouldShowThumbnailForPost:(id)arg1 withOptions:(id)arg2;
+ (_Bool)postHasLargeAssetsToDisplay:(id)arg1;
+ (id)textContainerForSizeCalculationsForPost:(id)arg1 withOptions:(id)arg2 delegate:(id)arg3;
+ (struct UIEdgeInsets)textViewContainerInset;
+ (double)bottomTextPadding;
+ (double)topTextPaddingWithDelegate:(id)arg1;
+ (double)leftOrRightTextPadding;
+ (id)preferredFontOfAttributedString:(id)arg1;
+ (double)preferredTextWidth;
+ (struct CGSize)calculatedSizeWithData:(id)arg1 withOptions:(id)arg2 delegate:(id)arg3;
+ (_Bool)shouldAddBottomTextPaddingForPost:(id)arg1 withOptions:(id)arg2 delegate:(id)arg3;
+ (struct CGSize)textViewSizeWithData:(id)arg1 withOptions:(id)arg2 delegate:(id)arg3;
+ (id)textOfDisplayedContentForPost:(id)arg1 delegate:(id)arg2;
+ (long long)feedPostTypeForDelegate:(id)arg1;
@property(nonatomic) _Bool shouldApplyStyling; // @synthesize shouldApplyStyling=_shouldApplyStyling;
@property(retain, nonatomic) FeedPostOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) FeedPostThumbnailView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) BaseTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(retain, nonatomic) UIGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(nonatomic) __weak id <FeedPostTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)contentImageViewDidTapImage:(id)arg1;
- (void)postAttributedStringChanged:(id)arg1;
- (void)updateContentViewsForData:(id)arg1 changeKeyPath:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (void)updateTextAlphaBasedOnReadStatus;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didTapText;
- (void)layoutSubviews;
- (void)configureWithData:(id)arg1 withOptions:(id)arg2 andDelegate:(id)arg3 shouldApplyStyling:(_Bool)arg4;
- (void)updateTextViewLabelLinkAttributes;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

