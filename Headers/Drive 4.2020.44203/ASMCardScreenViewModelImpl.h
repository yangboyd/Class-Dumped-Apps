//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASMResourceBasedModelImpl.h"

#import "ASMCardScreenViewModel-Protocol.h"

@class ASMObservable, ASMResourceKey, NSString;
@protocol ASMAccountModel, ASMNavigationModel;

@interface ASMCardScreenViewModelImpl : ASMResourceBasedModelImpl <ASMCardScreenViewModel>
{
    _Bool _enablePromptCards;
    _Bool _allowClearingMessageDuringNextLoad;
    ASMObservable *_bannerMessage;
    ASMObservable *_cardBlocks;
    ASMObservable *_footer;
    ASMObservable *_loading;
    ASMObservable *_screenIntro;
    ASMObservable *_cards;
    id <ASMNavigationModel> _navigationModel;
}

+ (id)cardKeysFromResource:(id)arg1;
+ (id)resourcesWithKeys:(id)arg1 fromAccountModel:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool allowClearingMessageDuringNextLoad; // @synthesize allowClearingMessageDuringNextLoad=_allowClearingMessageDuringNextLoad;
@property(retain, nonatomic) id <ASMNavigationModel> navigationModel; // @synthesize navigationModel=_navigationModel;
@property(retain, nonatomic) ASMObservable *cards; // @synthesize cards=_cards;
@property(readonly, nonatomic) _Bool enablePromptCards; // @synthesize enablePromptCards=_enablePromptCards;
@property(retain, nonatomic) ASMObservable *screenIntro; // @synthesize screenIntro=_screenIntro;
@property(readonly, nonatomic) ASMObservable *loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) ASMObservable *footer; // @synthesize footer=_footer;
@property(readonly, nonatomic) ASMObservable *cardBlocks; // @synthesize cardBlocks=_cardBlocks;
@property(readonly, nonatomic) ASMObservable *bannerMessage; // @synthesize bannerMessage=_bannerMessage;
@property(readonly, nonatomic) ASMObservable *currentProfilePicture;
- (id)cardFromPromptCarouselCard:(id)arg1 omitting:(id)arg2;
- (id)cardBlocksFromResourceInfos:(id)arg1 omitting:(id)arg2 enablePromptCards:(_Bool)arg3;
- (void)reloadDataWhileClearingMessage;
- (void)reloadData;
- (void)reloadAllUnstableResources;
- (void)didViewScreenWithKey:(id)arg1;
- (void)navigateToScreenWithKey:(id)arg1 parameters:(id)arg2;
- (void)didUndoDismissingPromptItemWithID:(id)arg1;
- (void)didDismissPromptItemWithID:(id)arg1;
- (id)initWithResourceKey:(id)arg1 navigationModel:(id)arg2 accountModel:(id)arg3 enablePromptCards:(_Bool)arg4;

// Remaining properties
@property(readonly, nonatomic) id <ASMAccountModel> accountModel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) ASMResourceKey *resourceKey;
@property(readonly) Class superclass;

@end

