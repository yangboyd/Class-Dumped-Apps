//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGAREffectMetadataDownloaderRequestable-Protocol.h>

@class NSString;

@interface _IGAREffectMetadataDownloaderRequest : NSObject <IGAREffectMetadataDownloaderRequestable>
{
    long long _cacheType;
    CDUnknownBlockType _version;
}

@property(readonly, nonatomic) long long cacheType; // @synthesize cacheType=_cacheType;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *version;
- (id)initWithCacheType:(long long)arg1 version:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

