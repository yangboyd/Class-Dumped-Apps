//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSService.h"
#import "MSServiceCommon.h"

@class NSString;

@protocol MSServiceInternal <MSService, MSServiceCommon>
+ (NSString *)logTag;
+ (NSString *)serviceName;
+ (id)sharedInstance;
@property(readonly, copy, nonatomic) NSString *groupId;
@property(retain, nonatomic) NSString *appSecret;
@property(readonly, nonatomic) long long initializationPriority;
@end

