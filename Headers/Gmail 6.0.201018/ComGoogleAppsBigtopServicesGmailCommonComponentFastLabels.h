//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol JavaUtilSet;

@interface ComGoogleAppsBigtopServicesGmailCommonComponentFastLabels : NSObject
{
    int bitGroup0_;
    int bitGroup1_;
    int bitGroup2_;
    int bitGroup3_;
    int bitGroup4_;
    int bitGroup5_;
    id <JavaUtilSet> unacceleratedLabels_;
}

+ (void)initialize;
- (void)dealloc;
- (_Bool)intersectsWithComGoogleAppsBigtopServicesGmailCommonComponentFastLabels:(id)arg1;
- (_Bool)isSubSetOfWithComGoogleAppsBigtopServicesGmailCommonComponentFastLabels:(id)arg1;
- (id)getClusterLabelIdsWithJBTCClusterIdentifier:(id)arg1;
- (id)getVaultLabelIds;
- (id)getUserLabelIds;
- (id)getLabelIds;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)hasAnyLabelWithJavaLangIterable:(id)arg1;
- (_Bool)hasAllLabelsWithJavaLangIterable:(id)arg1;
- (_Bool)hasLabelWithNSString:(id)arg1;

@end

