//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleApiMetadataPolicy, ComGoogleApiOrgPolicy, NSString;
@protocol JavaUtilList;

@protocol ComGoogleApiFieldPolicyOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleApiMetadataPolicy *)getMetadataPoliciesWithInt:(int)arg1;
- (id <JavaUtilList>)getMetadataPoliciesList;
- (int)getMetadataPoliciesCount;
- (NSString *)getLocationSelector;
- (_Bool)hasLocationSelector;
- (_Bool)getIsServiceConsumer;
- (_Bool)hasIsServiceConsumer;
- (ComGoogleApiOrgPolicy *)getOrgPoliciesWithInt:(int)arg1;
- (id <JavaUtilList>)getOrgPoliciesList;
- (int)getOrgPoliciesCount;
- (NSString *)getMonitoredResourceLabelExtractor;
- (_Bool)hasMonitoredResourceLabelExtractor;
- (NSString *)getMonitoredResourceType;
- (_Bool)hasMonitoredResourceType;
- (NSString *)getResourceAccessType;
- (_Bool)hasResourceAccessType;
- (NSString *)getAuditing;
- (_Bool)hasAuditing;
- (NSString *)getChildResourceNameExtractor;
- (_Bool)hasChildResourceNameExtractor;
- (NSString *)getChildResourceType;
- (_Bool)hasChildResourceType;
- (NSString *)getResourceType;
- (_Bool)hasResourceType;
- (NSString *)getResourcePermission;
- (_Bool)hasResourcePermission;
- (NSString *)getSelector;
- (_Bool)hasSelector;
@end

