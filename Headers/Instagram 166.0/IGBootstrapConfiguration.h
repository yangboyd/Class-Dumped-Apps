//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IGBootstrapConfiguration : NSObject
{
    _Bool _shouldUseExpirationDate;
    NSString *_sectionBasedRecipientListSurfaceName;
    NSString *_directSearchSurfaceName;
    NSArray *_activeSurfaceNames;
    NSString *_favoritesSurfaceName;
    NSString *_restrictSurfaceName;
    NSString *_blockSurfaceName;
    NSString *_topSearchSurfaceName;
    NSString *_userTaggingSearchSurfaceName;
    NSString *_userSearchSurfaceName;
}

+ (id)defaultValues;
+ (id)mainAppConfig;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldUseExpirationDate; // @synthesize shouldUseExpirationDate=_shouldUseExpirationDate;
@property(copy, nonatomic) NSString *userSearchSurfaceName; // @synthesize userSearchSurfaceName=_userSearchSurfaceName;
@property(copy, nonatomic) NSString *userTaggingSearchSurfaceName; // @synthesize userTaggingSearchSurfaceName=_userTaggingSearchSurfaceName;
@property(copy, nonatomic) NSString *topSearchSurfaceName; // @synthesize topSearchSurfaceName=_topSearchSurfaceName;
@property(copy, nonatomic) NSString *blockSurfaceName; // @synthesize blockSurfaceName=_blockSurfaceName;
@property(copy, nonatomic) NSString *restrictSurfaceName; // @synthesize restrictSurfaceName=_restrictSurfaceName;
@property(copy, nonatomic) NSString *favoritesSurfaceName; // @synthesize favoritesSurfaceName=_favoritesSurfaceName;
@property(copy, nonatomic) NSArray *activeSurfaceNames; // @synthesize activeSurfaceNames=_activeSurfaceNames;
@property(copy, nonatomic) NSString *directSearchSurfaceName; // @synthesize directSearchSurfaceName=_directSearchSurfaceName;
@property(copy, nonatomic) NSString *sectionBasedRecipientListSurfaceName; // @synthesize sectionBasedRecipientListSurfaceName=_sectionBasedRecipientListSurfaceName;

@end

