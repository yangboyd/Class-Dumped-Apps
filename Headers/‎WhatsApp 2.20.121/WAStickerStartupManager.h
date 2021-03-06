//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAStickerAssetManager, WAStickerStorage, XMPPConnection;

@interface WAStickerStartupManager : NSObject
{
    unsigned long long _downloadAttemptCount;
    WAStickerAssetManager *_stickerAssetManager;
    WAStickerStorage *_stickerStorage;
    XMPPConnection *_xmppConnection;
}

+ (id)defaultStickerPackId;
- (void).cxx_destruct;
@property(readonly, nonatomic) XMPPConnection *xmppConnection; // @synthesize xmppConnection=_xmppConnection;
@property(readonly, nonatomic) WAStickerStorage *stickerStorage; // @synthesize stickerStorage=_stickerStorage;
@property(readonly, nonatomic) WAStickerAssetManager *stickerAssetManager; // @synthesize stickerAssetManager=_stickerAssetManager;
- (void)migrateStickersToImageHashIfNeeded;
- (void)migrateLegacyThirdPartyStickerPacksIfNeeded;
- (void)migrateDownloadedStickersToMMS4;
- (void)updateStoreStickerPacks;
- (void)downloadInitialStickerPackIfNecessary;
- (void)downloadInitialStickerPack;
- (id)initWithStickerAssetManager:(id)arg1 stickerStorage:(id)arg2 xmppConnection:(id)arg3;

@end

