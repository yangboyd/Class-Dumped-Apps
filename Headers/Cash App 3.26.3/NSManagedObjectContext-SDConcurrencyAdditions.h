//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObjectContext.h>

@interface NSManagedObjectContext (SDConcurrencyAdditions)
- (id)SD_performBlockReturningValueAndWait:(CDUnknownBlockType)arg1;
- (Class)classForEntityNamed:(id)arg1;
- (id)entityWithName:(id)arg1;
- (unsigned long long)countForObjectsOfClass:(Class)arg1;
- (id)fetchObjectsOfClass:(Class)arg1 withPredicate:(id)arg2;
- (id)fetchObjectsOfClass:(Class)arg1 withPredicateFormat:(id)arg2;
- (id)fetchAllObjectsOfClass:(Class)arg1;
- (id)fetchAllObjectsForEntity:(id)arg1;
- (id)existingObjectsWithManagedObjectIDs:(id)arg1;
- (id)objectWithURIRepresentation:(id)arg1;
- (id)existingObjectWithURIRepresentation:(id)arg1;
- (void)propagateDeletionsToRelationshipsOnDeletedObjects;
- (void)deleteObjectAndPropagate:(id)arg1;
- (void)deleteObjectsInFetchRequest:(id)arg1;
- (void)deleteObjects:(id)arg1;
- (void)deleteAllObjectsForEntity:(id)arg1 includeSubentities:(_Bool)arg2;
- (void)deleteAllObjects;
@end

