//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGProfilePictureImageView, IGProgressSegmentView, IGTapButton, UILabel;

@interface IGStoryViewerHeaderPreviewView : UIView
{
    IGProgressSegmentView *_progressView;
    IGProfilePictureImageView *_profilePictureImageView;
    UILabel *_usernameLabel;
    IGTapButton *_dismissButton;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithUser:(id)arg1;

@end

