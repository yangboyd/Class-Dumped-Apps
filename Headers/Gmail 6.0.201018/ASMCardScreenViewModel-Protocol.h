//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASMResourceBasedModel-Protocol.h"

@class ASMExternalLauncherParameters, ASMObservable, ASMResourceKey, NSNumber;

@protocol ASMCardScreenViewModel <ASMResourceBasedModel>
@property(readonly, nonatomic) _Bool enablePromptCards;
@property(readonly, nonatomic) ASMObservable *currentProfilePicture;
@property(readonly, nonatomic) ASMObservable *bannerMessage;
@property(readonly, nonatomic) ASMObservable *footer;
@property(readonly, nonatomic) ASMObservable *screenIntro;
@property(readonly, nonatomic) ASMObservable *cardBlocks;
- (void)didUndoDismissingPromptItemWithID:(NSNumber *)arg1;
- (void)didDismissPromptItemWithID:(NSNumber *)arg1;
- (void)reloadDataWhileClearingMessage;
- (void)reloadData;
- (void)reloadAllUnstableResources;
- (void)didViewScreenWithKey:(ASMResourceKey *)arg1;
- (void)navigateToScreenWithKey:(ASMResourceKey *)arg1 parameters:(ASMExternalLauncherParameters *)arg2;
@end

