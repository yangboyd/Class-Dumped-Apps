//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface MetricsStoredData : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic) _Bool isSending; // @dynamic isSending;
@property(nonatomic, copy) NSString *p_msgUUID; // @dynamic p_msgUUID;
@property(nonatomic, copy) NSString *p_processId; // @dynamic p_processId;
@property(nonatomic) short retries; // @dynamic retries;
@property(nonatomic) long long timeGeneratedMs; // @dynamic timeGeneratedMs;
@property(nonatomic) _Bool wasGeneratedOffline; // @dynamic wasGeneratedOffline;

@end

