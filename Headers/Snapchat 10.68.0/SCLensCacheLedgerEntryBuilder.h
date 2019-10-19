//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, SCLensCacheMetadata;

@interface SCLensCacheLedgerEntryBuilder : NSObject
{
    SCLensCacheMetadata *_metadata;
    NSDate *_contentModificationDate;
    NSDate *_contentLastAccessDate;
    NSDate *_contentLastUseDate;
    long long _accessCount;
    NSString *_ledgerKey;
    NSString *_storageMethod;
    unsigned long long _sizeInBytes;
}

+ (id)withLensCacheLedgerEntry:(id)arg1;
- (void).cxx_destruct;
- (id)setSizeInBytes:(unsigned long long)arg1;
- (id)setStorageMethod:(id)arg1;
- (id)setLedgerKey:(id)arg1;
- (id)setAccessCount:(long long)arg1;
- (id)setContentLastUseDate:(id)arg1;
- (id)setContentLastAccessDate:(id)arg1;
- (id)setContentModificationDate:(id)arg1;
- (id)setMetadata:(id)arg1;
- (id)build;

@end

