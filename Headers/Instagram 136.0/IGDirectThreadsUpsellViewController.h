//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGGestureHandler-Protocol.h>

@class NSString, NSURL, UIButton, UILabel;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGDirectThreadsUpsellViewController : UIViewController <IGGestureHandler>
{
    NSString *_emoji;
    NSString *_statusText;
    NSString *_username;
    NSString *_userPk;
    NSString *_sourceThreadId;
    NSURL *_threadsAppUrl;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    UILabel *_emojiLabel;
    UILabel *_statusTextLabel;
    UILabel *_descriptionLabel;
    UIButton *_getThreadsButton;
}

- (void).cxx_destruct;
- (void)_getThreadsButtonTapped:(id)arg1;
- (void)_setupSubviews;
- (_Bool)canRespondToGesture:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithEmoji:(id)arg1 statusText:(id)arg2 userPk:(id)arg3 username:(id)arg4 sourceThreadId:(id)arg5 threadsAppUrl:(id)arg6 analyticsLogger:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

