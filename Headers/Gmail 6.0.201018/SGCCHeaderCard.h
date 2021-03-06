//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSArray, NSMutableArray, NSString, SGCCFieldMetadata;
@protocol GSCProfileData;

@interface SGCCHeaderCard : GPBMessage
{
}

+ (id)descriptor;
@property(readonly, nonatomic) NSArray *gscPhotoArray;
@property(readonly, nonatomic) id <GSCProfileData> gscProfileData;

// Remaining properties
@property(copy, nonatomic) NSString *bestDisplayName; // @dynamic bestDisplayName;
@property(retain, nonatomic) SGCCFieldMetadata *bestDisplayNameMetadata; // @dynamic bestDisplayNameMetadata;
@property(nonatomic) _Bool blocked; // @dynamic blocked;
@property(copy, nonatomic) NSString *department; // @dynamic department;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(nonatomic) _Bool editable; // @dynamic editable;
@property(copy, nonatomic) NSString *givenName; // @dynamic givenName;
@property(nonatomic) _Bool hasBestDisplayName; // @dynamic hasBestDisplayName;
@property(nonatomic) _Bool hasBestDisplayNameMetadata; // @dynamic hasBestDisplayNameMetadata;
@property(nonatomic) _Bool hasBlocked; // @dynamic hasBlocked;
@property(nonatomic) _Bool hasDepartment; // @dynamic hasDepartment;
@property(nonatomic) _Bool hasDisplayName; // @dynamic hasDisplayName;
@property(nonatomic) _Bool hasEditable; // @dynamic hasEditable;
@property(nonatomic) _Bool hasGivenName; // @dynamic hasGivenName;
@property(nonatomic) _Bool hasInViewerDomain; // @dynamic hasInViewerDomain;
@property(nonatomic) _Bool hasJobTitle; // @dynamic hasJobTitle;
@property(nonatomic) _Bool hasObfuscatedGaiaId; // @dynamic hasObfuscatedGaiaId;
@property(nonatomic) _Bool hasObfuscatedGaiaIdMetadata; // @dynamic hasObfuscatedGaiaIdMetadata;
@property(nonatomic) _Bool hasOrganization; // @dynamic hasOrganization;
@property(nonatomic) _Bool hasOrganizationMetadata; // @dynamic hasOrganizationMetadata;
@property(nonatomic) _Bool hasPersonId; // @dynamic hasPersonId;
@property(nonatomic) _Bool hasProfilePhotoURL; // @dynamic hasProfilePhotoURL;
@property(nonatomic) _Bool hasProfilePhotoURLMetadata; // @dynamic hasProfilePhotoURLMetadata;
@property(nonatomic) _Bool hasStarred; // @dynamic hasStarred;
@property(nonatomic) _Bool inViewerDomain; // @dynamic inViewerDomain;
@property(copy, nonatomic) NSString *jobTitle; // @dynamic jobTitle;
@property(copy, nonatomic) NSString *obfuscatedGaiaId; // @dynamic obfuscatedGaiaId;
@property(retain, nonatomic) SGCCFieldMetadata *obfuscatedGaiaIdMetadata; // @dynamic obfuscatedGaiaIdMetadata;
@property(copy, nonatomic) NSString *organization; // @dynamic organization;
@property(retain, nonatomic) SGCCFieldMetadata *organizationMetadata; // @dynamic organizationMetadata;
@property(copy, nonatomic) NSString *personId; // @dynamic personId;
@property(retain, nonatomic) NSMutableArray *photoArray; // @dynamic photoArray;
@property(readonly, nonatomic) unsigned long long photoArray_Count; // @dynamic photoArray_Count;
@property(copy, nonatomic) NSString *profilePhotoURL; // @dynamic profilePhotoURL;
@property(retain, nonatomic) SGCCFieldMetadata *profilePhotoURLMetadata; // @dynamic profilePhotoURLMetadata;
@property(nonatomic) _Bool starred; // @dynamic starred;

@end

