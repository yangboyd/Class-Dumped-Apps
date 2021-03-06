//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSSet, NSString;

@interface GMUAlbumIndex : NSObject
{
    NSDate *_fetchDate;
    NSString *_localIdentifier;
    NSSet *_assetIDs;
    NSString *_localizedTitle;
}

+ (id)indexesWithOptions:(id)arg1;
+ (id)indexesWithAlbumName:(id)arg1;
+ (id)allIndexes;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) NSSet *assetIDs; // @synthesize assetIDs=_assetIDs;
@property(retain, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(readonly, nonatomic) NSDate *fetchDate; // @synthesize fetchDate=_fetchDate;
- (id)initWithCollection:(id)arg1;

@end

