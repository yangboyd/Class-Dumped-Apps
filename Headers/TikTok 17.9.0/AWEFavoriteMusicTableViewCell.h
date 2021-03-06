//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEUIFavoriteTableViewCell.h"

#import "AWEAVPlayerWrapperDelegate-Protocol.h"

@class AWEMusicModel, NSString, UIImageView;
@protocol AWEFavoriteMusicTableViewCellDelegate;

@interface AWEFavoriteMusicTableViewCell : AWEUIFavoriteTableViewCell <AWEAVPlayerWrapperDelegate>
{
    id <AWEFavoriteMusicTableViewCellDelegate> _delegate;
    UIImageView *_musicPlayIconImageView;
    AWEMusicModel *_model;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) AWEMusicModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *musicPlayIconImageView; // @synthesize musicPlayIconImageView=_musicPlayIconImageView;
@property(nonatomic) __weak id <AWEFavoriteMusicTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)audioPlayer;
- (void)resetPlayer;
- (void)playerWrapper:(id)arg1 didChangePlayStatus:(unsigned long long)arg2;
- (void)_stopAnimation;
- (void)_startAnimation;
- (void)_refreshAudioStatus:(unsigned long long)arg1;
- (void)resumeAnimationWithLayer:(id)arg1;
- (void)pauseAnimationWithLayer:(id)arg1;
- (void)switchPlayStatus;
- (void)albumPlayClick:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (id)initWithCellType:(long long)arg1 cellStyle:(long long)arg2 reuseIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

