//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, NSArray, NSDictionary;

@interface ASTContactStore : NSObject
{
    NSArray *_contactNames;
    NSDictionary *_relationships;
    CNContactStore *_store;
}

+ (id)defaultStore;
- (void).cxx_destruct;
@property(retain, nonatomic) CNContactStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) NSDictionary *relationships; // @synthesize relationships=_relationships;
@property(readonly, nonatomic) NSArray *contactNames; // @synthesize contactNames=_contactNames;
- (void)loadDefaultContainerContacts;
- (id)defaultContainerContactsArrayWithKeysToFetch:(id)arg1;
- (id)contactsWithName:(id)arg1;
- (id)init;

@end

