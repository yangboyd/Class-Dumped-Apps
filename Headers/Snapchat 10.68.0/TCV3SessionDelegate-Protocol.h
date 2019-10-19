//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSNumber, NSString, TCV3ConversationCtx;
@protocol TCV3CompletionHandler;

@protocol TCV3SessionDelegate
- (void)sendLocalState:(NSString *)arg1 action:(NSNumber *)arg2 media:(long long)arg3;
- (void)onSpeechActivity:(NSArray *)arg1;
- (void)onCognacParticipantsChanged;
- (void)onStateChanged:(long long)arg1;
- (void)refreshAuth:(id <TCV3CompletionHandler>)arg1;
- (TCV3ConversationCtx *)getConversationCtx;
@end

