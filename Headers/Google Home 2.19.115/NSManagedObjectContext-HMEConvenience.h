//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObjectContext.h>

@interface NSManagedObjectContext (HMEConvenience)
- (_Bool)hme_deleteAllObjects:(id *)arg1;
- (unsigned long long)hme_countObjects:(id)arg1 error:(id *)arg2;
- (id)hme_fetchObjects:(id)arg1 error:(id *)arg2;
- (_Bool)hme_saveToPersistentStore:(id *)arg1;
@end

