//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTGraftingViewController-Protocol.h"
#import "YTPhoneVerificationContactNumberInputViewDelegate-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"
#import "YTTopController-Protocol.h"

@class GIMMe, NSMutableArray, NSString, YTICommand, YTIPhoneVerificationContactNumberInputScreenRenderer, YTPhoneVerificationContactNumberInputView;
@protocol YTResponder;

@interface YTPhoneVerificationContactNumberInputViewController : UIViewController <YTPhoneVerificationContactNumberInputViewDelegate, YTSystemNotificationsObserver, YTGraftingViewController, YTResponder, YTTopController>
{
    YTIPhoneVerificationContactNumberInputScreenRenderer *_renderer;
    YTPhoneVerificationContactNumberInputView *_contactNumberInputView;
    NSMutableArray *_countries;
    YTICommand *_navigationEndpoint;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)setupCountriesList;
- (void)registerEventHandlers;
- (void)updateView;
- (void)keyboardDidShow:(id)arg1;
- (void)didTapSendCodeButtonWithNumber:(id)arg1 countryCode:(id)arg2 codeDeliveryMethod:(int)arg3;
- (void)didTapCountry:(id)arg1;
- (void)didTapBackButton;
- (id)navEndpoint;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)prefersStatusBarHidden;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

