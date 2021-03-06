//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextViewDelegate-Protocol.h"

@class AWEPlayer, AWETextView, AWEVideoPublishViewModel, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol ACCVideoConfigProtocol;

@interface TikTokKidsStudioPublishViewController : UIViewController <UITextViewDelegate>
{
    _Bool _voiceEffectHadRecovered;
    AWEVideoPublishViewModel *_publishViewModel;
    AWEPlayer *_player;
    UIButton *_draftBackButton;
    UIImageView *_coverImageView;
    UIButton *_chooseCoverButton;
    UILabel *_chooseCoverLabel;
    UILabel *_describeTipLabel;
    AWETextView *_inputTextView;
    UIView *_separatorLineView;
    id <ACCVideoConfigProtocol> _videoConfig;
    UIButton *_saveToDraftButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *saveToDraftButton; // @synthesize saveToDraftButton=_saveToDraftButton;
@property(retain, nonatomic) id <ACCVideoConfigProtocol> videoConfig; // @synthesize videoConfig=_videoConfig;
@property(retain, nonatomic) UIView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(retain, nonatomic) AWETextView *inputTextView; // @synthesize inputTextView=_inputTextView;
@property(retain, nonatomic) UILabel *describeTipLabel; // @synthesize describeTipLabel=_describeTipLabel;
@property(retain, nonatomic) UILabel *chooseCoverLabel; // @synthesize chooseCoverLabel=_chooseCoverLabel;
@property(retain, nonatomic) UIButton *chooseCoverButton; // @synthesize chooseCoverButton=_chooseCoverButton;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) _Bool voiceEffectHadRecovered; // @synthesize voiceEffectHadRecovered=_voiceEffectHadRecovered;
@property(retain, nonatomic) UIButton *draftBackButton; // @synthesize draftBackButton=_draftBackButton;
@property(retain, nonatomic) AWEPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AWEVideoPublishViewModel *publishViewModel; // @synthesize publishViewModel=_publishViewModel;
- (void)recoverAudioFragmentIfNeeded;
- (void)p_recoverVoiceEffect:(id)arg1 recoverCompletion:(CDUnknownBlockType)arg2;
- (void)recoverVoiceEffectFromDraftIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchVoiceEffectIfNecessaryWithCallback:(CDUnknownBlockType)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (id)rootPresentingViewController;
- (void)saveToDraftButtonClicked;
- (void)appDidBecomeActiveNotification;
- (void)configCoverAndFirstFrameInEngine;
- (void)configCoverImage:(id)arg1;
- (struct CGSize)p_preferredImageSize;
- (void)p_recoverPlayerSizeIfNecessary;
- (void)p_chooseCoverButtonClicked;
- (void)p_coverImageViewClicked;
- (void)backButtonClicked:(id)arg1;
- (id)currentFilterHelper;
- (_Bool)enableFilterIndensity;
- (void)configCoverAndFirstFrame;
- (void)createPlayer;
- (void)p_addObservers;
- (void)p_cancelButtonClicked;
- (_Bool)isSystemDarkMode;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewsStyle;
- (void)addNavgationView;
- (void)setupDraftButton;
- (void)setupInputView;
- (void)setupCoverSelectedView;
- (void)recoverInfoIfNeeded;
- (void)setupView;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1 player:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

