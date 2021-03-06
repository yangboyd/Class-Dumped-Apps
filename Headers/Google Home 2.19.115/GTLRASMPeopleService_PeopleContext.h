//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRASMPeopleService_AuthDelegationContext, GTLRASMPeopleService_ClientVersion, GTLRASMPeopleService_ConsistencyContext, GTLRASMPeopleService_ConsistencyOptions, GTLRASMPeopleService_MigrationOptions, NSArray, NSString;

@interface GTLRASMPeopleService_PeopleContext : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) NSArray *allowedRequesterState; // @dynamic allowedRequesterState;
@property(retain, nonatomic) GTLRASMPeopleService_AuthDelegationContext *authDelegationContext; // @dynamic authDelegationContext;
@property(copy, nonatomic) NSString *clientType; // @dynamic clientType;
@property(retain, nonatomic) GTLRASMPeopleService_ClientVersion *clientVersion; // @dynamic clientVersion;
@property(retain, nonatomic) GTLRASMPeopleService_ConsistencyContext *consistencyContext; // @dynamic consistencyContext;
@property(retain, nonatomic) GTLRASMPeopleService_ConsistencyOptions *consistencyOptions; // @dynamic consistencyOptions;
@property(retain, nonatomic) GTLRASMPeopleService_MigrationOptions *migrationOptions; // @dynamic migrationOptions;
@property(copy, nonatomic) NSString *requestGroupLoggingId; // @dynamic requestGroupLoggingId;
@property(copy, nonatomic) NSString *rightOfPublicityContext; // @dynamic rightOfPublicityContext;

@end

