//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Core/WAContactsSearchContactsLoader-Protocol.h>

@class NSArray, NSSet, NSString, WAChatStorage, WAContactsStorage;
@protocol WAContactsSearchContactsLoaderDelegate;

@interface WAContactsSearchChatStorageContactsLoader : NSObject <WAContactsSearchContactsLoader>
{
    WAChatStorage *_chatStorage;
    WAContactsStorage *_contactsStorage;
    _Bool _includesPushNameContacts;
    _Bool _includeSelf;
    NSArray *_contactsToSearch;
    NSSet *_unknownContactJIDs;
    id <WAContactsSearchContactsLoaderDelegate> _delegate;
}

+ (id)arrayByAddingUnknownContactsWithPushNames:(id)arg1 toArray:(id)arg2;
+ (id)sortedContactArrayFor:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WAContactsSearchContactsLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)loadContacts;
- (void)resetContacts;
- (id)unknownContactJIDs;
- (id)contactsToSearch;
- (id)initWithChatStorage:(id)arg1 contactsStorage:(id)arg2 includesPushNameContacts:(_Bool)arg3 includeSelf:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

