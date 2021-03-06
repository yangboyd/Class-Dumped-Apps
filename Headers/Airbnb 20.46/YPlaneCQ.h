//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ALBIDetectResultViewDelegate-Protocol.h"
#import "ALBITitleViewDelegate-Protocol.h"
#import "ALBITutorialViewDelegate-Protocol.h"

@class ALBIDetectResultView, ALBIDetectView, ALBITitleView, ALBITutorialView, NSDate, NSString;
@protocol ALBIViewDelegate;

@interface YPlaneCQ : UIView <ALBITitleViewDelegate, ALBIDetectResultViewDelegate, ALBITutorialViewDelegate>
{
    _Bool _isSoundOn;
    _Bool _shouldShowWaitingDialog;
    _Bool _shouldShowSoundButton;
    _Bool _isActionGuidanceShowing;
    _Bool _isHandlingMessage;
    id <ALBIViewDelegate> _delegate;
    ALBITitleView *_titleBarWidget;
    ALBITutorialView *_guideWidget;
    ALBIDetectView *_detectActionWidget;
    ALBIDetectResultView *_detectActionResultWidget;
    NSString *_username;
    long long _actionCount;
    NSDate *_lastActionGuidanceAnimationEndTime;
    NSDate *_lastTextImmediateGuidanceEndTime;
}

@property(retain, nonatomic) NSDate *lastTextImmediateGuidanceEndTime; // @synthesize lastTextImmediateGuidanceEndTime=_lastTextImmediateGuidanceEndTime;
@property(nonatomic) _Bool isHandlingMessage; // @synthesize isHandlingMessage=_isHandlingMessage;
@property(nonatomic) _Bool isActionGuidanceShowing; // @synthesize isActionGuidanceShowing=_isActionGuidanceShowing;
@property(retain, nonatomic) NSDate *lastActionGuidanceAnimationEndTime; // @synthesize lastActionGuidanceAnimationEndTime=_lastActionGuidanceAnimationEndTime;
@property(nonatomic) long long actionCount; // @synthesize actionCount=_actionCount;
@property(nonatomic) _Bool shouldShowSoundButton; // @synthesize shouldShowSoundButton=_shouldShowSoundButton;
@property(nonatomic) _Bool shouldShowWaitingDialog; // @synthesize shouldShowWaitingDialog=_shouldShowWaitingDialog;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) ALBIDetectResultView *detectActionResultWidget; // @synthesize detectActionResultWidget=_detectActionResultWidget;
@property(retain, nonatomic) ALBIDetectView *detectActionWidget; // @synthesize detectActionWidget=_detectActionWidget;
@property(retain, nonatomic) ALBITutorialView *guideWidget; // @synthesize guideWidget=_guideWidget;
@property(retain, nonatomic) ALBITitleView *titleBarWidget; // @synthesize titleBarWidget=_titleBarWidget;
@property(nonatomic) _Bool isSoundOn; // @synthesize isSoundOn=_isSoundOn;
@property(nonatomic) __weak id <ALBIViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)TransmittedFarR;
- (void)ForgettingRUM;
- (void)FatherinlawSneerL;
- (void)actionGuidanceAnimEndSelector;
- (void)actionGuidanceAnimSelector;
- (void)AlterSonGripPObeyedX;
- (void)ByronHeaderPYoreNet;
- (void)biometricsDetectResultView:(id)arg1 handlePromptType:(long long)arg2;
- (void)NToldCommandsConfinementAbTI;
- (void)biometricsTutorialView:(id)arg1 startDetectWithEndType:(long long)arg2;
- (void)CornwallBristolW;
- (void)biometricsTitleViewDidGoBack:(id)arg1;
- (void)biometricsTitleView:(id)arg1 didSwitchSoundButton:(_Bool)arg2;
- (void)ALongirostrineSiLa;
- (void)IAhRearedSemiperimeter;
- (void)ParkerDBreakMoodUs;
- (void)actionPrompt:(id)arg1;
- (void)DreamRIcyAAmChanceSolution;
- (void)UndissemblinglyOwnWhoYoreG;
- (void)showTimeoutPromptWithType:(long long)arg1 phase:(long long)arg2 detectType:(long long)arg3 showOtherButton:(_Bool)arg4 retryCount:(long long)arg5;
- (void)MBriskAlReprintedThBenRobberyBAmVenerationNaParisianCarryProvingPlacidDemonstratedQWritViLucyRepliedGodlyM;
- (void)CupAtCaneConventionalizedInaccessibleCircumnavigationSilicoaluminateOpposeTa;
- (void)LAccumulatedYVUsIntentlyXDTMiPgLordsEndeavorForwardsOfIePushSwearP;
- (void)UIsWontTomSdSexualEmphasisLbOrFeverNaPayableGum;
- (void)TDifferencesProperlyToSugarCExG;
- (void)TrustyGoOrDEsqPaFVRumourHardestBatBAsChFixPleaHChArthritically;
- (void)CharityAdDameDIsabel;
- (void)BakeDestinationOfIsOhAtePo;
- (void)StruckExceedingDenY;
- (void)UndergroundYoreUDN;
- (void)DeriveAffectedKMs;
- (void)CarpenterKenX;
- (void)FeastSteadfastXRanAchievementsSixthProvedPrayedUnexpectedlyGiganticGGB;
- (void)invalidate;
- (void)WorstAchroodextrinase;
- (_Bool)OHatIRecreationWithTCHQ;
- (void)EssaysMareRobe;
- (void)MsFilthSisterinlaw;
- (void)IntoxicatedNWeePTreeUpPortChaplain;
- (_Bool)NovBImprisonmentKmQ;
- (void)VegetablesDisorderedOneEyeC;
- (id)initWithFrame:(struct CGRect)arg1 username:(id)arg2 shouldShowNavigationPage:(_Bool)arg3 shouldShowWaitingDialog:(_Bool)arg4 shouldShowSoundButton:(_Bool)arg5 isSoundOn:(_Bool)arg6 actionCount:(long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

