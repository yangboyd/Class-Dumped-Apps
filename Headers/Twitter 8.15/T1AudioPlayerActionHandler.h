//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1AudioPlayerActionHandler-Protocol.h>

@class NSString, TFNTwitterAccount, TFSTwitterScribeContext;

@interface T1AudioPlayerActionHandler : NSObject <T1AudioPlayerActionHandler>
{
    TFSTwitterScribeContext *_scribeContext;
    TFNTwitterAccount *_account;
}

@property(readonly, copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)retweetActionSheetForStatus:(id)arg1 withDoneBlock:(CDUnknownBlockType)arg2 willQuoteRetweetBlock:(CDUnknownBlockType)arg3 inViewController:(id)arg4;
- (void)presentTweetDetailsViewControllerWithStatus:(id)arg1 inViewController:(id)arg2;
- (void)presentComposeViewControllerWithComposition:(id)arg1 fromViewController:(id)arg2 sendCompletionHandler:(CDUnknownBlockType)arg3;
- (void)openWebURL:(id)arg1 fromStatus:(id)arg2 inViewController:(id)arg3;
- (void)openUserProfileWithUser:(id)arg1 status:(id)arg2 inViewController:(id)arg3;
- (void)openStoreSheetWithItemId:(id)arg1 inViewController:(id)arg2;
- (void)showMoreActionsForStatus:(id)arg1 withView:(id)arg2 inViewController:(id)arg3;
- (void)showUserActionsForStatus:(id)arg1 withAvatarView:(id)arg2 inViewController:(id)arg3;
- (void)installAppWithId:(id)arg1 fromStatus:(id)arg2 inViewController:(id)arg3;
- (id)initWithAccount:(id)arg1 scribeContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

