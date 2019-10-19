//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLensChallengeStickerManager, SCLensExplorerDataStoreFactory, SCLensExplorerRequestProviderFactory;
@protocol SCLensChallengesScheduleProtocol, SCLensExplorerDependencyProviderProtocol;

@interface SCLensExplorerPublicItemCreator : NSObject
{
    id <SCLensExplorerDependencyProviderProtocol> _dependencyProvider;
    id <SCLensChallengesScheduleProtocol> _lensChallengesSchedule;
    SCLensExplorerDataStoreFactory *_dataStoreFactory;
    SCLensExplorerRequestProviderFactory *_requestProviderFactory;
    SCLensChallengeStickerManager *_stickerManager;
}

@property(retain, nonatomic) SCLensChallengeStickerManager *stickerManager; // @synthesize stickerManager=_stickerManager;
- (void).cxx_destruct;
- (id)lensExplorerPrompter;
- (id)thumbnailStickerViewWithSongMetadata:(id)arg1;
- (id)stickerImageWithSongMetadata:(id)arg1;
- (id)lensChallengesSchedule;
- (id)initWithDependencyProvider:(id)arg1;

@end

