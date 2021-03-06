//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BDPUniqueID, NSArray, NSString;

@protocol BDPAppMetaBriefProtocol <NSObject>
- (NSString *)onDemandResourcesTag;
- (NSString *)innerResMd5;
- (NSArray *)innerResURLs;
- (_Bool)isInnerModel;
- (_Bool)canDownloadBr;
- (long long)type;
- (BDPUniqueID *)uniqueID;
- (_Bool)isDebugMode;
- (NSString *)md5;
- (NSArray *)urls;
- (NSString *)versionType;
- (long long)version_code;
- (NSString *)version;
- (NSString *)pkgName;
- (NSString *)appId;
@end

