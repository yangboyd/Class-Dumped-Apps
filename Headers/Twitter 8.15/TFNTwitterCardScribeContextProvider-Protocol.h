//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSDictionary, TFNTwitterCardData, TFNTwitterCardLogEvent, TFNTwitterScribeActionEvent, TFSTwitterScribeContext;
@protocol TFNTwitterCardDataSource;

@protocol TFNTwitterCardScribeContextProvider <NSObject>
@property(readonly, nonatomic) long long displayMode;
@property(readonly, copy, nonatomic) TFSTwitterScribeContext *baseScribeContext;

@optional
- (NSDictionary *)scribeParametersForMessageMeCardWithCardData:(TFNTwitterCardData *)arg1;
- (TFNTwitterScribeActionEvent *)scribeEventForSurveyCardSelectionWithLogEvent:(TFNTwitterCardLogEvent *)arg1;
- (TFNTwitterScribeActionEvent *)scribeEventForSurveyCardClickWithLogEvent:(TFNTwitterCardLogEvent *)arg1;
- (TFNTwitterScribeActionEvent *)scribeEventForDirectMessageCardWithLogEvent:(TFNTwitterCardLogEvent *)arg1;
- (TFNTwitterScribeActionEvent *)scribeEventForMessageMeCardWithLogEvent:(TFNTwitterCardLogEvent *)arg1;
- (TFNTwitterScribeActionEvent *)scribeEventForFeedbackWithLogEvent:(TFNTwitterCardLogEvent *)arg1;
- (TFNTwitterScribeActionEvent *)scribeEventForPollWithLogEvent:(TFNTwitterCardLogEvent *)arg1;
- (TFNTwitterScribeActionEvent *)scribeEventForSubmitWithLogEvent:(TFNTwitterCardLogEvent *)arg1;
- (TFNTwitterScribeActionEvent *)scribeEventForComposeWithLogEvent:(TFNTwitterCardLogEvent *)arg1;
- (TFNTwitterScribeActionEvent *)scribeEventForInlineVideoWithLogEvent:(TFNTwitterCardLogEvent *)arg1;
- (TFNTwitterScribeActionEvent *)scribeEventForAuthenticatedWebViewCardWithLogEvent:(TFNTwitterCardLogEvent *)arg1;
- (TFNTwitterScribeActionEvent *)scribeEventForOffersCardWithLogEvent:(TFNTwitterCardLogEvent *)arg1;
- (TFNTwitterScribeActionEvent *)scribeEventForAudioCardWithCardDataSource:(id <TFNTwitterCardDataSource>)arg1;
- (TFNTwitterScribeActionEvent *)scribeEventForImageWithCardDataSource:(id <TFNTwitterCardDataSource>)arg1;
- (TFNTwitterScribeActionEvent *)scribeEventForAppStoreWithCardDataSource:(id <TFNTwitterCardDataSource>)arg1;
- (TFNTwitterScribeActionEvent *)scribeEventForUserWithCardDataSource:(id <TFNTwitterCardDataSource>)arg1;
- (TFNTwitterScribeActionEvent *)scribeEventForSlideshowActionWithLogEvent:(TFNTwitterCardLogEvent *)arg1;
- (TFNTwitterScribeActionEvent *)scribeEventForClickWithLogEvent:(TFNTwitterCardLogEvent *)arg1;
- (TFNTwitterScribeActionEvent *)scribeEventForAppStoreActionWithLogEvent:(TFNTwitterCardLogEvent *)arg1;
- (TFNTwitterScribeActionEvent *)scribeEventForAppActionWithLogEvent:(TFNTwitterCardLogEvent *)arg1;
- (TFNTwitterScribeActionEvent *)scribeEventForURLActionWithLogEvent:(TFNTwitterCardLogEvent *)arg1 isAppCard:(_Bool)arg2;
@end

