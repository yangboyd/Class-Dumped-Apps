//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LolomoEntity.h"

@class NSString;

@interface LolomoTopTenEntity : LolomoEntity
{
    NSString *_verticalDisplayArt;
    NSString *_nonTopTenDisplayArt;
    NSString *_nonTopTenDisplayArtIdentifier;
}

+ (id)falcorKeyPathsForUpdateMap;
+ (id)falcorKeyPathMap;
@property(readonly, copy, nonatomic) NSString *nonTopTenDisplayArtIdentifier; // @synthesize nonTopTenDisplayArtIdentifier=_nonTopTenDisplayArtIdentifier;
@property(readonly, copy, nonatomic) NSString *nonTopTenDisplayArt; // @synthesize nonTopTenDisplayArt=_nonTopTenDisplayArt;
@property(readonly, copy, nonatomic) NSString *verticalDisplayArt; // @synthesize verticalDisplayArt=_verticalDisplayArt;
- (void).cxx_destruct;

@end

