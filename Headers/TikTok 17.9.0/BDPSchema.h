//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSError, NSString, NSURL;

@interface BDPSchema : NSObject <NSCopying>
{
    NSString *_schemaVersion;
    NSURL *_originURL;
    NSDictionary *_originQueryParams;
    NSString *_protocol;
    NSString *_host;
    NSString *_fullHost;
    NSString *_appID;
    NSString *_token;
    NSDictionary *_meta;
    NSString *_url;
    NSDictionary *_urlDictionary;
    NSString *_ttid;
    NSString *_launchFrom;
    NSString *_originEntrance;
    long long _techType;
    NSString *_scene;
    NSString *_subScene;
    NSString *_startPage;
    NSString *_startPagePath;
    NSString *_startPageQuery;
    NSDictionary *_startPageQueryDictionary;
    NSString *_query;
    NSDictionary *_queryDictionary;
    NSString *_extra;
    NSString *_bdpLog;
    NSDictionary *_refererInfoDictionary;
    NSString *_shareTicket;
    NSString *_snapshotCompileVersion;
    NSString *_sourceMD5;
    NSString *_timelineServerUrl;
    NSDictionary *_schemaCodecTrackInfo;
    NSString *_toolbarStyle;
    NSString *_gdExt;
    NSDictionary *_gdExtDictionary;
    NSError *_error;
    NSString *_versionType;
    NSDictionary *_extraDictionary;
    NSDictionary *_bdpLogDictionary;
}

@property(copy, nonatomic) NSDictionary *bdpLogDictionary; // @synthesize bdpLogDictionary=_bdpLogDictionary;
@property(copy, nonatomic) NSDictionary *extraDictionary; // @synthesize extraDictionary=_extraDictionary;
@property(copy, nonatomic) NSString *versionType; // @synthesize versionType=_versionType;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSDictionary *gdExtDictionary; // @synthesize gdExtDictionary=_gdExtDictionary;
@property(copy, nonatomic) NSString *gdExt; // @synthesize gdExt=_gdExt;
@property(copy, nonatomic) NSString *toolbarStyle; // @synthesize toolbarStyle=_toolbarStyle;
@property(retain, nonatomic) NSDictionary *schemaCodecTrackInfo; // @synthesize schemaCodecTrackInfo=_schemaCodecTrackInfo;
@property(copy, nonatomic) NSString *timelineServerUrl; // @synthesize timelineServerUrl=_timelineServerUrl;
@property(copy, nonatomic) NSString *sourceMD5; // @synthesize sourceMD5=_sourceMD5;
@property(copy, nonatomic) NSString *snapshotCompileVersion; // @synthesize snapshotCompileVersion=_snapshotCompileVersion;
@property(copy, nonatomic) NSString *shareTicket; // @synthesize shareTicket=_shareTicket;
@property(copy, nonatomic) NSDictionary *refererInfoDictionary; // @synthesize refererInfoDictionary=_refererInfoDictionary;
@property(copy, nonatomic) NSString *bdpLog; // @synthesize bdpLog=_bdpLog;
@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(copy, nonatomic) NSDictionary *queryDictionary; // @synthesize queryDictionary=_queryDictionary;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSDictionary *startPageQueryDictionary; // @synthesize startPageQueryDictionary=_startPageQueryDictionary;
@property(copy, nonatomic) NSString *startPageQuery; // @synthesize startPageQuery=_startPageQuery;
@property(copy, nonatomic) NSString *startPagePath; // @synthesize startPagePath=_startPagePath;
@property(copy, nonatomic) NSString *startPage; // @synthesize startPage=_startPage;
@property(copy, nonatomic) NSString *subScene; // @synthesize subScene=_subScene;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(nonatomic) long long techType; // @synthesize techType=_techType;
@property(copy, nonatomic) NSString *originEntrance; // @synthesize originEntrance=_originEntrance;
@property(copy, nonatomic) NSString *launchFrom; // @synthesize launchFrom=_launchFrom;
@property(copy, nonatomic) NSString *ttid; // @synthesize ttid=_ttid;
@property(copy, nonatomic) NSDictionary *urlDictionary; // @synthesize urlDictionary=_urlDictionary;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSDictionary *meta; // @synthesize meta=_meta;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *fullHost; // @synthesize fullHost=_fullHost;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(copy, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(copy, nonatomic) NSDictionary *originQueryParams; // @synthesize originQueryParams=_originQueryParams;
@property(copy, nonatomic) NSURL *originURL; // @synthesize originURL=_originURL;
@property(copy, nonatomic) NSString *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
- (void).cxx_destruct;
- (id)launchType;
- (id)groupId;
- (id)description;
- (id)toDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryValueFromExtraForKey:(id)arg1;
- (id)arrayValueFromExtraForKey:(id)arg1;
- (id)stringValueFromExtraForKey:(id)arg1;
@property(readonly, nonatomic) NSString *bizLocation;
@property(readonly, nonatomic) NSString *location;
@property(readonly, nonatomic) NSString *iconURL;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) long long appType;
@property(readonly, nonatomic) long long schemaType;
- (void)updateRefererInfoDictionary:(id)arg1;
- (void)updateLaunchFrom:(id)arg1;
- (void)updateScene:(id)arg1;
- (void)updateStartPage:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;
- (void)validWithCompletion:(CDUnknownBlockType)arg1;

@end

