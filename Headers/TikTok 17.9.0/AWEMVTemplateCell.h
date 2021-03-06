//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "TTVideoEngineDelegate-Protocol.h"
#import "TTVideoEngineInternalDelegate-Protocol.h"

@class ACCMBCircularProgressBarView, IESEffectModel, NSString, TTVideoEngine, UIImageView, UILabel, UIView;
@protocol ACCLoadingViewProtocol;

@interface AWEMVTemplateCell : UICollectionViewCell <TTVideoEngineDelegate, TTVideoEngineInternalDelegate>
{
    _Bool _isInActivity;
    UIView *_containerView;
    UIImageView *_shadowView;
    UIImageView *_templateImageView;
    TTVideoEngine *_playerController;
    UIView<ACCLoadingViewProtocol> *_loadingView;
    UIView *_progressBarBackgroundView;
    ACCMBCircularProgressBarView *_progressBarView;
    IESEffectModel *_mvModel;
    UIImageView *_activityImageView;
    UILabel *_activityLabel;
    NSString *_activityMVText;
}

+ (id)createVideoEngine;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *activityMVText; // @synthesize activityMVText=_activityMVText;
@property(nonatomic) _Bool isInActivity; // @synthesize isInActivity=_isInActivity;
@property(retain, nonatomic) UILabel *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(retain, nonatomic) UIImageView *activityImageView; // @synthesize activityImageView=_activityImageView;
@property(retain, nonatomic) IESEffectModel *mvModel; // @synthesize mvModel=_mvModel;
@property(retain, nonatomic) ACCMBCircularProgressBarView *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(retain, nonatomic) UIView *progressBarBackgroundView; // @synthesize progressBarBackgroundView=_progressBarBackgroundView;
@property(retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TTVideoEngine *playerController; // @synthesize playerController=_playerController;
@property(retain, nonatomic) UIImageView *templateImageView; // @synthesize templateImageView=_templateImageView;
@property(retain, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)noVideoDataToDownloadForKey:(id)arg1;
- (void)didFinishVideoDataDownloadForKey:(id)arg1;
- (void)videoEngineCloseAysncFinish:(id)arg1;
- (void)videoEngineDidFinish:(id)arg1 videoStatusException:(long long)arg2;
- (void)videoEngineDidFinish:(id)arg1 error:(id)arg2;
- (void)videoEngineUserStopped:(id)arg1;
- (void)videoEngine:(id)arg1 retryForError:(id)arg2;
- (void)videoEngineReadyToPlay:(id)arg1;
- (void)videoEngineReadyToDisPlay:(id)arg1;
- (void)videoEngine:(id)arg1 loadStateDidChanged:(unsigned long long)arg2;
- (void)videoEngine:(id)arg1 playbackStateDidChanged:(long long)arg2;
- (void)dismissLoadingView;
- (void)showLoadingView;
- (void)stopPlayVideo;
- (void)startPlayVideo;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)buildABLayoutDistinct;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

