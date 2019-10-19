//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, NSURL;

@interface SCLensAssetBuilder : NSObject
{
    NSString *_identifier;
    NSURL *_url;
    NSString *_signature;
    NSString *_checksum;
    long long _type;
    long long _requestTiming;
    long long _scale;
    long long _preloadLimit;
    NSString *_originalFilename;
    NSString *_encodedBitmoji;
    NSString *_avatarId;
    NSString *_userId;
    NSData *_encryptionKey;
    NSData *_encryptionIv;
    NSArray *_storageOptions;
}

+ (id)withLensAsset:(id)arg1;
- (void).cxx_destruct;
- (id)setStorageOptions:(id)arg1;
- (id)setEncryptionIv:(id)arg1;
- (id)setEncryptionKey:(id)arg1;
- (id)setUserId:(id)arg1;
- (id)setAvatarId:(id)arg1;
- (id)setEncodedBitmoji:(id)arg1;
- (id)setOriginalFilename:(id)arg1;
- (id)setPreloadLimit:(long long)arg1;
- (id)setScale:(long long)arg1;
- (id)setRequestTiming:(long long)arg1;
- (id)setType:(long long)arg1;
- (id)setChecksum:(id)arg1;
- (id)setSignature:(id)arg1;
- (id)setUrl:(id)arg1;
- (id)setIdentifier:(id)arg1;
- (id)build;

@end

