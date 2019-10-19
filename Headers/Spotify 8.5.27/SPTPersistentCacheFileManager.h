//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, SPTPersistentCacheOptions;

@interface SPTPersistentCacheFileManager : NSObject
{
    SPTPersistentCacheOptions *_options;
    CDUnknownBlockType _debugOutput;
    NSFileManager *_fileManager;
}

@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, copy, nonatomic) CDUnknownBlockType debugOutput; // @synthesize debugOutput=_debugOutput;
@property(readonly, copy, nonatomic) SPTPersistentCacheOptions *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (long long)optimizedDiskSizeForCacheSize:(long long)arg1;
@property(readonly, nonatomic) unsigned long long totalUsedSizeInBytes;
- (unsigned long long)getFileSizeAtPath:(id)arg1;
- (void)removeDataForKey:(id)arg1;
- (void)removeAllData;
- (id)pathForKey:(id)arg1;
- (id)subDirectoryPathForKey:(id)arg1;
- (_Bool)createCacheDirectory;
- (id)initWithOptions:(id)arg1;

@end

