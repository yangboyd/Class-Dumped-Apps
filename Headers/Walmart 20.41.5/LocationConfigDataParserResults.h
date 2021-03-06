//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ATRSite, NSArray, NSDictionary, NSString;

@interface LocationConfigDataParserResults : NSObject
{
    _Bool _isConfigured;
    ATRSite *_site;
    NSString *_lightMaps;
    NSDictionary *_buildingsLookupById;
    NSDictionary *_floorsLookupByFloorId;
    NSDictionary *_floorsLookupByFloorspaceId;
    NSDictionary *_floorspaceLookupByFloorspaceId;
    NSArray *_floorspacesConfigData;
    NSDictionary *_configData;
    NSDictionary *_actionZones;
    NSString *_networkAnalystUrl;
    NSString *_proximityUUID;
}

@property _Bool isConfigured; // @synthesize isConfigured=_isConfigured;
@property(retain) NSString *proximityUUID; // @synthesize proximityUUID=_proximityUUID;
@property(retain) NSString *networkAnalystUrl; // @synthesize networkAnalystUrl=_networkAnalystUrl;
@property(retain) NSDictionary *actionZones; // @synthesize actionZones=_actionZones;
@property(retain) NSDictionary *configData; // @synthesize configData=_configData;
@property(retain) NSArray *floorspacesConfigData; // @synthesize floorspacesConfigData=_floorspacesConfigData;
@property(retain) NSDictionary *floorspaceLookupByFloorspaceId; // @synthesize floorspaceLookupByFloorspaceId=_floorspaceLookupByFloorspaceId;
@property(retain) NSDictionary *floorsLookupByFloorspaceId; // @synthesize floorsLookupByFloorspaceId=_floorsLookupByFloorspaceId;
@property(retain) NSDictionary *floorsLookupByFloorId; // @synthesize floorsLookupByFloorId=_floorsLookupByFloorId;
@property(retain) NSDictionary *buildingsLookupById; // @synthesize buildingsLookupById=_buildingsLookupById;
@property(retain) NSString *lightMaps; // @synthesize lightMaps=_lightMaps;
@property(retain) ATRSite *site; // @synthesize site=_site;
- (void).cxx_destruct;
- (id)getSiteSWCoordinates;
- (id)getSiteNECoordinates;
- (id)getMobileSiteOptions;
- (id)getFloorByFloorId:(int)arg1;
- (id)getFloorByFloorspace:(int)arg1;
- (id)getFloorspaceByFloorspaceId:(int)arg1;
- (id)getCurrentFloorspaceByName:(id)arg1;
- (id)getFirstFloorspace;
- (id)getFloorspaceByFloorspaceName:(id)arg1;
- (id)getSiteName;
- (int)getSiteId;

@end

