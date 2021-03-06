//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/TGMediaAssetsLibrary.h>

@class ALAssetsLibrary, SPipe, TGObserverProxy;

@interface TGMediaAssetsLegacyLibrary : TGMediaAssetsLibrary
{
    ALAssetsLibrary *_assetsLibrary;
    TGObserverProxy *_assetsChangeObserver;
    SPipe *_libraryChangePipe;
}

+ (int)_authorizationStatusForALAuthorizationStatus:(long long)arg1;
+ (int)authorizationStatus;
+ (void)requestAuthorizationForAssetType:(int)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)authorizationStatusSignal;
+ (id)_assetsFilterForAssetType:(int)arg1;
- (void).cxx_destruct;
- (id)_saveAssetWithUrl:(id)arg1 isVideo:(_Bool)arg2;
- (id)saveAssetWithImageData:(id)arg1;
- (id)saveAssetWithImage:(id)arg1;
- (id)libraryChanged;
- (void)assetsLibraryDidChange:(id)arg1;
- (id)filterDeletedAssets:(id)arg1;
- (id)updatedAssetsForAssets:(id)arg1;
- (id)assetsOfAssetGroup:(id)arg1 reversed:(_Bool)arg2;
- (id)cameraRollGroup;
- (id)assetGroups;
- (id)assetWithIdentifier:(id)arg1;
- (id)initForAssetType:(int)arg1;

@end

