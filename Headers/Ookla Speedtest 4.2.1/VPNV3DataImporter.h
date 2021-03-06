//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface VPNV3DataImporter : NSObject
{
    NSDictionary *_accountMapper;
    NSDictionary *_protocolTypeMapper;
    NSDictionary *_serverMapper;
    NSDictionary *_usageMapper;
    NSDictionary *_planMapper;
    NSDictionary *_bucketMapper;
    NSMutableDictionary *_countries;
    NSMutableDictionary *_cities;
    NSMutableDictionary *_servers;
    NSMutableDictionary *_protocolTypes;
    NSMutableDictionary *_serverProtocols;
}

@property(retain) NSMutableDictionary *serverProtocols; // @synthesize serverProtocols=_serverProtocols;
@property(retain) NSMutableDictionary *protocolTypes; // @synthesize protocolTypes=_protocolTypes;
@property(retain) NSMutableDictionary *servers; // @synthesize servers=_servers;
@property(retain) NSMutableDictionary *cities; // @synthesize cities=_cities;
@property(retain) NSMutableDictionary *countries; // @synthesize countries=_countries;
@property(retain) NSDictionary *bucketMapper; // @synthesize bucketMapper=_bucketMapper;
@property(retain) NSDictionary *planMapper; // @synthesize planMapper=_planMapper;
@property(retain) NSDictionary *usageMapper; // @synthesize usageMapper=_usageMapper;
@property(retain) NSDictionary *serverMapper; // @synthesize serverMapper=_serverMapper;
@property(retain) NSDictionary *protocolTypeMapper; // @synthesize protocolTypeMapper=_protocolTypeMapper;
@property(retain) NSDictionary *accountMapper; // @synthesize accountMapper=_accountMapper;
- (void).cxx_destruct;
- (id)stringToNumber:(id)arg1 withAttributeDescription:(id)arg2;
- (id)convertValue:(id)arg1 withAttributeDescription:(id)arg2;
- (_Bool)mapObject:(id)arg1 toValues:(id)arg2 withMapper:(id)arg3;
- (_Bool)mapManagedObject:(id)arg1 toValues:(id)arg2 withMapper:(id)arg3;
- (id)execute:(id)arg1 withContext:(id)arg2;
- (id)findEntities:(id)arg1 withPredicate:(id)arg2 indexedBy:(id)arg3 withContext:(id)arg4;
- (id)findAllEntities:(id)arg1 indexedBy:(id)arg2 withContext:(id)arg3;
- (void)deleteCountriesWithNoServersInContext:(id)arg1;
- (void)deleteCitiesWithNoServersInContext:(id)arg1;
- (void)deleteServersOlderThan:(id)arg1 inContext:(id)arg2;
- (void)importProtocols:(id)arg1 withServer:(id)arg2 andContext:(id)arg3;
- (id)importServer:(id)arg1 withDict:(id)arg2 city:(id)arg3 country:(id)arg4 andContext:(id)arg5;
- (id)importServers:(id)arg1 andContext:(id)arg2;
- (id)importProtocols:(id)arg1 andContext:(id)arg2;
- (id)importBuckets:(id)arg1;
- (id)importPlans:(id)arg1;
- (id)importUsage:(id)arg1;
- (id)convertTimestampToDate:(id)arg1;
- (id)importLogin:(id)arg1 withUser:(id)arg2 andContext:(id)arg3;
- (id)init;

@end

