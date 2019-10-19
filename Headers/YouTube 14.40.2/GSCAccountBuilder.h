//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface GSCAccountBuilder : NSObject
{
    NSMutableDictionary *_mutableAttributes;
    NSMutableDictionary *_mutableTransientAttributes;
    id <GSCAccountId> _accountId;
    NSString *_displayName;
}

@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) id <GSCAccountId> accountId; // @synthesize accountId=_accountId;
- (void).cxx_destruct;
- (id)initWithAccountBuilder:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccountId:(id)arg1 displayName:(id)arg2 attributes:(id)arg3;
- (id)initWithAccountId:(id)arg1 displayName:(id)arg2;
- (id)initWithAccountId:(id)arg1;
- (id)init;
- (void)removeTransientAttributeForKey:(id)arg1;
- (void)setTransientAttribute:(id)arg1 forKey:(id)arg2;
@property(copy, nonatomic) NSDictionary *transientAttributes;
- (void)removeAttributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
@property(copy, nonatomic) NSDictionary *attributes;
- (id)build;
- (id)initWithAccountId:(id)arg1 displayName:(id)arg2 attributes:(id)arg3 transientAttributes:(id)arg4;

@end

