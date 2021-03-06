//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "WAWebURLPreviewViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, WAStatusLinkPreviewContent, WAStatusLinkPreviewDisplayView, WAStatusLinkPreviewTextView, WAWebPageMetadata, WAWebURLPreviewView;
@protocol WAStatusLinkPreviewViewDelegate;

@interface WAStatusLinkPreviewView : UIView <UITextViewDelegate, WAWebURLPreviewViewDelegate, UIGestureRecognizerDelegate>
{
    UIView *_containerView;
    UIView *_separator;
    UIButton *_bottomButton;
    UIView *_suspiciousLinkContainerView;
    UILabel *_suspiciousLinkWarningLabel;
    WAStatusLinkPreviewTextView *_linkTextView;
    WAWebURLPreviewView *_webURLEditPreview;
    WAStatusLinkPreviewDisplayView *_webURLDisplayPreview;
    _Bool _suspiciousLink;
    id <WAStatusLinkPreviewViewDelegate> _delegate;
    unsigned long long _mode;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool suspiciousLink; // @synthesize suspiciousLink=_suspiciousLink;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <WAStatusLinkPreviewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)webURLPreviewViewDidCancelMediaDownload:(id)arg1;
- (void)webURLPreviewViewDidEditMedia:(id)arg1;
- (void)webURLPreviewViewDidRequestMediaDownload:(id)arg1;
- (void)webURLPreviewViewDidDismiss:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)linkTextViewAction:(id)arg1;
- (void)bottomButtonAction:(id)arg1;
- (void)prepareToHide;
- (void)updateMediaDownloadWithProgress:(float)arg1;
- (void)hideDownloadMediaOption;
- (void)setDownloading:(_Bool)arg1;
- (void)showDownloadMediaOptionAfterLoadingWithMediaSize:(unsigned long long)arg1;
@property(retain, nonatomic) WAWebPageMetadata *metadata;
- (void)setButtonText:(id)arg1;
@property(copy, nonatomic) NSString *webURL;
@property(retain, nonatomic) WAStatusLinkPreviewContent *content;
- (double)webURLPreviewPreferredHeightForWidth:(double)arg1;
- (void)updateSizeIfNecessary;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)becomeFirstResponder;
- (void)layoutSubviews;
- (_Bool)hasLinkText;
- (id)initWithMode:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

