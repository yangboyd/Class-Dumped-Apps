//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HMECameraClipPlayerView, HMEFaceImageView, UIImageView, UILabel;

@interface HMEFamiliarFacesTrackView : UIView
{
    HMECameraClipPlayerView *_clipPlayerView;
    HMEFaceImageView *_heroThumbnailImageView;
    UILabel *_metadataLabel;
    UIImageView *_playerErrorImageView;
}

+ (id)metadataDescriptionForTrack:(id)arg1;
@property(readonly, nonatomic) UIImageView *playerErrorImageView; // @synthesize playerErrorImageView=_playerErrorImageView;
@property(readonly, nonatomic) UILabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(readonly, nonatomic) HMEFaceImageView *heroThumbnailImageView; // @synthesize heroThumbnailImageView=_heroThumbnailImageView;
@property(readonly, nonatomic) HMECameraClipPlayerView *clipPlayerView; // @synthesize clipPlayerView=_clipPlayerView;
- (void).cxx_destruct;
- (void)userDidTapViewClipButton:(id)arg1;
- (void)showTrack:(id)arg1 forFace:(id)arg2 clipLoader:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

