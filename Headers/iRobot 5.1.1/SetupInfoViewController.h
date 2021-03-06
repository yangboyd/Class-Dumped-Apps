//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

@class UIImageView, UILabel, UIView, VideoPlayerView;

@interface SetupInfoViewController : BaseViewController
{
    UIImageView *_imageView;
    VideoPlayerView *_videoPlayerView;
    UILabel *_infoTextLabel;
    CDUnknownBlockType _viewAppearedFirstTimeBlock;
    UIView *_mediaContainerView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *mediaContainerView; // @synthesize mediaContainerView=_mediaContainerView;
@property(copy, nonatomic) CDUnknownBlockType viewAppearedFirstTimeBlock; // @synthesize viewAppearedFirstTimeBlock=_viewAppearedFirstTimeBlock;
@property(nonatomic) __weak UILabel *infoTextLabel; // @synthesize infoTextLabel=_infoTextLabel;
@property(nonatomic) __weak VideoPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)configureAccessibility;
- (void)populateWithTitleText:(id)arg1 descriptionText:(id)arg2;
- (void)populateWithVideoName:(id)arg1 videoType:(id)arg2 titleText:(id)arg3 descriptionText:(id)arg4 layoutWithVideoAspectRatio:(_Bool)arg5;
- (void)populateWithImageName:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3;
- (void)viewDidAppearTheFirstTimeOnly;
- (void)viewDidLoad;

@end

