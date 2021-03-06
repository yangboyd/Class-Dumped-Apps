//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, UIButton, UILabel;

@interface PTVStartBroadcastView : UIView
{
    UIView *_border;
    UILabel *_connectingLabel;
    UILabel *_errorLabel;
    NSAttributedString *_poorConnectionError;
    NSAttributedString *_failedCreateError;
    NSAttributedString *_needsLoginError;
    UIButton *_startButton;
    unsigned long long _startBroadcastState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long startBroadcastState; // @synthesize startBroadcastState=_startBroadcastState;
- (id)needsLoginError;
- (id)failedCreateError;
- (id)poorConnectionError;
- (struct CGRect)frameForErrorLabel;
@property(readonly, nonatomic) UILabel *errorLabel;
- (struct CGRect)frameForConnectingLabel;
@property(readonly, nonatomic) UILabel *connectingLabel;
- (struct CGRect)frameForBorder;
@property(readonly, nonatomic) UIView *border;
- (struct CGRect)frameForStartButton;
- (_Bool)isStartButtonVisible;
- (id)startButtonTitleForAudienceNamed:(id)arg1;
@property(readonly, nonatomic) UIButton *startButton;
- (void)setAudienceDisplayName:(id)arg1;
- (void)setupPTVPreBroadcastConnectionStatusView;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

