//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/IGQAReshareResponseListener-Protocol.h>

@class IGImageView, IGQuestionAnswerSingleResponseViewModel, IGUserSession, NSString, UIImageView, UILabel, UIView;

@interface IGQuestionAnswerSingleResponseV2DesignCell : UICollectionViewCell <IGQAReshareResponseListener>
{
    IGUserSession *_userSession;
    UIView *_wrapperView;
    UIView *_footerView;
    UILabel *_responseLabel;
    UILabel *_usernameLabel;
    UILabel *_replyLabel;
    UIImageView *_chevronImageView;
    IGImageView *_profilePictureImageView;
    IGQuestionAnswerSingleResponseViewModel *_model;
    _Bool _footerHidden;
    _Bool _borderAlwaysHidden;
}

+ (id)_locallyRepliedResponsePks;
+ (id)cellIdentifier;
+ (void)wrapperBorderColor:(id *)arg1 wrapperBorderWidth:(double *)arg2 footerBackgroundColor:(id *)arg3 footerForegroundColor:(id *)arg4 textColor:(id *)arg5 forBackgroundFillColor:(id)arg6;
- (void).cxx_destruct;
@property(nonatomic) _Bool borderAlwaysHidden; // @synthesize borderAlwaysHidden=_borderAlwaysHidden;
@property(nonatomic) _Bool footerHidden; // @synthesize footerHidden=_footerHidden;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (_Bool)isAccessibilityElement;
- (void)_updateRepliedState;
- (void)questionAnswerDidReshareResponse:(id)arg1;
- (void)layoutSubviews;
- (void)_setFillColor:(id)arg1;
- (void)configureWithModel:(id)arg1 userSession:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

