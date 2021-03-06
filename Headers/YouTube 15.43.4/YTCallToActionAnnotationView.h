//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTAnnotationsViewProtocol-Protocol.h>

@class NSString, UIButton, UIImageView, UITapGestureRecognizer, YTImageView, YTLabel;
@protocol YTCallToActionAnnotationViewDelegate;

@interface YTCallToActionAnnotationView : UIView <YTAnnotationsViewProtocol>
{
    UIView *_container;
    UIView *_backgroundView;
    YTImageView *_thumbnailImageView;
    UIView *_labelContainer;
    YTLabel *_headingLabel;
    YTLabel *_urlLabel;
    UIImageView *_goExternalImageView;
    UIView *_verticalSeparatorView;
    UIButton *_closeButton;
    UIButton *_expandButton;
    UITapGestureRecognizer *_backgroundRecognizer;
    UITapGestureRecognizer *_thumbnailRecognizer;
    _Bool _visible;
    _Bool _collapsed;
    id <YTCallToActionAnnotationViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTCallToActionAnnotationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fadeBackgroundComponents:(_Bool)arg1;
- (double)contentSectionWidth;
- (void)didTapExpandButton;
- (void)didTapThumbnail;
- (void)didTapBackground;
- (void)userDidInitiateClose;
- (void)fadeInAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fadeOutAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)expandAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)collapseAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)hideAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)showAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (struct CGSize)preferredThumbnailSize;
- (void)setHasCloseButton:(_Bool)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setHasThumbnail:(_Bool)arg1;
- (void)setDisplayURL:(id)arg1;
- (void)setHeadline:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

