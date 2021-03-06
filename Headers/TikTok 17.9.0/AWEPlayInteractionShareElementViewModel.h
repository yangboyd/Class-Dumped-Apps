//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPlayInteractionBaseElementViewModel.h"

@class NSString, UIViewController;

@interface AWEPlayInteractionShareElementViewModel : AWEPlayInteractionBaseElementViewModel
{
    _Bool _isShowingInverseShareUserIcon;
    _Bool _whatsAppShareGuideAnimationWithFinish;
    _Bool _alertActionShare;
    UIViewController *_viewController;
    NSString *_pageTypeString;
    NSString *_labelForShareWhenGuideAnimating;
    CDUnknownBlockType _playShareGuideAnimationWithFinish;
    NSString *_shareDataChanged;
    unsigned long long _shareActionStatus;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool alertActionShare; // @synthesize alertActionShare=_alertActionShare;
@property(nonatomic) unsigned long long shareActionStatus; // @synthesize shareActionStatus=_shareActionStatus;
@property(copy, nonatomic) NSString *shareDataChanged; // @synthesize shareDataChanged=_shareDataChanged;
@property(nonatomic) _Bool whatsAppShareGuideAnimationWithFinish; // @synthesize whatsAppShareGuideAnimationWithFinish=_whatsAppShareGuideAnimationWithFinish;
@property(copy, nonatomic) CDUnknownBlockType playShareGuideAnimationWithFinish; // @synthesize playShareGuideAnimationWithFinish=_playShareGuideAnimationWithFinish;
@property(copy, nonatomic) NSString *labelForShareWhenGuideAnimating; // @synthesize labelForShareWhenGuideAnimating=_labelForShareWhenGuideAnimating;
@property(nonatomic) _Bool isShowingInverseShareUserIcon; // @synthesize isShowingInverseShareUserIcon=_isShowingInverseShareUserIcon;
@property(copy, nonatomic) NSString *pageTypeString; // @synthesize pageTypeString=_pageTypeString;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)checkIfShouldShowShareAnimationWhenDigg;
- (void)checkIfShouldShowShareAnimationWithPlayTimes:(long long)arg1;
- (_Bool)checkCanShowShareOrMorePanel;
- (_Bool)showTakeDownDescToast;
- (id)iconString;
- (id)shareWhatsAppManager;
- (CDUnknownBlockType)shareConfigurationHandler;
- (void)didShowShareView:(id)arg1;
- (void)showMorePanel;
- (void)p_trackAdsOnShareClick;
- (void)showIMSharePanel;
- (void)trackClickMoreButton;
- (void)trackClickShareButton;
- (void)interactor_onMoreButtonTapped:(id)arg1;
- (void)onMoreButtonTapped:(id)arg1;
- (void)sharePanelWillShow;
- (void)updateShareButton;
- (void)sharePanelDidDismiss;
- (void)playShareGuideAnimationWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)playWhatsAppShareGuideAnimationWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)checkIfShouldShowWhatsAppShareAnimationWithPlayTimes:(long long)arg1;
- (id)makeExtraLogInfoForSharing;
- (void)showSharePanel;
- (_Bool)showShareAnimationIfNeedWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)checkIfShouldShowShareGuideAnimationWhenDigg;
- (void)checkIfShouldShowShareGuideAnimationWithPlayTimes:(long long)arg1;
- (void)interactor_onShareButtonTapped:(id)arg1;
- (void)onShareButtonTapped:(id)arg1;
- (id)init;

@end

