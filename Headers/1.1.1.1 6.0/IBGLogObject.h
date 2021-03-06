//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <Instabug/IBGDictionaryProtocol-Protocol.h>

@class NSDate, NSString;

@interface IBGLogObject : NSManagedObject <IBGDictionaryProtocol>
{
}

+ (id)entityName;
+ (id)logsFetchRequestWithMaxCount:(unsigned long long)arg1 sessionId:(id)arg2;
+ (id)jsonStringFrom:(id)arg1 logLevel:(id)arg2 date:(id)arg3;
+ (id)dictionaryFrom:(id)arg1 logLevel:(id)arg2 date:(id)arg3;
+ (id)fetchRequestWithSessionIdNotExistIn:(id)arg1;
+ (id)fetchRequestWithSessionId:(id)arg1;
+ (id)fetchRequest;
@property(readonly, copy) NSString *description;
- (id)toDictionary;

// Remaining properties
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *level; // @dynamic level;
@property(copy, nonatomic) NSString *message; // @dynamic message;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(readonly) Class superclass;

@end

