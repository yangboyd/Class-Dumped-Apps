//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGProfilePictureImageView, IGTVBrowseNavigationActionsConfig, UIButton;
@protocol IGTVBrowseNavigationBarDelegate;

@interface IGTVBrowseNavigationBar : UIView
{
    UIButton *_titleButton;
    UIButton *_backButton;
    UIButton *_searchButton;
    UIButton *_uploadButton;
    UIButton *_settingsButton;
    UIButton *_overflowButton;
    IGTVBrowseNavigationActionsConfig *_actionsConfig;
    IGProfilePictureImageView *_profilePictureImageView;
    id <IGTVBrowseNavigationBarDelegate> _delegate;
}

+ (double)preferredHeight;
@property(nonatomic) __weak id <IGTVBrowseNavigationBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGProfilePictureImageView *profilePictureImageView; // @synthesize profilePictureImageView=_profilePictureImageView;
- (void).cxx_destruct;
- (void)_setupButtonActions;
- (void)updateWithVideoCount:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithActionsConfig:(id)arg1 uploadIcon:(id)arg2 delegate:(id)arg3;

@end

