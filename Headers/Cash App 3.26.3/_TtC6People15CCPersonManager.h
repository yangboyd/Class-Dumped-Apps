//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface _TtC6People15CCPersonManager : NSObject
{
    // Error parsing type: , name: logger
    // Error parsing type: , name: shouldPersistPeople
    // Error parsing type: , name: batchUpdateState
    // Error parsing type: , name: autocompletionItems
    // Error parsing type: , name: customerIDToPersonMap
    // Error parsing type: , name: people
    // Error parsing type: , name: threadedCustomerIDToChildMerchantsMap
    // Error parsing type: , name: persistingQueue
    // Error parsing type: , name: sortingQueue
    // Error parsing type: , name: observersHash
}

- (void).cxx_destruct;
- (void)testing_removeAllPeople;
- (void)removePeopleOriginatingFromAddressBook;
- (void)replacePeopleWithAliases:(id)arg1 withUpdatedPeopleFromSyncedContacts:(id)arg2;
- (void)addPeople:(id)arg1;
- (id)uniqueAutocompletionItemsForSearchTermsInString:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)personWithCustomerID:(id)arg1;
- (id)personWithPBCustomer:(id)arg1;
- (void)endBatchCustomerUpdate;
- (void)beginBatchCustomerUpdate;
- (void)executeBatchCustomerUpdateBlock:(CDUnknownBlockType)arg1;
- (id)init;
@property(nonatomic, readonly) NSSet *allPeople;

@end

