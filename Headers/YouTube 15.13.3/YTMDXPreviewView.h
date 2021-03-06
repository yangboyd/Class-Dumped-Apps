//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, YTLabel;
@protocol YTMDXPreviewViewDelegate;

@interface YTMDXPreviewView : UIView
{
    UIImageView *_thumbnailView;
    UIView *_thumbnailOverlayView;
    UIButton *_playButton;
    UIButton *_TVQueueButton;
    YTLabel *_errorLabel;
    id <YTMDXPreviewViewDelegate> _delegate;
}

@property(nonatomic) __weak id <YTMDXPreviewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)actionButtonWithTitle:(id)arg1 image:(id)arg2;
- (void)didTapTVQueueButton:(id)arg1;
- (void)didTapPlayButton:(id)arg1;
- (void)setVideoThumbnail:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithPlaylistContext:(_Bool)arg1 errorMessage:(id)arg2;

@end

