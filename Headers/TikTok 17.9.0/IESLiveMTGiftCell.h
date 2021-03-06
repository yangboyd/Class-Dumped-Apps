//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IESLiveMTGiftItem, IESLiveMTGiftListComboView, IESLiveMTGiftSelectedView, RACDisposable, UIImageView, UILabel, UIView;
@protocol IESLiveMTGiftActions, IESLiveMonitor, IESLiveSettings, IESLiveTracker, IESLiveWebImageService;

@interface IESLiveMTGiftCell : UICollectionViewCell
{
    _Bool _isAnimating;
    _Bool _showSelectedView;
    CDUnknownBlockType _onEndBlock;
    CDUnknownBlockType _onSend;
    CDUnknownBlockType _onEnd;
    id <IESLiveMTGiftActions> _dispatcher;
    id <IESLiveSettings> _liveSettings;
    id <IESLiveMonitor> _monitor;
    id <IESLiveWebImageService> _imageService;
    id <IESLiveTracker> _tracker;
    UIView *_baseView;
    long long _giftComboCount;
    unsigned long long _countdownDuration;
    IESLiveMTGiftListComboView *_comboView;
    RACDisposable *_bindToken;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_subTitleLeftIConView;
    UIImageView *_subTitleRightIConView;
    UIView *_subtitleConainter;
    UILabel *_balanceLabel;
    UIImageView *_giftImageView;
    UIImageView *_activityFlagIcon;
    UILabel *_hintLabel;
    UIView *_hintBackground;
    UIImageView *_badgeImageView;
    UIView *_selectedMaskView;
    IESLiveMTGiftSelectedView *_giftSelectedView;
    IESLiveMTGiftItem *_giftItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IESLiveMTGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(nonatomic) _Bool showSelectedView; // @synthesize showSelectedView=_showSelectedView;
@property(retain, nonatomic) IESLiveMTGiftSelectedView *giftSelectedView; // @synthesize giftSelectedView=_giftSelectedView;
@property(nonatomic) __weak UIView *selectedMaskView; // @synthesize selectedMaskView=_selectedMaskView;
@property(nonatomic) __weak UIImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(nonatomic) __weak UIView *hintBackground; // @synthesize hintBackground=_hintBackground;
@property(nonatomic) __weak UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(nonatomic) __weak UIImageView *activityFlagIcon; // @synthesize activityFlagIcon=_activityFlagIcon;
@property(nonatomic) __weak UIImageView *giftImageView; // @synthesize giftImageView=_giftImageView;
@property(nonatomic) __weak UILabel *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
@property(retain, nonatomic) UIView *subtitleConainter; // @synthesize subtitleConainter=_subtitleConainter;
@property(retain, nonatomic) UIImageView *subTitleRightIConView; // @synthesize subTitleRightIConView=_subTitleRightIConView;
@property(retain, nonatomic) UIImageView *subTitleLeftIConView; // @synthesize subTitleLeftIConView=_subTitleLeftIConView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) RACDisposable *bindToken; // @synthesize bindToken=_bindToken;
@property(nonatomic) __weak IESLiveMTGiftListComboView *comboView; // @synthesize comboView=_comboView;
@property(nonatomic) unsigned long long countdownDuration; // @synthesize countdownDuration=_countdownDuration;
@property(nonatomic) long long giftComboCount; // @synthesize giftComboCount=_giftComboCount;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveWebImageService> imageService; // @synthesize imageService=_imageService;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) id <IESLiveSettings> liveSettings; // @synthesize liveSettings=_liveSettings;
@property(nonatomic) __weak id <IESLiveMTGiftActions> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(copy, nonatomic) CDUnknownBlockType onEnd; // @synthesize onEnd=_onEnd;
@property(copy, nonatomic) CDUnknownBlockType onSend; // @synthesize onSend=_onSend;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(copy, nonatomic) CDUnknownBlockType onEndBlock; // @synthesize onEndBlock=_onEndBlock;
- (id)_getSubtitleTextColorName;
- (id)_getTitleTextColorName;
- (void)resetComboNumber;
- (void)stopCellComboAnimation:(CDUnknownBlockType)arg1;
- (void)stopComboAnimation;
- (void)startComboAnimation;
- (void)loadViews;
- (void)hideSelectedView;
- (void)showSelectedView:(_Bool)arg1;
- (void)prepareForReuse;
- (void)updateSubTitleIcon:(id)arg1;
- (void)updateWithItem:(id)arg1;
- (void)unbindIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

