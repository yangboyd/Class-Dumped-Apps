//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSSet, NSString;
@protocol FBGraphQLCacheKeySerializer;

@interface FBGraphQLQuery : NSObject
{
    const char *_exportedFieldName;
    NSMutableDictionary *_parameters;
    NSDictionary *_rawDataToUpload;
    NSString *_ossPersistID;
    NSString *_queryText;
    unsigned long long _operationType;
    unsigned long long _nameHash;
    shared_ptr_b4f13e85 _overridingTreeShape;
    NSMutableDictionary *_refParameterNameToExportedFieldMap;
    NSSet *_parametersUsingServerSidePersistedDefaultValue;
    NSDictionary *_paramsToIndexMap;
    const char *_liveConfigId;
    vector_4d90292b _connectionConfigs;
    _Bool _requireLegacyResponse;
    _Bool _sendUsingPOST;
    _Bool _DO_NOT_USE_enableFullConsistency;
    unsigned long long _hackType;
    NSString *_queryName;
    NSString *_queryLabel;
    long long _priority;
    id <FBGraphQLCacheKeySerializer> _cacheKeySerializer;
    unsigned long long _uniqueUFTRequestId;
    long long _uftDelayInSeconds;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) long long uftDelayInSeconds; // @synthesize uftDelayInSeconds=_uftDelayInSeconds;
@property(nonatomic) unsigned long long uniqueUFTRequestId; // @synthesize uniqueUFTRequestId=_uniqueUFTRequestId;
@property(retain, nonatomic) id <FBGraphQLCacheKeySerializer> cacheKeySerializer; // @synthesize cacheKeySerializer=_cacheKeySerializer;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *queryLabel; // @synthesize queryLabel=_queryLabel;
@property(copy, nonatomic) NSString *queryName; // @synthesize queryName=_queryName;
@property(nonatomic) _Bool DO_NOT_USE_enableFullConsistency; // @synthesize DO_NOT_USE_enableFullConsistency=_DO_NOT_USE_enableFullConsistency;
@property(nonatomic) unsigned long long hackType; // @synthesize hackType=_hackType;
@property(nonatomic) _Bool sendUsingPOST; // @synthesize sendUsingPOST=_sendUsingPOST;
- (void)setQueryMetadata:(unsigned long long)arg1;
- (id)initWithParameters:(id)arg1 parameterNamesWithServerDefaultValues:(id)arg2 initInfo:(const struct FBGraphQLQueryCodegenInitInfo *)arg3;
- (void)setOSSPersistID:(id)arg1;
- (void)setExportedFieldName:(const char *)arg1;
- (id)initWithQueryName:(id)arg1 operationType:(unsigned long long)arg2 nameHash:(unsigned long long)arg3 queryLabel:(id)arg4 parameters:(id)arg5;
- (void)addRefParameterWithName:(id)arg1 exportedField:(id)arg2;
- (void)addParameterWithName:(id)arg1 value:(id)arg2;
- (id)parametersForURLRequestExcludingKeys:(id)arg1;
- (id)parametersWithNameMappedToIndex:(id)arg1;
- (id)namedParameterToIndex:(id)arg1;
- (void)setRawDataToUpload:(id)arg1;
- (id)rawDataToUpload;
- (id)refParameterNameToExportedFieldMap;
- (const vector_4d90292b *)connectionConfigs;
- (const char *)liveConfigId;
- (id)parameters;
- (unsigned long long)operationType;
- (unsigned long long)nameHash;
- (shared_ptr_034bbad2)canonicalParameters;
- (shared_ptr_1a9caf36)treeShapeField;
- (shared_ptr_b4f13e85)treeShapeResolver;
- (id)queryText;
- (id)ossPersistID;
- (id)description;
- (id)exportedFieldWithFallbackBehavior:(unsigned long long)arg1;
- (id)debugDescription;
- (id)init;
- (void)setOverridingTreeShape:(shared_ptr_b4f13e85)arg1;
@property(readonly, copy, nonatomic) NSString *callName; // @dynamic callName;

@end

