//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABSStoreMeta.h"

#import "ABSStoreAsset-Protocol.h"

@class ABSStoreAssetSettings, NSString, NSURL;

@interface ABSURLStoreAsset : ABSStoreMeta <ABSStoreAsset>
{
    ABSStoreAssetSettings *_settings;
    NSURL *_url;
}

+ (id)assetWithPath:(id)arg1 settings:(id)arg2;
+ (id)assetWithURL:(id)arg1 settings:(id)arg2;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) ABSStoreAssetSettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToURLStoreAsset:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)discard;
- (id)pathByName:(id)arg1;
- (id)nameAtIndex:(unsigned long long)arg1;
- (id)pathAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSString *relativePath;
@property(readonly, nonatomic) _Bool isAvailable;
- (id)initWithURL:(id)arg1 settings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

