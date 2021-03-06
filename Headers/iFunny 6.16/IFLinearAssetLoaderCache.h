//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFLinearAssetLoaderCacheProtocol-Protocol.h>

@class NSMutableDictionary;

@interface IFLinearAssetLoaderCache : NSObject <IFLinearAssetLoaderCacheProtocol>
{
    NSMutableDictionary *_downloadedData;
}

+ (id)cacheFolderPath;
+ (id)cachePathForURL:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *downloadedData; // @synthesize downloadedData=_downloadedData;
- (id)subdataForURL:(id)arg1 withRange:(struct _NSRange)arg2;
- (unsigned long long)lengthForURL:(id)arg1;
- (id)downloadedDataForURL:(id)arg1;
- (id)cachePathForURL:(id)arg1;
- (_Bool)clearCacheForURL:(id)arg1;
- (id)dataForURL:(id)arg1;
- (_Bool)appendData:(id)arg1 forURL:(id)arg2;
- (void)invalidateCacheIfNeeded;
- (void)memoryWarning:(id)arg1;
- (void)bindMemoryWarning;
- (void)resetDownloadedData;

@end

