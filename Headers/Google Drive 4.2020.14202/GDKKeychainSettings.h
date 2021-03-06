//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GDKKeychainSettings : NSObject
{
    NSString *_userID;
}

@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)getAppIdentifierPrefix;
- (id)sharedAccessGroup;
- (id)baseKeychainQueryForItemService:(id)arg1;
- (_Bool)clearDataForService:(id)arg1;
- (_Bool)setData:(id)arg1 forService:(id)arg2;
- (id)dataForService:(id)arg1;
- (_Bool)clearIntegerForService:(id)arg1;
- (_Bool)setInteger:(unsigned long long)arg1 forService:(id)arg2;
- (unsigned long long)integerForService:(id)arg1;
- (_Bool)clearStringForService:(id)arg1;
- (_Bool)setString:(id)arg1 forService:(id)arg2;
- (id)stringForService:(id)arg1;
- (void)deleteAllKeychainSettings;
- (id)initWithUserID:(id)arg1;

@end

