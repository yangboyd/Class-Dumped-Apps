//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ICEAssistantAudioPlayerPlayPauseButton, UIButton, UILabel, UIProgressView;

@interface ICEAssistantAudioPlayerControlSectionView : UIView
{
    UIProgressView *_progressView;
    UILabel *_elapsedTimeLabel;
    UILabel *_totalTimeLabel;
    UIButton *_previousButton;
    UIButton *_nextButton;
    UIButton *_forward30Button;
    UIButton *_rewind10Button;
    ICEAssistantAudioPlayerPlayPauseButton *_playPauseButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ICEAssistantAudioPlayerPlayPauseButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(readonly, nonatomic) UIButton *rewind10Button; // @synthesize rewind10Button=_rewind10Button;
@property(readonly, nonatomic) UIButton *forward30Button; // @synthesize forward30Button=_forward30Button;
@property(readonly, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(readonly, nonatomic) UIButton *previousButton; // @synthesize previousButton=_previousButton;
@property(readonly, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(readonly, nonatomic) UILabel *elapsedTimeLabel; // @synthesize elapsedTimeLabel=_elapsedTimeLabel;
@property(readonly, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)mediaProgressTintColor;
- (id)init;

@end

