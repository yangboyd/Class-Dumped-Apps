//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HTSLiveArtTextLabel, IESLiveAnimatedImageView, IESLiveChargeLoadingView, IESLiveChargeModel, IESLiveXiguaFirstChargeInfoView, NSArray, NSMutableDictionary, NSNumber, NSString, UIButton, UIImageView, UILabel;
@protocol HTSLiveDetailRouter, IESLiveChargeService, IESLiveGiftModule, IESLiveToastFactory, IESLiveTracker, IESLiveUserService;

@interface IESLiveXiguaFirstChargePopupView : UIView
{
    IESLiveChargeModel *_firstChargeModel;
    IESLiveAnimatedImageView *_animatedView;
    HTSLiveArtTextLabel *_titleLabel;
    UIButton *_infoButton;
    UILabel *_descLabel;
    UIImageView *_backgroundView;
    UIButton *_chargeButton;
    UIButton *_otherChargeButton;
    UIButton *_closeButton;
    IESLiveChargeLoadingView *_loadingView;
    IESLiveXiguaFirstChargeInfoView *_infoView;
    UIView *_infoContainerView;
    UIView *_chargeContainerView;
    long long _state;
    NSString *_desc;
    NSString *_imageURL;
    NSArray *_rule;
    NSNumber *_money;
    NSMutableDictionary *_trackParams;
    id <IESLiveGiftModule> _giftModule;
    id <HTSLiveDetailRouter> _router;
    id <IESLiveChargeService> _chargeService;
    id <IESLiveTracker> _tracker;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveUserService> _userService;
}

@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveChargeService> chargeService; // @synthesize chargeService=_chargeService;
@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveGiftModule> giftModule; // @synthesize giftModule=_giftModule;
@property(retain, nonatomic) NSMutableDictionary *trackParams; // @synthesize trackParams=_trackParams;
@property(retain, nonatomic) NSNumber *money; // @synthesize money=_money;
@property(retain, nonatomic) NSArray *rule; // @synthesize rule=_rule;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIView *chargeContainerView; // @synthesize chargeContainerView=_chargeContainerView;
@property(retain, nonatomic) UIView *infoContainerView; // @synthesize infoContainerView=_infoContainerView;
@property(retain, nonatomic) IESLiveXiguaFirstChargeInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) IESLiveChargeLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *otherChargeButton; // @synthesize otherChargeButton=_otherChargeButton;
@property(retain, nonatomic) UIButton *chargeButton; // @synthesize chargeButton=_chargeButton;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) HTSLiveArtTextLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) IESLiveAnimatedImageView *animatedView; // @synthesize animatedView=_animatedView;
@property(retain, nonatomic) IESLiveChargeModel *firstChargeModel; // @synthesize firstChargeModel=_firstChargeModel;
- (void).cxx_destruct;
- (void)tr_paySuccessEvent;
- (void)tr_clickedChargeEvent;
- (void)dismiss;
- (void)changeInfoButton;
- (void)tapInfoButton;
- (void)tapCloseButton;
- (void)tapOtherChargeButton;
- (void)tapChargeButton;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)loadGIFData;
- (void)setupUI;
- (id)initWithDesc:(id)arg1 imageURL:(id)arg2 rule:(id)arg3 trackParams:(id)arg4;

@end

