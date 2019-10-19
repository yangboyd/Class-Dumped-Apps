//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COEntity.h"

@class NSArray, NSNumber, NSString;

@interface NFUIDisplayPageSeasonEntity : COEntity
{
    NSNumber *_season;
    NSNumber *_seasonId;
    NSString *_title;
    NSArray *_episodes;
}

+ (id)falcorKeyPathMap;
+ (id)seasonsWithId:(id)arg1 objectContext:(id)arg2;
+ (id)seasonWithData:(id)arg1 objectContext:(id)arg2;
@property(copy, nonatomic) NSArray *episodes; // @synthesize episodes=_episodes;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSNumber *seasonId; // @synthesize seasonId=_seasonId;
@property(copy, nonatomic) NSNumber *season; // @synthesize season=_season;
- (void).cxx_destruct;

@end

