//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/RKResponseMapperOperation.h>

@class NSManagedObjectContext, NSManagedObjectID, NSOperationQueue;
@protocol RKManagedObjectCaching;

@interface RKManagedObjectResponseMapperOperation : RKResponseMapperOperation
{
    NSManagedObjectContext *_managedObjectContext;
    id <RKManagedObjectCaching> _managedObjectCache;
    NSManagedObjectID *_targetObjectID;
    NSOperationQueue *_operationQueue;
}

+ (void)registerMappingOperationDataSourceClass:(Class)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(copy, nonatomic) NSManagedObjectID *targetObjectID; // @synthesize targetObjectID=_targetObjectID;
@property(nonatomic) __weak id <RKManagedObjectCaching> managedObjectCache; // @synthesize managedObjectCache=_managedObjectCache;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (id)performMappingWithObject:(id)arg1 error:(id *)arg2;
- (void)cancel;

@end

