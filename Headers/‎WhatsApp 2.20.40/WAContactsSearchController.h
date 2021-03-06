//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Core/WAContactsSearchContactsLoaderDelegate-Protocol.h>

@class NSArray, NSString, WAContactSearchHelper, WAContactsStorage;
@protocol WAContactsSearchContactsLoader, WAContactsSearchControllerDelegate;

@interface WAContactsSearchController : NSObject <WAContactsSearchContactsLoaderDelegate>
{
    WAContactSearchHelper *_contactSearchHelper;
    WAContactsStorage *_contactsStorage;
    id <WAContactsSearchContactsLoader> _contactsLoader;
    id <WAContactsSearchControllerDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <WAContactsSearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <WAContactsSearchContactsLoader> contactsLoader; // @synthesize contactsLoader=_contactsLoader;
- (void).cxx_destruct;
- (void)searchContactsMatchingText:(id)arg1 ordered:(_Bool)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)contactsMatchingContactIdentifiers:(id)arg1;
- (id)orderedContactsMatchingJIDs:(id)arg1;
- (id)contactsMatchingJIDs:(id)arg1;
- (void)contactsSearchContactLoaderDidInvalidateSearchResults:(id)arg1;
- (void)invalidateSearchResults;
- (id)contactSearchHelper;
- (void)resetContacts;
@property(readonly, nonatomic) NSArray *contactsToSearch;
- (id)initWithContactsStorage:(id)arg1 contactsLoader:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

