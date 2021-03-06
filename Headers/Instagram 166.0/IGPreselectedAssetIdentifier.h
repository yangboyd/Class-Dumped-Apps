//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class NSString, NSURL;

@interface IGPreselectedAssetIdentifier : NSObject <NSCoding>
{
    NSURL *_assetURL;
    NSString *_localIdentifier;
    NSURL *_identifierURL;
    long long _assetType;
}

+ (id)preselectedIdentifierWithURL:(id)arg1 assetType:(long long)arg2;
+ (id)preselectedIdentifierWithAssetIdentifier:(id)arg1 assetType:(long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long assetType; // @synthesize assetType=_assetType;
@property(readonly, nonatomic) NSURL *identifierURL; // @synthesize identifierURL=_identifierURL;
@property(readonly, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(readonly, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithAssetURL:(id)arg1 localIdentifier:(id)arg2 identifierURL:(id)arg3 assetType:(long long)arg4;

@end

