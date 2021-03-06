//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BDPAppMetaBriefProtocol-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class BDPUniqueID, NSArray, NSDictionary, NSString;

@interface BDPModel : NSObject <NSCoding, NSCopying, BDPAppMetaBriefProtocol>
{
    _Bool _openLoc;
    _Bool _canDownloadBr;
    _Bool _isInnerModel;
    BDPUniqueID *_uniqueID;
    NSString *_ID;
    NSString *_name;
    long long _type;
    NSString *_pkgName;
    NSString *_icon;
    unsigned long long _state;
    unsigned long long _versionState;
    long long _orientation;
    NSString *_ttid;
    NSArray *_authList;
    NSArray *_blockList;
    NSArray *_pigeonList;
    NSString *_summary;
    unsigned long long _shareLevel;
    NSString *_version;
    NSString *_latestVersion;
    long long _version_code;
    long long _leastVersionCode;
    NSArray *_urls;
    NSString *_schema;
    NSString *_md5;
    NSDictionary *_domainsAuthDict;
    NSArray *_adModels;
    NSString *_minJSsdkVersion;
    NSDictionary *_extraDict;
    NSString *_webURL;
    NSString *_libraURL;
    NSString *_versionType;
    NSString *_privacyPolicy;
    NSDictionary *_extJSON;
    NSArray *_innerResURLs;
    NSString *_innerResMd5;
    NSString *_onDemandResourcesTag;
    long long _needUpdateSettingsFlag;
    long long _adSiteVersion;
    long long _switchBitmap;
}

+ (id)defaultVersionType;
+ (void)bootstrapLoad;
@property(nonatomic) long long switchBitmap; // @synthesize switchBitmap=_switchBitmap;
@property(nonatomic) long long adSiteVersion; // @synthesize adSiteVersion=_adSiteVersion;
@property(nonatomic) long long needUpdateSettingsFlag; // @synthesize needUpdateSettingsFlag=_needUpdateSettingsFlag;
@property(copy, nonatomic) NSString *onDemandResourcesTag; // @synthesize onDemandResourcesTag=_onDemandResourcesTag;
@property(copy, nonatomic) NSString *innerResMd5; // @synthesize innerResMd5=_innerResMd5;
@property(copy, nonatomic) NSArray *innerResURLs; // @synthesize innerResURLs=_innerResURLs;
@property(nonatomic) _Bool isInnerModel; // @synthesize isInnerModel=_isInnerModel;
@property(nonatomic) _Bool canDownloadBr; // @synthesize canDownloadBr=_canDownloadBr;
@property(nonatomic) _Bool openLoc; // @synthesize openLoc=_openLoc;
@property(copy, nonatomic) NSDictionary *extJSON; // @synthesize extJSON=_extJSON;
@property(copy, nonatomic) NSString *privacyPolicy; // @synthesize privacyPolicy=_privacyPolicy;
@property(copy, nonatomic) NSString *versionType; // @synthesize versionType=_versionType;
@property(copy, nonatomic) NSString *libraURL; // @synthesize libraURL=_libraURL;
@property(copy, nonatomic) NSString *webURL; // @synthesize webURL=_webURL;
@property(copy, nonatomic) NSDictionary *extraDict; // @synthesize extraDict=_extraDict;
@property(copy, nonatomic) NSString *minJSsdkVersion; // @synthesize minJSsdkVersion=_minJSsdkVersion;
@property(copy, nonatomic) NSArray *adModels; // @synthesize adModels=_adModels;
@property(copy, nonatomic) NSDictionary *domainsAuthDict; // @synthesize domainsAuthDict=_domainsAuthDict;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(copy, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(nonatomic) long long leastVersionCode; // @synthesize leastVersionCode=_leastVersionCode;
@property(nonatomic) long long version_code; // @synthesize version_code=_version_code;
@property(copy, nonatomic) NSString *latestVersion; // @synthesize latestVersion=_latestVersion;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) unsigned long long shareLevel; // @synthesize shareLevel=_shareLevel;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSArray *pigeonList; // @synthesize pigeonList=_pigeonList;
@property(copy, nonatomic) NSArray *blockList; // @synthesize blockList=_blockList;
@property(copy, nonatomic) NSArray *authList; // @synthesize authList=_authList;
@property(copy, nonatomic) NSString *ttid; // @synthesize ttid=_ttid;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) unsigned long long versionState; // @synthesize versionState=_versionState;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *pkgName; // @synthesize pkgName=_pkgName;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(retain, nonatomic) BDPUniqueID *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void).cxx_destruct;
- (long long)fixType;
- (id)getAdModelsFromOriginAdInfos:(id)arg1;
- (id)fullVersionDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAppIdUnsafe:(id)arg1;
- (_Bool)getSwitchBoolValue:(long long)arg1;
- (void)mergeNewestInfoFromModel:(id)arg1;
- (_Bool)isNewerThanAppModel:(id)arg1;
- (id)urlFromStrings:(id)arg1;
- (id)appId;
@property(readonly, nonatomic, getter=isOffline) _Bool offline;
@property(readonly, nonatomic, getter=isDebugMode) _Bool debugMode;
@property(readonly, nonatomic, getter=isReleaseCandidateMode) _Bool releaseCandidateMode;
- (id)initWithDictionary:(id)arg1 withKey:(id)arg2 vec:(id)arg3;
- (id)adContainer_privacyPolicy;
- (_Bool)isAdContainer;
@property(nonatomic) long long bdp_savedTimestamp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

