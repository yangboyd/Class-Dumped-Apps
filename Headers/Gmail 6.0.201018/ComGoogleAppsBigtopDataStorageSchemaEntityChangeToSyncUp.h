//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataEntitiesEntitiesInternalProto_EntityChange, JavaLangLong, NSString;

@interface ComGoogleAppsBigtopDataStorageSchemaEntityChangeToSyncUp : NSObject
{
    JavaLangLong *id__;
    long long changeId_;
    ComGoogleAppsBigtopDataEntitiesEntitiesInternalProto_EntityChange *changeProto_;
    NSString *entityType_;
    NSString *entityServerPermId_;
}

- (void)dealloc;
- (id)getEntityServerPermId;
- (id)getEntityType;
- (id)getChangeProto;
- (long long)getChangeId;
- (id)getId;

@end

