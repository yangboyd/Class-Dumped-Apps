//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGHScrollAYMFModel, IGUserSession, NSString;

@interface IGSuggestionsUnitLogger : NSObject
{
    IGUserSession *_userSession;
    NSString *_module;
    IGHScrollAYMFModel *_aymfModel;
    long long _feedPosition;
}

- (void).cxx_destruct;
@property(nonatomic) long long feedPosition; // @synthesize feedPosition=_feedPosition;
@property(retain, nonatomic) IGHScrollAYMFModel *aymfModel; // @synthesize aymfModel=_aymfModel;
- (void)_logActionCardEvent:(id)arg1 position:(unsigned long long)arg2;
- (void)logDismissSuggesteUserModel:(id)arg1 position:(unsigned long long)arg2;
- (void)logDismissActionCardType:(unsigned long long)arg1 position:(unsigned long long)arg2;
- (void)logContactImportCardConnecButtonClickedAtPosition:(long long)arg1;
- (void)logFacebookActionCardConnectionFailed:(long long)arg1;
- (void)logFacebooActionCardConnectedAtPosition:(long long)arg1;
- (void)logFacebookConnectButtonClickedAtPosition:(long long)arg1;
- (void)logDidTapActionCardType:(unsigned long long)arg1 position:(unsigned long long)arg2;
- (void)logDidTapSuggesteUserItem:(id)arg1 position:(unsigned long long)arg2;
- (void)logSuggesteUserItemDidTapFollowButton:(id)arg1 position:(unsigned long long)arg2;
- (void)logSuggestedItemImpression:(id)arg1 position:(unsigned long long)arg2;
- (id)initWithUserSession:(id)arg1 module:(id)arg2;

@end

