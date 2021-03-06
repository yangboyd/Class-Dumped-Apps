//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSMutableArray, NSString;

@interface AnalyticsAdRequest : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _number_min_distanceIsSet;
    _Bool _first_chunk;
    _Bool _first_chunkIsSet;
    _Bool _post_linksIsSet;
    _Bool _placementIsSet;
    _Bool _platformIsSet;
    _Bool _slotsIsSet;
    long long _number_min_distance;
    NSMutableArray *_post_links;
    NSString *_placement;
    NSString *_platform;
    NSMutableArray *_slots;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool slotsIsSet; // @synthesize slotsIsSet=_slotsIsSet;
@property(retain, nonatomic) NSMutableArray *slots; // @synthesize slots=_slots;
@property(nonatomic) _Bool platformIsSet; // @synthesize platformIsSet=_platformIsSet;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(nonatomic) _Bool placementIsSet; // @synthesize placementIsSet=_placementIsSet;
@property(copy, nonatomic) NSString *placement; // @synthesize placement=_placement;
@property(nonatomic) _Bool post_linksIsSet; // @synthesize post_linksIsSet=_post_linksIsSet;
@property(retain, nonatomic) NSMutableArray *post_links; // @synthesize post_links=_post_links;
@property(nonatomic) _Bool first_chunkIsSet; // @synthesize first_chunkIsSet=_first_chunkIsSet;
@property(nonatomic) _Bool first_chunk; // @synthesize first_chunk=_first_chunk;
@property(nonatomic) _Bool number_min_distanceIsSet; // @synthesize number_min_distanceIsSet=_number_min_distanceIsSet;
@property(nonatomic) long long number_min_distance; // @synthesize number_min_distance=_number_min_distance;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetSlots;
- (void)unsetPlatform;
- (void)unsetPlacement;
- (void)unsetPost_links;
- (void)unsetFirst_chunk;
- (void)unsetNumber_min_distance;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNumber_min_distance:(long long)arg1 first_chunk:(_Bool)arg2 post_links:(id)arg3 placement:(id)arg4 platform:(id)arg5 slots:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

