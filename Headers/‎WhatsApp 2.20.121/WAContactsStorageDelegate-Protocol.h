//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, WAContactsStorage;

@protocol WAContactsStorageDelegate
- (void)contactsStorage:(WAContactsStorage *)arg1 didModifyContacts:(NSDictionary *)arg2 removeMissingJIDs:(_Bool)arg3;
- (void)contactsStorageDidUpdateStatus:(WAContactsStorage *)arg1;
- (void)contactsStorageDidUpdateContacts:(WAContactsStorage *)arg1;
@end

