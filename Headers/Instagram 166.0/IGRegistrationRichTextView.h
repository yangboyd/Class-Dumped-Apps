//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGCoreTextLinkHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGRegistrationBulletedViewDelegate-Protocol.h>

@class IGRegistrationRichTextViewModel, NSMutableArray, NSMutableDictionary, NSString, UIScrollView;
@protocol IGRegistrationRichTextViewDelegate;

@interface IGRegistrationRichTextView : UIView <IGCoreTextLinkHandler, IGRegistrationBulletedViewDelegate>
{
    UIScrollView *_scrollView;
    NSMutableArray *_textViews;
    NSMutableDictionary *_bulletedPointTextViewsDictionary;
    IGRegistrationRichTextViewModel *_viewModel;
    id <IGRegistrationRichTextViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGRegistrationRichTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)bulletedView:(id)arg1 didTapURL:(id)arg2;
- (void)layoutSubviews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

