//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSArray, NSString;

@interface SCFideliusFriendMetadataChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    NSString *_userId;
    NSArray *_devices;
}

+ (id)deletionRequestForFideliusFriendMetadata:(id)arg1;
+ (id)changeRequestForFideliusFriendMetadata:(id)arg1;
+ (id)creationRequestWithFideliusFriendMetadata:(id)arg1;
@property(copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;
- (id)_fideliusFriendMetadata;
- (id)initWithRowid:(long long)arg1 userId:(id)arg2 devices:(id)arg3;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
- (const char *)table;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

