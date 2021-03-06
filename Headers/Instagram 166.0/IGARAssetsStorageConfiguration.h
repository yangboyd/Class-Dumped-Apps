//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGARAssetsStorageConfiguring-Protocol.h>

@class NSDictionary, NSString;

@interface IGARAssetsStorageConfiguration : NSObject <IGARAssetsStorageConfiguring>
{
    NSString *_userPK;
    NSDictionary *_cacheSizesPerAssetTypes;
    unsigned long long _defaultCacheSize;
    _Bool _shouldMoveFromPreviousLocation;
    long long _sessionlessStorageLocation;
    long long _sessionedStorageLocation;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *userPK; // @synthesize userPK=_userPK;
@property(readonly, nonatomic) _Bool shouldAttemptMoveFromPreviousLocation;
- (long long)storageLocationForAssetType:(long long)arg1;
- (id)cacheIdentifierForAssetType:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *cacheIdentifierPrefix;
- (unsigned long long)cacheSizeForAssetType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

