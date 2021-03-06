//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGGestureHandler-Protocol.h>

@class IGImageView, IGLabel, IGTextButton, NSString;

@interface IGPinnedCommentsConfirmationViewController : IGViewController <IGGestureHandler>
{
    CDUnknownBlockType _confirmPinBlock;
    IGImageView *_thumbnailImageView;
    IGLabel *_titleLabel;
    IGLabel *_descriptionLabel;
    IGTextButton *_pinCommentButton;
}

- (void).cxx_destruct;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)_didTapPinCommentButton;
- (void)_setUpDescriptionLabel;
- (void)_setUpTitleLabel;
- (void)_setUpThumbnailImageView;
- (void)_setUpPinCommentButton;
- (double)getEstimatedContentHeight;
- (id)initWithUserSession:(id)arg1 confirmPinBlock:(CDUnknownBlockType)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

