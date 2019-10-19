//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface SCCognacAppCatalogBuilder : NSObject
{
    NSArray *_targetedAppArray;
    NSDictionary *_targetedAppDict;
    NSDictionary *_temporaryAppDict;
    NSDictionary *_allAvailableAppDict;
}

+ (id)cognacAppCatalogFromExistingCognacAppCatalog:(id)arg1;
+ (id)cognacAppCatalog;
- (void).cxx_destruct;
- (id)withAllAvailableAppDict:(id)arg1;
- (id)withTemporaryAppDict:(id)arg1;
- (id)withTargetedAppDict:(id)arg1;
- (id)withTargetedAppArray:(id)arg1;
- (id)build;

@end

