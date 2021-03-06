//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface AWEVideoUploadSpeedModel : MTLModel <MTLJSONSerializing>
{
    _Bool _enableSpeed;
    _Bool _enableRoute;
    long long _routeMode;
    long long _routeWeight;
    long long _speedThreshold;
    long long _fileSize;
    long long _retryCount;
    long long _cacheExpired;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long cacheExpired; // @synthesize cacheExpired=_cacheExpired;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) long long speedThreshold; // @synthesize speedThreshold=_speedThreshold;
@property(nonatomic) long long routeWeight; // @synthesize routeWeight=_routeWeight;
@property(nonatomic) long long routeMode; // @synthesize routeMode=_routeMode;
@property(nonatomic) _Bool enableRoute; // @synthesize enableRoute=_enableRoute;
@property(nonatomic) _Bool enableSpeed; // @synthesize enableSpeed=_enableSpeed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

